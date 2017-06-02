#include "unixusbdriver.h"
#include "platformspecific.h"

unixUsbDriver::unixUsbDriver(QWidget *parent) : genericUsbDriver(parent)
{
    qDebug() << "unixUsbDriver created!";
    tv.tv_sec = 0;
    tv.tv_usec = 100000;
}

unixUsbDriver::~unixUsbDriver(void){
    qDebug() << "\n\nunixUsbDriver destructor ran!";
    //unixDriverDeleteMutex.lock();
    workerThread->terminate();
    delete(isoHandler);
    delete(workerThread);
    qDebug() << "THREAD Gone!";

    for (int i=0; i<NUM_FUTURE_CTX; i++){
        for (int k=0; k<NUM_ISO_ENDPOINTS; k++){
            libusb_free_transfer(isoCtx[k][i]);
        }
    }
    qDebug() << "Transfers freed.";

    libusb_release_interface(handle, 0);
    qDebug() << "Interface released";
    libusb_close(handle);
    qDebug() << "Device Closed";
    libusb_exit(ctx);
    qDebug() << "Libusb exited";
    //unixDriverDeleteMutex.unlock();
    qDebug() << "unixUsbDriver destructor completed!\n\n";
}

unsigned char unixUsbDriver::usbInit(unsigned long VIDin, unsigned long PIDin){
    qDebug() << "Entering unixUsbDriver::usbInit";

    int error;
    //Should only run once.
    if(ctx == NULL){
        error = libusb_init(&ctx);
        if(error){
            qDebug() << "libusb_init FAILED";
            return 1;
        } else qDebug() << "Libusb context initialised";

        libusb_set_debug(ctx, 3);
    }

    if(handle == NULL){
        handle = libusb_open_device_with_vid_pid(ctx, VIDin, PIDin);
        if(handle==NULL){
            qDebug() << "DEVICE NOT FOUND";
            return 1;
        }
        qDebug() << "Device found!!";
    }

    qDebug() << (libusb_kernel_driver_active(handle, 0) ? "KERNEL DRIVER ACTIVE" : "KERNEL DRIVER INACTIVE");
    if(libusb_kernel_driver_active(handle, 0)){
        libusb_detach_kernel_driver(handle, 0);
    }
    error = libusb_claim_interface(handle, 0);
    if(error){
        qDebug() << "libusb_claim_interface FAILED";
        qDebug() << "ERROR" << error << libusb_error_name(error);
        return 1;
    } else qDebug() << "Interface claimed!";

    return 0;
}

void unixUsbDriver::usbSendControl(uint8_t RequestType, uint8_t Request, uint16_t Value, uint16_t Index, uint16_t Length, unsigned char *LDATA){
    //qDebug("Sending Control packet! 0x%x,\t0x%x,\t%u,\t%u,\t%d,\t%u", RequestType, Request, Value, Index, LDATA, Length);
    unsigned char *controlBuffer;

    if(!connected){
        qDebug() << "Control packet requested before device has connected!";
        return;
    }

    if (LDATA==NULL){
        controlBuffer = inBuffer;
    }
    else controlBuffer = LDATA;

    int error = libusb_control_transfer(handle, RequestType, Request, Value, Index, controlBuffer, Length, 4000);
    if(error){
        qDebug("unixUsbDriver::usbSendControl FAILED with error %s", libusb_error_name(error));
    } //else qDebug() << "unixUsbDriver::usbSendControl SUCCESS";
    if(error == LIBUSB_ERROR_NO_DEVICE){
        qDebug() << "Device not found.  Becoming an hero.";
        connectedStatus(false);
        killMe();
    }
    return;
}

unsigned char unixUsbDriver::usbIsoInit(void){
    int error;

    for(int n=0;n<NUM_FUTURE_CTX;n++){
        for (unsigned char k=0;k<NUM_ISO_ENDPOINTS;k++){
            isoCtx[k][n] = libusb_alloc_transfer(ISO_PACKETS_PER_CTX);
            transferCompleted[k][n].number = (k * ISO_PACKETS_PER_CTX) + n;
            transferCompleted[k][n].completed = false;
            libusb_fill_iso_transfer(isoCtx[k][n], handle, pipeID[k], dataBuffer[k][n], ISO_PACKET_SIZE*ISO_PACKETS_PER_CTX, ISO_PACKETS_PER_CTX, isoCallback, (void*)&transferCompleted[k][n], 4000);
            libusb_set_iso_packet_lengths(isoCtx[k][n], ISO_PACKET_SIZE);
            error = libusb_submit_transfer(isoCtx[k][n]);
            if(error){
                qDebug() << "libusb_submit_transfer FAILED";
                qDebug() << "ERROR" << libusb_error_name(error);
            } else qDebug() << "isoCtx submitted successfully!";
        }
    }
    isoTimer = new QTimer();
    isoTimer->setTimerType(Qt::PreciseTimer);
    isoTimer->start(ISO_TIMER_PERIOD);
    connect(isoTimer, SIGNAL(timeout()), this, SLOT(isoTimerTick()));

    qDebug() << "Setup successful!";

    isoHandler = new worker();
    workerThread = new QThread();

    isoHandler->ctx = ctx;
    isoHandler->moveToThread(workerThread);
    connect(workerThread, SIGNAL(started()), isoHandler, SLOT(handle()));

    workerThread->start();

    qDebug() << "MAIN THREAD ID" << QThread::currentThreadId();
    //QThread::sleep(1);
    qDebug() << "Iso Stack initialised!";
    return 1;
}

void unixUsbDriver::isoTimerTick(void){
    timerCount++;

    char subString[3] = "th";
    if(timerCount%10 == 1) strcpy(subString, "st");
    if(timerCount%10 == 2) strcpy(subString, "nd");
    if(timerCount%10 == 3) strcpy(subString, "rd");
    if((timerCount<20) && (timerCount > 10)) strcpy(subString, "th");

    //qDebug("\n\nThis is the %d%s Tick!", timerCount, subString);

    int n, error, earliest = MAX_OVERLAP;
    qint64 minFrame = 9223372036854775807; //max value for 64 bit signed

    unsigned int i, packetLength = 0;
    unsigned char* packetPointer;

    tcBlockMutex.lock();
    for (n=0; n<NUM_FUTURE_CTX; n++){
        if(allEndpointsComplete(n)){
            //qDebug("Transfer %d is complete!!", n);
            if(transferCompleted[0][n].timeReceived < minFrame){
                minFrame = transferCompleted[0][n].timeReceived;
                earliest = n;
            }
        }
    }
    if (earliest == MAX_OVERLAP){
        tcBlockMutex.unlock();
        //qDebug() << "Returning early...";
        return;
    }

    //qDebug() << "Processing Ctx" << earliest;

    //Copy iso data into buffer
    for(i=0;i<isoCtx[0][earliest]->num_iso_packets;i++){
        for(unsigned char k=0; k<NUM_ISO_ENDPOINTS;k++){
            packetPointer = libusb_get_iso_packet_buffer_simple(isoCtx[k][earliest], i);
            //qDebug() << packetLength;
            memcpy(&(outBuffers[currentWriteBuffer][packetLength]), packetPointer, isoCtx[k][earliest]->iso_packet_desc[i].actual_length);
            packetLength += isoCtx[k][earliest]->iso_packet_desc[i].actual_length;
        }
    }

    //qDebug() << "Data copy complete!";

    //Control data for isoDriver
    bufferLengths[currentWriteBuffer] = packetLength;
    currentWriteBuffer = !currentWriteBuffer;

    //Check for incorrect setup and kill if that were the case.
    qint64 ep0frame = transferCompleted[0][earliest].timeReceived;
    qint64 epkframe = transferCompleted[NUM_ISO_ENDPOINTS-1][earliest].timeReceived;
    qint64 framePhaseError = epkframe - ep0frame;

    //Setup next transfer
    for(unsigned char k=0; k<NUM_ISO_ENDPOINTS;k++){
        transferCompleted[k][earliest].completed = false;
        if(shutdownMode){
            error = libusb_cancel_transfer(isoCtx[k][earliest]);
            numCancelled++;
            qDebug() << "Cancelled" << earliest << k;
            qDebug() << "Total Cancelled =" << numCancelled;
            if(numCancelled == (NUM_FUTURE_CTX * NUM_ISO_ENDPOINTS)){
                isoHandler->stopTime = true;
            }
        }else{
            error = libusb_submit_transfer(isoCtx[k][earliest]);
        }
        if(error){
            qDebug() << (shutdownMode ? "libusb_cancel_transfer FAILED" : "libusb_submit_transfer FAILED");
            qDebug() << "ERROR" << libusb_error_name(error);
        } //else qDebug() << "isoCtx submitted successfully!";
    }

    //Looking at end frame, not start frame.  Hence need some leeway.
    if(framePhaseError){
        qDebug("FRAME PHASE ERROR!!\n");
        cumulativeFramePhaseErrors += NUM_ISO_ENDPOINTS;
        qDebug("Cumulative frame phase error of %d.\n", cumulativeFramePhaseErrors);
    } else cumulativeFramePhaseErrors --;

    if(cumulativeFramePhaseErrors < 0){
        cumulativeFramePhaseErrors = 0;
    }

    if(cumulativeFramePhaseErrors > MAX_ALLOWABLE_CUMULATIVE_FRAME_ERROR){
        qDebug("Too much cumulative frame phase errors indicative of bad connection.  Killing USB Driver.\n");
        //killMe();
        qDebug() << "Only kidding!  No death here folks!";
    }

    tcBlockMutex.unlock();
    //qDebug() << "Calling upTick()";
    upTick();
   return;
}

char *unixUsbDriver::isoRead(unsigned int *newLength){
    //*(newLength) = 0;
    //return (char*) NULL;
    //qDebug() << "unixUsbDriver::isoRead";
    *(newLength) = bufferLengths[!currentWriteBuffer];
    return (char*) outBuffers[(unsigned char) !currentWriteBuffer];
}

void unixUsbDriver::recoveryTick(void){
    //This should not be called in shutdown mode since it cause double deletion!
    if(!shutdownMode){
        avrDebug();
    }
}

bool unixUsbDriver::allEndpointsComplete(int n){
    //Just tells you if transfers have completed on _all_ iso endpoints for a given value of n.
    for (unsigned char k=0;k<NUM_ISO_ENDPOINTS;k++){
        if(!transferCompleted[k][n].completed){
            return false;
        }
    }
    return true;
}

void unixUsbDriver::shutdownProcedure(){
    shutdownMode = true;
    QTimer::singleShot(1000, this, SLOT(backupCleanup()));
}

//On physical disconnect, isoTimerTick will not assert stopTime.  Hence this duct-tape function.
void unixUsbDriver::backupCleanup(){
    isoHandler->stopTime = true;
}
