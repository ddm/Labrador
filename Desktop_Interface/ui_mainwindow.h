/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <buffercontrol.h>
#include <cursorenabler.h>
#include <deviceconnecteddisplay.h>
#include <espocombobox.h>
#include <esposlider.h>
#include <espospinbox.h>
#include <functiongencontrol.h>
#include <isodriver.h>
#include <noclosemenu.h>
#include <swipeystack.h>
#include <timedtickbox.h>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionGainAuto;
    QAction *actionGain0_5;
    QAction *actionGain1;
    QAction *actionGain2;
    QAction *actionGain4;
    QAction *actionGain8;
    QAction *actionGain16;
    QAction *actionGain32;
    QAction *actionGain64;
    QAction *actionCalibrate;
    QAction *actionCursor_Stats;
    QAction *actionMax;
    QAction *actionMin;
    QAction *actionMean;
    QAction *actionRMS;
    QAction *actionMax_2;
    QAction *actionMin_2;
    QAction *actionMean_2;
    QAction *actionRMS_2;
    QAction *actionMV;
    QAction *actionV;
    QAction *actionAutoV;
    QAction *actionAutoI;
    QAction *actionMA;
    QAction *actionA;
    QAction *action300;
    QAction *action600;
    QAction *action1200;
    QAction *action2400;
    QAction *action4800;
    QAction *action9600;
    QAction *action14400;
    QAction *action19200;
    QAction *action28800;
    QAction *action38400;
    QAction *action57600;
    QAction *action115200;
    QAction *action8;
    QAction *actionNone;
    QAction *action300_2;
    QAction *action600_2;
    QAction *action1200_2;
    QAction *action2400_2;
    QAction *action4800_2;
    QAction *action9600_2;
    QAction *action14400_2;
    QAction *action19200_2;
    QAction *action28800_2;
    QAction *action38400_2;
    QAction *action57600_2;
    QAction *action115200_2;
    QAction *action8_2;
    QAction *actionNone_2;
    QAction *actionRecord;
    QAction *actionForce_Square;
    QAction *actionAutomatically_Enable_Cursors;
    QAction *action60FPS;
    QAction *action30FPS;
    QAction *action20FPS;
    QAction *action15FPS;
    QAction *action10FPS;
    QAction *action5FPS;
    QAction *actionAuto_Lock;
    QAction *actionSnap_to_Cursors;
    QAction *actionEnter_Manually;
    QAction *actionTake_Snapshot;
    QAction *actionOld_Person_Mode;
    QAction *actionAutoR;
    QAction *actionOhm;
    QAction *actionKOhm;
    QAction *actionAutoC;
    QAction *actionNF;
    QAction *action_F;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    deviceConnectedDisplay *deviceConnected;
    QCustomPlot *scopeAxes;
    swipeyStack *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *scopeGroup_CH1;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *acCoupledLabel_CH1;
    QCheckBox *filterLabel_CH1;
    QCheckBox *doubleSampleLabel;
    QGridLayout *gridLayout_2;
    QLabel *voltageInfoMaxLabel_CH1;
    QLCDNumber *voltageInfoMaxDisplay_CH1;
    QLabel *voltageInfoMinLabel_CH1;
    QLCDNumber *voltageInfoMinDisplay_CH1;
    QLabel *VoltageInfoMeanLabel_CH1;
    QLabel *voltageInfoRmsLabel_CH1;
    QLCDNumber *voltageInfoRmsDisplay_CH1;
    QLCDNumber *voltageInfoMeanDisplay_CH1;
    QGroupBox *cursorGroup;
    QGridLayout *gridLayout_5;
    QCheckBox *cursorHoriCheck;
    cursorEnabler *makeCursorsNicer;
    QCheckBox *cursorVertCheck;
    QCheckBox *scaleHoriCheck;
    QCheckBox *scaleVertCheck;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *scopeGroup_CH2;
    QVBoxLayout *verticalLayout_11;
    QCheckBox *acCoupledLabel_CH2;
    QCheckBox *filterLabel_CH2;
    QCheckBox *xyDisplayLabel;
    QGridLayout *gridLayout_3;
    QLabel *voltageInfoMaxLabel_CH2;
    QLCDNumber *voltageInfoMaxDisplay_CH2;
    QLabel *voltageInfoMinLabel_CH2;
    QLCDNumber *voltageInfoMinDisplay_CH2;
    QLabel *VoltageInfoMeanLabel_CH2;
    QLabel *voltageInfoRmsLabel_CH2;
    QLCDNumber *voltageInfoRmsDisplay_CH2;
    QLCDNumber *voltageInfoMeanDisplay_CH2;
    QGroupBox *triggerGroup;
    QVBoxLayout *verticalLayout_14;
    QComboBox *triggerChannelSelect;
    QDoubleSpinBox *triggerLevelValue;
    QCheckBox *singleShotCheckBox;
    QCheckBox *pausedLabel_CH2;
    QCheckBox *pausedLabeL_CH1;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *signalGenGroup_CH1;
    QVBoxLayout *verticalLayout_19;
    QLabel *waveformLabel_CH1;
    espoComboBox *waveformSelect_CH1;
    QLabel *frequencyLabel_CH1;
    espoSpinBox *frequencyValue_CH1;
    QLabel *amplitudeLabel_CH1;
    espoSpinBox *amplitudeValue_CH1;
    QLabel *dcOffsetLabel_CH1;
    espoSpinBox *dcOffsetValue_CH1;
    QGroupBox *signalGenGroup_CH2;
    QVBoxLayout *verticalLayout_21;
    QLabel *waveformLabel_CH2;
    espoComboBox *waveformSelect_CH2;
    QLabel *frequencyLabel_CH2;
    espoSpinBox *frequencyValue_CH2;
    QLabel *amplitudeLabel_CH2;
    espoSpinBox *amplitudeValue_CH2;
    QLabel *dcOffsetLabel_CH2;
    espoSpinBox *dcOffsetValue_CH2;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *multimeterGroup;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_22;
    QSpacerItem *verticalSpacer_7;
    QLabel *multimeterModeLabel;
    QComboBox *multimeterModeSelect;
    QSpacerItem *verticalSpacer_8;
    QLabel *multimeterResistanceLabel;
    espoSpinBox *multimeterResistanceSelect;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_23;
    QFormLayout *formLayout;
    QLabel *multimeterMaxLabel;
    QLCDNumber *multimeterMaxDisplay;
    QLabel *multimeterMinLabel;
    QLCDNumber *multimeterMinDisplay;
    QSpacerItem *verticalSpacer_2;
    QLabel *multimeterMeanLabel;
    QLCDNumber *multimeterMeanDisplay;
    QSpacerItem *verticalSpacer_4;
    QLabel *multimeterRmsLabel;
    QLCDNumber *multimeterRmsDisplay;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *multimeterPauseCheckBox;
    QWidget *page_5;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *psuGroup;
    QVBoxLayout *verticalLayout_15;
    espoSlider *psuSlider;
    timedTickBox *lockPsuCheckBox;
    QLCDNumber *psuDisplay;
    QVBoxLayout *verticalLayout_4;
    functionGenControl *controller_fg;
    bufferControl *bufferDisplay;
    QLabel *cursorStatsLabel;
    QPushButton *debugButton3;
    QPushButton *debugButton1;
    QSlider *timeBaseSlider;
    QPushButton *debugButton2;
    QTextEdit *debugConsole;
    isoDriver *controller_iso;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_3;
    QPlainTextEdit *console1;
    QPlainTextEdit *console2;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *digitalOutputGroup;
    QGridLayout *gridLayout_4;
    QCheckBox *digitalOutCheckbox_CH3;
    QCheckBox *digitalOutCheckbox_CH2;
    QCheckBox *digitalOutCheckbox_CH1;
    QCheckBox *digitalOutCheckbox_CH4;
    QGroupBox *busSifferGroup_CH1;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *serialDecodingCheck_CH1;
    QVBoxLayout *verticalLayout_6;
    QComboBox *serialDecodingModeSelect_CH1;
    QGroupBox *busSnifferGroup_CH2;
    QVBoxLayout *verticalLayout_16;
    QGroupBox *serialDecodingCheck_CH2;
    QVBoxLayout *verticalLayout_17;
    QComboBox *serialDecodingModeSelect_CH2;
    QCheckBox *pause_LA;
    QMenuBar *menuBar;
    QMenu *menuOscilloscope_2;
    QMenu *menuGain_2;
    noCloseMenu *menuCH1_Stats;
    noCloseMenu *menuCH2_Stats;
    QMenu *menuFrame_rate;
    QMenu *menuRange;
    QMenu *menuMultimeter_2;
    QMenu *menuV_2;
    QMenu *menuI_2;
    QMenu *menuRange_R;
    QMenu *menuRange_C;
    QMenu *menuBus_Sniffer;
    QMenu *menuUART_1;
    QMenu *menuBaud_Rate;
    QMenu *menuType_Here_2;
    QMenu *menuParity_Bit;
    QMenu *menuData_Bits;
    QMenu *menuUART_2;
    QMenu *menuBaud_Rate_2;
    QMenu *menuData_Bits_2;
    QMenu *menuParity_Bit_2;
    QMenu *menuAndroid_Special;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(720, 1280);
        MainWindow->setMinimumSize(QSize(480, 720));
        actionGainAuto = new QAction(MainWindow);
        actionGainAuto->setObjectName(QStringLiteral("actionGainAuto"));
        actionGainAuto->setCheckable(true);
        actionGain0_5 = new QAction(MainWindow);
        actionGain0_5->setObjectName(QStringLiteral("actionGain0_5"));
        actionGain0_5->setCheckable(true);
        actionGain1 = new QAction(MainWindow);
        actionGain1->setObjectName(QStringLiteral("actionGain1"));
        actionGain1->setCheckable(true);
        actionGain2 = new QAction(MainWindow);
        actionGain2->setObjectName(QStringLiteral("actionGain2"));
        actionGain2->setCheckable(true);
        actionGain4 = new QAction(MainWindow);
        actionGain4->setObjectName(QStringLiteral("actionGain4"));
        actionGain4->setCheckable(true);
        actionGain8 = new QAction(MainWindow);
        actionGain8->setObjectName(QStringLiteral("actionGain8"));
        actionGain8->setCheckable(true);
        actionGain16 = new QAction(MainWindow);
        actionGain16->setObjectName(QStringLiteral("actionGain16"));
        actionGain16->setCheckable(true);
        actionGain32 = new QAction(MainWindow);
        actionGain32->setObjectName(QStringLiteral("actionGain32"));
        actionGain32->setCheckable(true);
        actionGain64 = new QAction(MainWindow);
        actionGain64->setObjectName(QStringLiteral("actionGain64"));
        actionGain64->setCheckable(true);
        actionGain64->setMenuRole(QAction::TextHeuristicRole);
        actionCalibrate = new QAction(MainWindow);
        actionCalibrate->setObjectName(QStringLiteral("actionCalibrate"));
        actionCursor_Stats = new QAction(MainWindow);
        actionCursor_Stats->setObjectName(QStringLiteral("actionCursor_Stats"));
        actionCursor_Stats->setCheckable(true);
        actionCursor_Stats->setChecked(true);
        actionMax = new QAction(MainWindow);
        actionMax->setObjectName(QStringLiteral("actionMax"));
        actionMax->setCheckable(true);
        actionMin = new QAction(MainWindow);
        actionMin->setObjectName(QStringLiteral("actionMin"));
        actionMin->setCheckable(true);
        actionMean = new QAction(MainWindow);
        actionMean->setObjectName(QStringLiteral("actionMean"));
        actionMean->setCheckable(true);
        actionRMS = new QAction(MainWindow);
        actionRMS->setObjectName(QStringLiteral("actionRMS"));
        actionRMS->setCheckable(true);
        actionMax_2 = new QAction(MainWindow);
        actionMax_2->setObjectName(QStringLiteral("actionMax_2"));
        actionMax_2->setCheckable(true);
        actionMin_2 = new QAction(MainWindow);
        actionMin_2->setObjectName(QStringLiteral("actionMin_2"));
        actionMin_2->setCheckable(true);
        actionMean_2 = new QAction(MainWindow);
        actionMean_2->setObjectName(QStringLiteral("actionMean_2"));
        actionMean_2->setCheckable(true);
        actionRMS_2 = new QAction(MainWindow);
        actionRMS_2->setObjectName(QStringLiteral("actionRMS_2"));
        actionRMS_2->setCheckable(true);
        actionMV = new QAction(MainWindow);
        actionMV->setObjectName(QStringLiteral("actionMV"));
        actionMV->setCheckable(true);
        actionMV->setChecked(false);
        actionV = new QAction(MainWindow);
        actionV->setObjectName(QStringLiteral("actionV"));
        actionV->setCheckable(true);
        actionV->setChecked(false);
        actionAutoV = new QAction(MainWindow);
        actionAutoV->setObjectName(QStringLiteral("actionAutoV"));
        actionAutoV->setCheckable(true);
        actionAutoV->setChecked(true);
        actionAutoI = new QAction(MainWindow);
        actionAutoI->setObjectName(QStringLiteral("actionAutoI"));
        actionAutoI->setCheckable(true);
        actionAutoI->setChecked(true);
        actionMA = new QAction(MainWindow);
        actionMA->setObjectName(QStringLiteral("actionMA"));
        actionMA->setCheckable(true);
        actionMA->setChecked(false);
        actionA = new QAction(MainWindow);
        actionA->setObjectName(QStringLiteral("actionA"));
        actionA->setCheckable(true);
        action300 = new QAction(MainWindow);
        action300->setObjectName(QStringLiteral("action300"));
        action300->setCheckable(true);
        action600 = new QAction(MainWindow);
        action600->setObjectName(QStringLiteral("action600"));
        action600->setCheckable(true);
        action1200 = new QAction(MainWindow);
        action1200->setObjectName(QStringLiteral("action1200"));
        action1200->setCheckable(true);
        action2400 = new QAction(MainWindow);
        action2400->setObjectName(QStringLiteral("action2400"));
        action2400->setCheckable(true);
        action4800 = new QAction(MainWindow);
        action4800->setObjectName(QStringLiteral("action4800"));
        action4800->setCheckable(true);
        action9600 = new QAction(MainWindow);
        action9600->setObjectName(QStringLiteral("action9600"));
        action9600->setCheckable(true);
        action14400 = new QAction(MainWindow);
        action14400->setObjectName(QStringLiteral("action14400"));
        action14400->setCheckable(true);
        action19200 = new QAction(MainWindow);
        action19200->setObjectName(QStringLiteral("action19200"));
        action19200->setCheckable(true);
        action28800 = new QAction(MainWindow);
        action28800->setObjectName(QStringLiteral("action28800"));
        action28800->setCheckable(true);
        action38400 = new QAction(MainWindow);
        action38400->setObjectName(QStringLiteral("action38400"));
        action38400->setCheckable(true);
        action57600 = new QAction(MainWindow);
        action57600->setObjectName(QStringLiteral("action57600"));
        action57600->setCheckable(true);
        action115200 = new QAction(MainWindow);
        action115200->setObjectName(QStringLiteral("action115200"));
        action115200->setCheckable(true);
        action8 = new QAction(MainWindow);
        action8->setObjectName(QStringLiteral("action8"));
        action8->setCheckable(true);
        actionNone = new QAction(MainWindow);
        actionNone->setObjectName(QStringLiteral("actionNone"));
        actionNone->setCheckable(true);
        action300_2 = new QAction(MainWindow);
        action300_2->setObjectName(QStringLiteral("action300_2"));
        action300_2->setCheckable(true);
        action600_2 = new QAction(MainWindow);
        action600_2->setObjectName(QStringLiteral("action600_2"));
        action600_2->setCheckable(true);
        action1200_2 = new QAction(MainWindow);
        action1200_2->setObjectName(QStringLiteral("action1200_2"));
        action1200_2->setCheckable(true);
        action2400_2 = new QAction(MainWindow);
        action2400_2->setObjectName(QStringLiteral("action2400_2"));
        action2400_2->setCheckable(true);
        action4800_2 = new QAction(MainWindow);
        action4800_2->setObjectName(QStringLiteral("action4800_2"));
        action4800_2->setCheckable(true);
        action9600_2 = new QAction(MainWindow);
        action9600_2->setObjectName(QStringLiteral("action9600_2"));
        action9600_2->setCheckable(true);
        action14400_2 = new QAction(MainWindow);
        action14400_2->setObjectName(QStringLiteral("action14400_2"));
        action14400_2->setCheckable(true);
        action19200_2 = new QAction(MainWindow);
        action19200_2->setObjectName(QStringLiteral("action19200_2"));
        action19200_2->setCheckable(true);
        action28800_2 = new QAction(MainWindow);
        action28800_2->setObjectName(QStringLiteral("action28800_2"));
        action28800_2->setCheckable(true);
        action38400_2 = new QAction(MainWindow);
        action38400_2->setObjectName(QStringLiteral("action38400_2"));
        action38400_2->setCheckable(true);
        action57600_2 = new QAction(MainWindow);
        action57600_2->setObjectName(QStringLiteral("action57600_2"));
        action57600_2->setCheckable(true);
        action115200_2 = new QAction(MainWindow);
        action115200_2->setObjectName(QStringLiteral("action115200_2"));
        action115200_2->setCheckable(true);
        action8_2 = new QAction(MainWindow);
        action8_2->setObjectName(QStringLiteral("action8_2"));
        action8_2->setCheckable(true);
        actionNone_2 = new QAction(MainWindow);
        actionNone_2->setObjectName(QStringLiteral("actionNone_2"));
        actionNone_2->setCheckable(true);
        actionRecord = new QAction(MainWindow);
        actionRecord->setObjectName(QStringLiteral("actionRecord"));
        actionRecord->setCheckable(true);
        actionForce_Square = new QAction(MainWindow);
        actionForce_Square->setObjectName(QStringLiteral("actionForce_Square"));
        actionForce_Square->setCheckable(true);
        actionAutomatically_Enable_Cursors = new QAction(MainWindow);
        actionAutomatically_Enable_Cursors->setObjectName(QStringLiteral("actionAutomatically_Enable_Cursors"));
        actionAutomatically_Enable_Cursors->setCheckable(true);
        actionAutomatically_Enable_Cursors->setChecked(true);
        action60FPS = new QAction(MainWindow);
        action60FPS->setObjectName(QStringLiteral("action60FPS"));
        action60FPS->setCheckable(true);
        action60FPS->setChecked(true);
        action30FPS = new QAction(MainWindow);
        action30FPS->setObjectName(QStringLiteral("action30FPS"));
        action30FPS->setCheckable(true);
        action20FPS = new QAction(MainWindow);
        action20FPS->setObjectName(QStringLiteral("action20FPS"));
        action20FPS->setCheckable(true);
        action15FPS = new QAction(MainWindow);
        action15FPS->setObjectName(QStringLiteral("action15FPS"));
        action15FPS->setCheckable(true);
        action10FPS = new QAction(MainWindow);
        action10FPS->setObjectName(QStringLiteral("action10FPS"));
        action10FPS->setCheckable(true);
        action5FPS = new QAction(MainWindow);
        action5FPS->setObjectName(QStringLiteral("action5FPS"));
        action5FPS->setCheckable(true);
        actionAuto_Lock = new QAction(MainWindow);
        actionAuto_Lock->setObjectName(QStringLiteral("actionAuto_Lock"));
        actionAuto_Lock->setCheckable(true);
        actionAuto_Lock->setChecked(true);
        actionSnap_to_Cursors = new QAction(MainWindow);
        actionSnap_to_Cursors->setObjectName(QStringLiteral("actionSnap_to_Cursors"));
        actionEnter_Manually = new QAction(MainWindow);
        actionEnter_Manually->setObjectName(QStringLiteral("actionEnter_Manually"));
        actionTake_Snapshot = new QAction(MainWindow);
        actionTake_Snapshot->setObjectName(QStringLiteral("actionTake_Snapshot"));
        actionOld_Person_Mode = new QAction(MainWindow);
        actionOld_Person_Mode->setObjectName(QStringLiteral("actionOld_Person_Mode"));
        actionOld_Person_Mode->setCheckable(true);
        actionAutoR = new QAction(MainWindow);
        actionAutoR->setObjectName(QStringLiteral("actionAutoR"));
        actionAutoR->setCheckable(true);
        actionAutoR->setChecked(true);
        actionOhm = new QAction(MainWindow);
        actionOhm->setObjectName(QStringLiteral("actionOhm"));
        actionOhm->setCheckable(true);
        actionKOhm = new QAction(MainWindow);
        actionKOhm->setObjectName(QStringLiteral("actionKOhm"));
        actionKOhm->setCheckable(true);
        actionAutoC = new QAction(MainWindow);
        actionAutoC->setObjectName(QStringLiteral("actionAutoC"));
        actionAutoC->setCheckable(true);
        actionAutoC->setChecked(true);
        actionNF = new QAction(MainWindow);
        actionNF->setObjectName(QStringLiteral("actionNF"));
        actionNF->setCheckable(true);
        action_F = new QAction(MainWindow);
        action_F->setObjectName(QStringLiteral("action_F"));
        action_F->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        deviceConnected = new deviceConnectedDisplay(centralWidget);
        deviceConnected->setObjectName(QStringLiteral("deviceConnected"));
        deviceConnected->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(deviceConnected);

        scopeAxes = new QCustomPlot(centralWidget);
        scopeAxes->setObjectName(QStringLiteral("scopeAxes"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scopeAxes->sizePolicy().hasHeightForWidth());
        scopeAxes->setSizePolicy(sizePolicy);
        scopeAxes->setMinimumSize(QSize(720, 400));
        scopeAxes->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_5->addWidget(scopeAxes);

        stackedWidget = new swipeyStack(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        stackedWidget->setMaximumSize(QSize(16777215, 400));
        QFont font;
        font.setPointSize(8);
        stackedWidget->setFont(font);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setFont(font);
        horizontalLayout = new QHBoxLayout(page);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 2, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(2);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        scopeGroup_CH1 = new QGroupBox(page);
        scopeGroup_CH1->setObjectName(QStringLiteral("scopeGroup_CH1"));
        scopeGroup_CH1->setFlat(false);
        scopeGroup_CH1->setCheckable(true);
        scopeGroup_CH1->setChecked(true);
        verticalLayout_2 = new QVBoxLayout(scopeGroup_CH1);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        acCoupledLabel_CH1 = new QCheckBox(scopeGroup_CH1);
        acCoupledLabel_CH1->setObjectName(QStringLiteral("acCoupledLabel_CH1"));

        verticalLayout_2->addWidget(acCoupledLabel_CH1);

        filterLabel_CH1 = new QCheckBox(scopeGroup_CH1);
        filterLabel_CH1->setObjectName(QStringLiteral("filterLabel_CH1"));

        verticalLayout_2->addWidget(filterLabel_CH1);

        doubleSampleLabel = new QCheckBox(scopeGroup_CH1);
        doubleSampleLabel->setObjectName(QStringLiteral("doubleSampleLabel"));

        verticalLayout_2->addWidget(doubleSampleLabel);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        voltageInfoMaxLabel_CH1 = new QLabel(scopeGroup_CH1);
        voltageInfoMaxLabel_CH1->setObjectName(QStringLiteral("voltageInfoMaxLabel_CH1"));

        gridLayout_2->addWidget(voltageInfoMaxLabel_CH1, 0, 0, 1, 1);

        voltageInfoMaxDisplay_CH1 = new QLCDNumber(scopeGroup_CH1);
        voltageInfoMaxDisplay_CH1->setObjectName(QStringLiteral("voltageInfoMaxDisplay_CH1"));
        voltageInfoMaxDisplay_CH1->setMinimumSize(QSize(0, 24));
        voltageInfoMaxDisplay_CH1->setFrameShape(QFrame::NoFrame);

        gridLayout_2->addWidget(voltageInfoMaxDisplay_CH1, 0, 1, 1, 1);

        voltageInfoMinLabel_CH1 = new QLabel(scopeGroup_CH1);
        voltageInfoMinLabel_CH1->setObjectName(QStringLiteral("voltageInfoMinLabel_CH1"));

        gridLayout_2->addWidget(voltageInfoMinLabel_CH1, 1, 0, 1, 1);

        voltageInfoMinDisplay_CH1 = new QLCDNumber(scopeGroup_CH1);
        voltageInfoMinDisplay_CH1->setObjectName(QStringLiteral("voltageInfoMinDisplay_CH1"));
        voltageInfoMinDisplay_CH1->setMinimumSize(QSize(0, 24));
        voltageInfoMinDisplay_CH1->setFrameShape(QFrame::NoFrame);

        gridLayout_2->addWidget(voltageInfoMinDisplay_CH1, 1, 1, 1, 1);

        VoltageInfoMeanLabel_CH1 = new QLabel(scopeGroup_CH1);
        VoltageInfoMeanLabel_CH1->setObjectName(QStringLiteral("VoltageInfoMeanLabel_CH1"));

        gridLayout_2->addWidget(VoltageInfoMeanLabel_CH1, 2, 0, 1, 1);

        voltageInfoRmsLabel_CH1 = new QLabel(scopeGroup_CH1);
        voltageInfoRmsLabel_CH1->setObjectName(QStringLiteral("voltageInfoRmsLabel_CH1"));

        gridLayout_2->addWidget(voltageInfoRmsLabel_CH1, 3, 0, 1, 1);

        voltageInfoRmsDisplay_CH1 = new QLCDNumber(scopeGroup_CH1);
        voltageInfoRmsDisplay_CH1->setObjectName(QStringLiteral("voltageInfoRmsDisplay_CH1"));
        voltageInfoRmsDisplay_CH1->setMinimumSize(QSize(0, 24));
        voltageInfoRmsDisplay_CH1->setFrameShape(QFrame::NoFrame);

        gridLayout_2->addWidget(voltageInfoRmsDisplay_CH1, 3, 1, 1, 1);

        voltageInfoMeanDisplay_CH1 = new QLCDNumber(scopeGroup_CH1);
        voltageInfoMeanDisplay_CH1->setObjectName(QStringLiteral("voltageInfoMeanDisplay_CH1"));
        voltageInfoMeanDisplay_CH1->setMinimumSize(QSize(0, 24));
        voltageInfoMeanDisplay_CH1->setFrameShape(QFrame::NoFrame);

        gridLayout_2->addWidget(voltageInfoMeanDisplay_CH1, 2, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        verticalLayout_9->addWidget(scopeGroup_CH1);

        cursorGroup = new QGroupBox(page);
        cursorGroup->setObjectName(QStringLiteral("cursorGroup"));
        cursorGroup->setEnabled(true);
        cursorGroup->setCheckable(false);
        cursorGroup->setChecked(false);
        gridLayout_5 = new QGridLayout(cursorGroup);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        cursorHoriCheck = new QCheckBox(cursorGroup);
        cursorHoriCheck->setObjectName(QStringLiteral("cursorHoriCheck"));

        gridLayout_5->addWidget(cursorHoriCheck, 0, 0, 1, 1);

        makeCursorsNicer = new cursorEnabler(cursorGroup);
        makeCursorsNicer->setObjectName(QStringLiteral("makeCursorsNicer"));

        gridLayout_5->addWidget(makeCursorsNicer, 2, 0, 1, 1);

        cursorVertCheck = new QCheckBox(cursorGroup);
        cursorVertCheck->setObjectName(QStringLiteral("cursorVertCheck"));

        gridLayout_5->addWidget(cursorVertCheck, 1, 0, 1, 1);

        scaleHoriCheck = new QCheckBox(cursorGroup);
        scaleHoriCheck->setObjectName(QStringLiteral("scaleHoriCheck"));

        gridLayout_5->addWidget(scaleHoriCheck, 0, 1, 1, 1);

        scaleVertCheck = new QCheckBox(cursorGroup);
        scaleVertCheck->setObjectName(QStringLiteral("scaleVertCheck"));
        scaleVertCheck->setChecked(true);

        gridLayout_5->addWidget(scaleVertCheck, 1, 1, 1, 1);


        verticalLayout_9->addWidget(cursorGroup);


        horizontalLayout_5->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(2);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        scopeGroup_CH2 = new QGroupBox(page);
        scopeGroup_CH2->setObjectName(QStringLiteral("scopeGroup_CH2"));
        scopeGroup_CH2->setEnabled(true);
        scopeGroup_CH2->setFlat(false);
        scopeGroup_CH2->setCheckable(true);
        scopeGroup_CH2->setChecked(false);
        verticalLayout_11 = new QVBoxLayout(scopeGroup_CH2);
        verticalLayout_11->setSpacing(2);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        acCoupledLabel_CH2 = new QCheckBox(scopeGroup_CH2);
        acCoupledLabel_CH2->setObjectName(QStringLiteral("acCoupledLabel_CH2"));

        verticalLayout_11->addWidget(acCoupledLabel_CH2);

        filterLabel_CH2 = new QCheckBox(scopeGroup_CH2);
        filterLabel_CH2->setObjectName(QStringLiteral("filterLabel_CH2"));

        verticalLayout_11->addWidget(filterLabel_CH2);

        xyDisplayLabel = new QCheckBox(scopeGroup_CH2);
        xyDisplayLabel->setObjectName(QStringLiteral("xyDisplayLabel"));

        verticalLayout_11->addWidget(xyDisplayLabel);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        voltageInfoMaxLabel_CH2 = new QLabel(scopeGroup_CH2);
        voltageInfoMaxLabel_CH2->setObjectName(QStringLiteral("voltageInfoMaxLabel_CH2"));

        gridLayout_3->addWidget(voltageInfoMaxLabel_CH2, 0, 0, 1, 1);

        voltageInfoMaxDisplay_CH2 = new QLCDNumber(scopeGroup_CH2);
        voltageInfoMaxDisplay_CH2->setObjectName(QStringLiteral("voltageInfoMaxDisplay_CH2"));
        voltageInfoMaxDisplay_CH2->setMinimumSize(QSize(0, 24));
        voltageInfoMaxDisplay_CH2->setFrameShape(QFrame::NoFrame);

        gridLayout_3->addWidget(voltageInfoMaxDisplay_CH2, 0, 1, 1, 1);

        voltageInfoMinLabel_CH2 = new QLabel(scopeGroup_CH2);
        voltageInfoMinLabel_CH2->setObjectName(QStringLiteral("voltageInfoMinLabel_CH2"));

        gridLayout_3->addWidget(voltageInfoMinLabel_CH2, 1, 0, 1, 1);

        voltageInfoMinDisplay_CH2 = new QLCDNumber(scopeGroup_CH2);
        voltageInfoMinDisplay_CH2->setObjectName(QStringLiteral("voltageInfoMinDisplay_CH2"));
        voltageInfoMinDisplay_CH2->setMinimumSize(QSize(0, 24));
        voltageInfoMinDisplay_CH2->setFrameShape(QFrame::NoFrame);

        gridLayout_3->addWidget(voltageInfoMinDisplay_CH2, 1, 1, 1, 1);

        VoltageInfoMeanLabel_CH2 = new QLabel(scopeGroup_CH2);
        VoltageInfoMeanLabel_CH2->setObjectName(QStringLiteral("VoltageInfoMeanLabel_CH2"));

        gridLayout_3->addWidget(VoltageInfoMeanLabel_CH2, 2, 0, 1, 1);

        voltageInfoRmsLabel_CH2 = new QLabel(scopeGroup_CH2);
        voltageInfoRmsLabel_CH2->setObjectName(QStringLiteral("voltageInfoRmsLabel_CH2"));

        gridLayout_3->addWidget(voltageInfoRmsLabel_CH2, 3, 0, 1, 1);

        voltageInfoRmsDisplay_CH2 = new QLCDNumber(scopeGroup_CH2);
        voltageInfoRmsDisplay_CH2->setObjectName(QStringLiteral("voltageInfoRmsDisplay_CH2"));
        voltageInfoRmsDisplay_CH2->setMinimumSize(QSize(0, 24));
        voltageInfoRmsDisplay_CH2->setFrameShape(QFrame::NoFrame);

        gridLayout_3->addWidget(voltageInfoRmsDisplay_CH2, 3, 1, 1, 1);

        voltageInfoMeanDisplay_CH2 = new QLCDNumber(scopeGroup_CH2);
        voltageInfoMeanDisplay_CH2->setObjectName(QStringLiteral("voltageInfoMeanDisplay_CH2"));
        voltageInfoMeanDisplay_CH2->setMinimumSize(QSize(0, 24));
        voltageInfoMeanDisplay_CH2->setFrameShape(QFrame::NoFrame);

        gridLayout_3->addWidget(voltageInfoMeanDisplay_CH2, 2, 1, 1, 1);


        verticalLayout_11->addLayout(gridLayout_3);


        verticalLayout_10->addWidget(scopeGroup_CH2);

        triggerGroup = new QGroupBox(page);
        triggerGroup->setObjectName(QStringLiteral("triggerGroup"));
        triggerGroup->setEnabled(true);
        triggerGroup->setCheckable(true);
        triggerGroup->setChecked(false);
        verticalLayout_14 = new QVBoxLayout(triggerGroup);
        verticalLayout_14->setSpacing(2);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        triggerChannelSelect = new QComboBox(triggerGroup);
        triggerChannelSelect->setObjectName(QStringLiteral("triggerChannelSelect"));

        verticalLayout_14->addWidget(triggerChannelSelect);

        triggerLevelValue = new QDoubleSpinBox(triggerGroup);
        triggerLevelValue->setObjectName(QStringLiteral("triggerLevelValue"));
        triggerLevelValue->setMinimum(-20);
        triggerLevelValue->setMaximum(20);
        triggerLevelValue->setSingleStep(0.1);

        verticalLayout_14->addWidget(triggerLevelValue);

        singleShotCheckBox = new QCheckBox(triggerGroup);
        singleShotCheckBox->setObjectName(QStringLiteral("singleShotCheckBox"));

        verticalLayout_14->addWidget(singleShotCheckBox);


        verticalLayout_10->addWidget(triggerGroup);


        horizontalLayout_5->addLayout(verticalLayout_10);


        verticalLayout->addLayout(horizontalLayout_5);

        pausedLabel_CH2 = new QCheckBox(page);
        pausedLabel_CH2->setObjectName(QStringLiteral("pausedLabel_CH2"));

        verticalLayout->addWidget(pausedLabel_CH2);

        pausedLabeL_CH1 = new QCheckBox(page);
        pausedLabeL_CH1->setObjectName(QStringLiteral("pausedLabeL_CH1"));

        verticalLayout->addWidget(pausedLabeL_CH1);


        horizontalLayout->addLayout(verticalLayout);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        horizontalLayout_2 = new QHBoxLayout(page_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        signalGenGroup_CH1 = new QGroupBox(page_2);
        signalGenGroup_CH1->setObjectName(QStringLiteral("signalGenGroup_CH1"));
        signalGenGroup_CH1->setEnabled(true);
        signalGenGroup_CH1->setCheckable(false);
        signalGenGroup_CH1->setChecked(false);
        verticalLayout_19 = new QVBoxLayout(signalGenGroup_CH1);
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        waveformLabel_CH1 = new QLabel(signalGenGroup_CH1);
        waveformLabel_CH1->setObjectName(QStringLiteral("waveformLabel_CH1"));

        verticalLayout_19->addWidget(waveformLabel_CH1);

        waveformSelect_CH1 = new espoComboBox(signalGenGroup_CH1);
        waveformSelect_CH1->setObjectName(QStringLiteral("waveformSelect_CH1"));

        verticalLayout_19->addWidget(waveformSelect_CH1);

        frequencyLabel_CH1 = new QLabel(signalGenGroup_CH1);
        frequencyLabel_CH1->setObjectName(QStringLiteral("frequencyLabel_CH1"));

        verticalLayout_19->addWidget(frequencyLabel_CH1);

        frequencyValue_CH1 = new espoSpinBox(signalGenGroup_CH1);
        frequencyValue_CH1->setObjectName(QStringLiteral("frequencyValue_CH1"));
        frequencyValue_CH1->setSuffix(QStringLiteral("Hz"));
        frequencyValue_CH1->setDecimals(2);
        frequencyValue_CH1->setMinimum(0);
        frequencyValue_CH1->setMaximum(1e+6);
        frequencyValue_CH1->setSingleStep(100);
        frequencyValue_CH1->setValue(1000);

        verticalLayout_19->addWidget(frequencyValue_CH1);

        amplitudeLabel_CH1 = new QLabel(signalGenGroup_CH1);
        amplitudeLabel_CH1->setObjectName(QStringLiteral("amplitudeLabel_CH1"));

        verticalLayout_19->addWidget(amplitudeLabel_CH1);

        amplitudeValue_CH1 = new espoSpinBox(signalGenGroup_CH1);
        amplitudeValue_CH1->setObjectName(QStringLiteral("amplitudeValue_CH1"));
        amplitudeValue_CH1->setMaximum(9.6);
        amplitudeValue_CH1->setSingleStep(0.1);

        verticalLayout_19->addWidget(amplitudeValue_CH1);

        dcOffsetLabel_CH1 = new QLabel(signalGenGroup_CH1);
        dcOffsetLabel_CH1->setObjectName(QStringLiteral("dcOffsetLabel_CH1"));

        verticalLayout_19->addWidget(dcOffsetLabel_CH1);

        dcOffsetValue_CH1 = new espoSpinBox(signalGenGroup_CH1);
        dcOffsetValue_CH1->setObjectName(QStringLiteral("dcOffsetValue_CH1"));
        dcOffsetValue_CH1->setMaximum(9.6);
        dcOffsetValue_CH1->setSingleStep(0.1);

        verticalLayout_19->addWidget(dcOffsetValue_CH1);


        horizontalLayout_2->addWidget(signalGenGroup_CH1);

        signalGenGroup_CH2 = new QGroupBox(page_2);
        signalGenGroup_CH2->setObjectName(QStringLiteral("signalGenGroup_CH2"));
        signalGenGroup_CH2->setEnabled(true);
        signalGenGroup_CH2->setCheckable(false);
        signalGenGroup_CH2->setChecked(false);
        verticalLayout_21 = new QVBoxLayout(signalGenGroup_CH2);
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        waveformLabel_CH2 = new QLabel(signalGenGroup_CH2);
        waveformLabel_CH2->setObjectName(QStringLiteral("waveformLabel_CH2"));
        waveformLabel_CH2->setEnabled(true);

        verticalLayout_21->addWidget(waveformLabel_CH2);

        waveformSelect_CH2 = new espoComboBox(signalGenGroup_CH2);
        waveformSelect_CH2->setObjectName(QStringLiteral("waveformSelect_CH2"));
        waveformSelect_CH2->setEnabled(true);

        verticalLayout_21->addWidget(waveformSelect_CH2);

        frequencyLabel_CH2 = new QLabel(signalGenGroup_CH2);
        frequencyLabel_CH2->setObjectName(QStringLiteral("frequencyLabel_CH2"));
        frequencyLabel_CH2->setEnabled(true);

        verticalLayout_21->addWidget(frequencyLabel_CH2);

        frequencyValue_CH2 = new espoSpinBox(signalGenGroup_CH2);
        frequencyValue_CH2->setObjectName(QStringLiteral("frequencyValue_CH2"));
        frequencyValue_CH2->setEnabled(true);
        frequencyValue_CH2->setSuffix(QStringLiteral("Hz"));
        frequencyValue_CH2->setDecimals(2);
        frequencyValue_CH2->setMaximum(1e+6);
        frequencyValue_CH2->setSingleStep(100);
        frequencyValue_CH2->setValue(1000);

        verticalLayout_21->addWidget(frequencyValue_CH2);

        amplitudeLabel_CH2 = new QLabel(signalGenGroup_CH2);
        amplitudeLabel_CH2->setObjectName(QStringLiteral("amplitudeLabel_CH2"));
        amplitudeLabel_CH2->setEnabled(true);

        verticalLayout_21->addWidget(amplitudeLabel_CH2);

        amplitudeValue_CH2 = new espoSpinBox(signalGenGroup_CH2);
        amplitudeValue_CH2->setObjectName(QStringLiteral("amplitudeValue_CH2"));
        amplitudeValue_CH2->setEnabled(true);
        amplitudeValue_CH2->setMaximum(10);
        amplitudeValue_CH2->setSingleStep(0.1);

        verticalLayout_21->addWidget(amplitudeValue_CH2);

        dcOffsetLabel_CH2 = new QLabel(signalGenGroup_CH2);
        dcOffsetLabel_CH2->setObjectName(QStringLiteral("dcOffsetLabel_CH2"));
        dcOffsetLabel_CH2->setEnabled(true);

        verticalLayout_21->addWidget(dcOffsetLabel_CH2);

        dcOffsetValue_CH2 = new espoSpinBox(signalGenGroup_CH2);
        dcOffsetValue_CH2->setObjectName(QStringLiteral("dcOffsetValue_CH2"));
        dcOffsetValue_CH2->setEnabled(true);
        dcOffsetValue_CH2->setMaximum(10);
        dcOffsetValue_CH2->setSingleStep(0.1);

        verticalLayout_21->addWidget(dcOffsetValue_CH2);


        horizontalLayout_2->addWidget(signalGenGroup_CH2);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        horizontalLayout_3 = new QHBoxLayout(page_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        multimeterGroup = new QGroupBox(page_3);
        multimeterGroup->setObjectName(QStringLiteral("multimeterGroup"));
        multimeterGroup->setEnabled(false);
        multimeterGroup->setCheckable(true);
        multimeterGroup->setChecked(false);
        verticalLayout_13 = new QVBoxLayout(multimeterGroup);
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_22->addItem(verticalSpacer_7);

        multimeterModeLabel = new QLabel(multimeterGroup);
        multimeterModeLabel->setObjectName(QStringLiteral("multimeterModeLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(multimeterModeLabel->sizePolicy().hasHeightForWidth());
        multimeterModeLabel->setSizePolicy(sizePolicy2);
        multimeterModeLabel->setMaximumSize(QSize(180, 16777215));
        multimeterModeLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_22->addWidget(multimeterModeLabel);

        multimeterModeSelect = new QComboBox(multimeterGroup);
        multimeterModeSelect->setObjectName(QStringLiteral("multimeterModeSelect"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(multimeterModeSelect->sizePolicy().hasHeightForWidth());
        multimeterModeSelect->setSizePolicy(sizePolicy3);
        multimeterModeSelect->setMaximumSize(QSize(180, 16777215));

        verticalLayout_22->addWidget(multimeterModeSelect);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_22->addItem(verticalSpacer_8);

        multimeterResistanceLabel = new QLabel(multimeterGroup);
        multimeterResistanceLabel->setObjectName(QStringLiteral("multimeterResistanceLabel"));
        sizePolicy2.setHeightForWidth(multimeterResistanceLabel->sizePolicy().hasHeightForWidth());
        multimeterResistanceLabel->setSizePolicy(sizePolicy2);
        multimeterResistanceLabel->setMaximumSize(QSize(180, 16777215));
        multimeterResistanceLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_22->addWidget(multimeterResistanceLabel);

        multimeterResistanceSelect = new espoSpinBox(multimeterGroup);
        multimeterResistanceSelect->setObjectName(QStringLiteral("multimeterResistanceSelect"));
        sizePolicy3.setHeightForWidth(multimeterResistanceSelect->sizePolicy().hasHeightForWidth());
        multimeterResistanceSelect->setSizePolicy(sizePolicy3);
        multimeterResistanceSelect->setMaximumSize(QSize(180, 16777215));
        multimeterResistanceSelect->setDecimals(0);
        multimeterResistanceSelect->setMaximum(1e+6);

        verticalLayout_22->addWidget(multimeterResistanceSelect);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_22->addItem(verticalSpacer_6);


        horizontalLayout_9->addLayout(verticalLayout_22);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(0);
        formLayout->setVerticalSpacing(0);
        multimeterMaxLabel = new QLabel(multimeterGroup);
        multimeterMaxLabel->setObjectName(QStringLiteral("multimeterMaxLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(multimeterMaxLabel->sizePolicy().hasHeightForWidth());
        multimeterMaxLabel->setSizePolicy(sizePolicy4);
        multimeterMaxLabel->setMinimumSize(QSize(0, 96));

        formLayout->setWidget(1, QFormLayout::LabelRole, multimeterMaxLabel);

        multimeterMaxDisplay = new QLCDNumber(multimeterGroup);
        multimeterMaxDisplay->setObjectName(QStringLiteral("multimeterMaxDisplay"));
        sizePolicy4.setHeightForWidth(multimeterMaxDisplay->sizePolicy().hasHeightForWidth());
        multimeterMaxDisplay->setSizePolicy(sizePolicy4);
        multimeterMaxDisplay->setMinimumSize(QSize(0, 96));
        multimeterMaxDisplay->setFrameShape(QFrame::NoFrame);
        multimeterMaxDisplay->setDigitCount(4);

        formLayout->setWidget(1, QFormLayout::FieldRole, multimeterMaxDisplay);

        multimeterMinLabel = new QLabel(multimeterGroup);
        multimeterMinLabel->setObjectName(QStringLiteral("multimeterMinLabel"));
        sizePolicy4.setHeightForWidth(multimeterMinLabel->sizePolicy().hasHeightForWidth());
        multimeterMinLabel->setSizePolicy(sizePolicy4);
        multimeterMinLabel->setMinimumSize(QSize(0, 96));

        formLayout->setWidget(3, QFormLayout::LabelRole, multimeterMinLabel);

        multimeterMinDisplay = new QLCDNumber(multimeterGroup);
        multimeterMinDisplay->setObjectName(QStringLiteral("multimeterMinDisplay"));
        sizePolicy4.setHeightForWidth(multimeterMinDisplay->sizePolicy().hasHeightForWidth());
        multimeterMinDisplay->setSizePolicy(sizePolicy4);
        multimeterMinDisplay->setMinimumSize(QSize(0, 96));
        multimeterMinDisplay->setFrameShape(QFrame::NoFrame);
        multimeterMinDisplay->setDigitCount(4);

        formLayout->setWidget(3, QFormLayout::FieldRole, multimeterMinDisplay);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        formLayout->setItem(5, QFormLayout::FieldRole, verticalSpacer_2);

        multimeterMeanLabel = new QLabel(multimeterGroup);
        multimeterMeanLabel->setObjectName(QStringLiteral("multimeterMeanLabel"));
        sizePolicy4.setHeightForWidth(multimeterMeanLabel->sizePolicy().hasHeightForWidth());
        multimeterMeanLabel->setSizePolicy(sizePolicy4);
        multimeterMeanLabel->setMinimumSize(QSize(0, 96));

        formLayout->setWidget(6, QFormLayout::LabelRole, multimeterMeanLabel);

        multimeterMeanDisplay = new QLCDNumber(multimeterGroup);
        multimeterMeanDisplay->setObjectName(QStringLiteral("multimeterMeanDisplay"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(multimeterMeanDisplay->sizePolicy().hasHeightForWidth());
        multimeterMeanDisplay->setSizePolicy(sizePolicy5);
        multimeterMeanDisplay->setMinimumSize(QSize(0, 96));
        multimeterMeanDisplay->setFrameShape(QFrame::NoFrame);
        multimeterMeanDisplay->setDigitCount(4);

        formLayout->setWidget(6, QFormLayout::FieldRole, multimeterMeanDisplay);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        formLayout->setItem(7, QFormLayout::FieldRole, verticalSpacer_4);

        multimeterRmsLabel = new QLabel(multimeterGroup);
        multimeterRmsLabel->setObjectName(QStringLiteral("multimeterRmsLabel"));
        sizePolicy4.setHeightForWidth(multimeterRmsLabel->sizePolicy().hasHeightForWidth());
        multimeterRmsLabel->setSizePolicy(sizePolicy4);
        multimeterRmsLabel->setMinimumSize(QSize(0, 96));

        formLayout->setWidget(8, QFormLayout::LabelRole, multimeterRmsLabel);

        multimeterRmsDisplay = new QLCDNumber(multimeterGroup);
        multimeterRmsDisplay->setObjectName(QStringLiteral("multimeterRmsDisplay"));
        sizePolicy4.setHeightForWidth(multimeterRmsDisplay->sizePolicy().hasHeightForWidth());
        multimeterRmsDisplay->setSizePolicy(sizePolicy4);
        multimeterRmsDisplay->setMinimumSize(QSize(0, 96));
        multimeterRmsDisplay->setFrameShape(QFrame::NoFrame);
        multimeterRmsDisplay->setDigitCount(4);

        formLayout->setWidget(8, QFormLayout::FieldRole, multimeterRmsDisplay);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        formLayout->setItem(2, QFormLayout::FieldRole, verticalSpacer);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(0, QFormLayout::FieldRole, verticalSpacer_3);


        verticalLayout_23->addLayout(formLayout);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_23->addItem(verticalSpacer_5);


        horizontalLayout_9->addLayout(verticalLayout_23);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);


        verticalLayout_13->addLayout(horizontalLayout_9);

        multimeterPauseCheckBox = new QCheckBox(multimeterGroup);
        multimeterPauseCheckBox->setObjectName(QStringLiteral("multimeterPauseCheckBox"));
        sizePolicy3.setHeightForWidth(multimeterPauseCheckBox->sizePolicy().hasHeightForWidth());
        multimeterPauseCheckBox->setSizePolicy(sizePolicy3);
        multimeterPauseCheckBox->setMaximumSize(QSize(180, 16777215));
        QFont font1;
        font1.setUnderline(false);
        multimeterPauseCheckBox->setFont(font1);

        verticalLayout_13->addWidget(multimeterPauseCheckBox);


        horizontalLayout_3->addWidget(multimeterGroup);

        stackedWidget->addWidget(page_3);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        horizontalLayout_8 = new QHBoxLayout(page_5);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        psuGroup = new QGroupBox(page_5);
        psuGroup->setObjectName(QStringLiteral("psuGroup"));
        psuGroup->setAutoFillBackground(false);
        verticalLayout_15 = new QVBoxLayout(psuGroup);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        psuSlider = new espoSlider(psuGroup);
        psuSlider->setObjectName(QStringLiteral("psuSlider"));
        psuSlider->setEnabled(false);
        psuSlider->setMinimum(90);
        psuSlider->setMaximum(300);
        psuSlider->setSingleStep(1);
        psuSlider->setOrientation(Qt::Vertical);
        psuSlider->setTickPosition(QSlider::TicksBelow);
        psuSlider->setTickInterval(20);

        verticalLayout_15->addWidget(psuSlider);

        lockPsuCheckBox = new timedTickBox(psuGroup);
        lockPsuCheckBox->setObjectName(QStringLiteral("lockPsuCheckBox"));
        lockPsuCheckBox->setChecked(true);

        verticalLayout_15->addWidget(lockPsuCheckBox);

        psuDisplay = new QLCDNumber(psuGroup);
        psuDisplay->setObjectName(QStringLiteral("psuDisplay"));
        psuDisplay->setMinimumSize(QSize(108, 36));
        psuDisplay->setMaximumSize(QSize(108, 36));
        psuDisplay->setSmallDecimalPoint(true);
        psuDisplay->setDigitCount(4);
        psuDisplay->setProperty("value", QVariant(5));
        psuDisplay->setProperty("intValue", QVariant(5));

        verticalLayout_15->addWidget(psuDisplay);


        horizontalLayout_8->addWidget(psuGroup);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        controller_fg = new functionGenControl(page_5);
        controller_fg->setObjectName(QStringLiteral("controller_fg"));

        verticalLayout_4->addWidget(controller_fg);

        bufferDisplay = new bufferControl(page_5);
        bufferDisplay->setObjectName(QStringLiteral("bufferDisplay"));
        bufferDisplay->setMinimumSize(QSize(96, 36));
        bufferDisplay->setMaximumSize(QSize(96, 36));
        bufferDisplay->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(bufferDisplay);

        cursorStatsLabel = new QLabel(page_5);
        cursorStatsLabel->setObjectName(QStringLiteral("cursorStatsLabel"));
        cursorStatsLabel->setMaximumSize(QSize(16777215, 48));
        cursorStatsLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(cursorStatsLabel);

        debugButton3 = new QPushButton(page_5);
        debugButton3->setObjectName(QStringLiteral("debugButton3"));

        verticalLayout_4->addWidget(debugButton3);

        debugButton1 = new QPushButton(page_5);
        debugButton1->setObjectName(QStringLiteral("debugButton1"));

        verticalLayout_4->addWidget(debugButton1);

        timeBaseSlider = new QSlider(page_5);
        timeBaseSlider->setObjectName(QStringLiteral("timeBaseSlider"));
        timeBaseSlider->setMinimum(-60);
        timeBaseSlider->setMaximum(10);
        timeBaseSlider->setPageStep(10);
        timeBaseSlider->setValue(-20);
        timeBaseSlider->setSliderPosition(-20);
        timeBaseSlider->setTracking(true);
        timeBaseSlider->setOrientation(Qt::Horizontal);
        timeBaseSlider->setTickPosition(QSlider::TicksBelow);
        timeBaseSlider->setTickInterval(10);

        verticalLayout_4->addWidget(timeBaseSlider);

        debugButton2 = new QPushButton(page_5);
        debugButton2->setObjectName(QStringLiteral("debugButton2"));

        verticalLayout_4->addWidget(debugButton2);

        debugConsole = new QTextEdit(page_5);
        debugConsole->setObjectName(QStringLiteral("debugConsole"));

        verticalLayout_4->addWidget(debugConsole);

        controller_iso = new isoDriver(page_5);
        controller_iso->setObjectName(QStringLiteral("controller_iso"));

        verticalLayout_4->addWidget(controller_iso);


        horizontalLayout_8->addLayout(verticalLayout_4);

        stackedWidget->addWidget(page_5);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        verticalLayout_3 = new QVBoxLayout(page_4);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        console1 = new QPlainTextEdit(page_4);
        console1->setObjectName(QStringLiteral("console1"));
        console1->setEnabled(true);
        console1->setMinimumSize(QSize(0, 48));
        console1->setMaximumSize(QSize(16777215, 96));
        console1->setReadOnly(true);

        verticalLayout_3->addWidget(console1);

        console2 = new QPlainTextEdit(page_4);
        console2->setObjectName(QStringLiteral("console2"));
        console2->setMinimumSize(QSize(0, 48));
        console2->setMaximumSize(QSize(16777215, 96));
        console2->setReadOnly(true);

        verticalLayout_3->addWidget(console2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        digitalOutputGroup = new QGroupBox(page_4);
        digitalOutputGroup->setObjectName(QStringLiteral("digitalOutputGroup"));
        gridLayout_4 = new QGridLayout(digitalOutputGroup);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        digitalOutCheckbox_CH3 = new QCheckBox(digitalOutputGroup);
        digitalOutCheckbox_CH3->setObjectName(QStringLiteral("digitalOutCheckbox_CH3"));

        gridLayout_4->addWidget(digitalOutCheckbox_CH3, 1, 0, 1, 1);

        digitalOutCheckbox_CH2 = new QCheckBox(digitalOutputGroup);
        digitalOutCheckbox_CH2->setObjectName(QStringLiteral("digitalOutCheckbox_CH2"));

        gridLayout_4->addWidget(digitalOutCheckbox_CH2, 0, 1, 1, 1);

        digitalOutCheckbox_CH1 = new QCheckBox(digitalOutputGroup);
        digitalOutCheckbox_CH1->setObjectName(QStringLiteral("digitalOutCheckbox_CH1"));

        gridLayout_4->addWidget(digitalOutCheckbox_CH1, 0, 0, 1, 1);

        digitalOutCheckbox_CH4 = new QCheckBox(digitalOutputGroup);
        digitalOutCheckbox_CH4->setObjectName(QStringLiteral("digitalOutCheckbox_CH4"));

        gridLayout_4->addWidget(digitalOutCheckbox_CH4, 1, 1, 1, 1);

        digitalOutCheckbox_CH2->raise();
        digitalOutCheckbox_CH1->raise();
        digitalOutCheckbox_CH3->raise();
        digitalOutCheckbox_CH4->raise();

        horizontalLayout_6->addWidget(digitalOutputGroup);

        busSifferGroup_CH1 = new QGroupBox(page_4);
        busSifferGroup_CH1->setObjectName(QStringLiteral("busSifferGroup_CH1"));
        busSifferGroup_CH1->setCheckable(true);
        busSifferGroup_CH1->setChecked(false);
        verticalLayout_7 = new QVBoxLayout(busSifferGroup_CH1);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        serialDecodingCheck_CH1 = new QGroupBox(busSifferGroup_CH1);
        serialDecodingCheck_CH1->setObjectName(QStringLiteral("serialDecodingCheck_CH1"));
        serialDecodingCheck_CH1->setFlat(true);
        serialDecodingCheck_CH1->setCheckable(true);
        serialDecodingCheck_CH1->setChecked(false);
        verticalLayout_6 = new QVBoxLayout(serialDecodingCheck_CH1);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 6, 0, 0);
        serialDecodingModeSelect_CH1 = new QComboBox(serialDecodingCheck_CH1);
        serialDecodingModeSelect_CH1->setObjectName(QStringLiteral("serialDecodingModeSelect_CH1"));

        verticalLayout_6->addWidget(serialDecodingModeSelect_CH1);


        verticalLayout_7->addWidget(serialDecodingCheck_CH1);


        horizontalLayout_6->addWidget(busSifferGroup_CH1);

        busSnifferGroup_CH2 = new QGroupBox(page_4);
        busSnifferGroup_CH2->setObjectName(QStringLiteral("busSnifferGroup_CH2"));
        busSnifferGroup_CH2->setEnabled(false);
        busSnifferGroup_CH2->setCheckable(true);
        busSnifferGroup_CH2->setChecked(false);
        verticalLayout_16 = new QVBoxLayout(busSnifferGroup_CH2);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        serialDecodingCheck_CH2 = new QGroupBox(busSnifferGroup_CH2);
        serialDecodingCheck_CH2->setObjectName(QStringLiteral("serialDecodingCheck_CH2"));
        serialDecodingCheck_CH2->setFlat(true);
        serialDecodingCheck_CH2->setCheckable(true);
        serialDecodingCheck_CH2->setChecked(false);
        verticalLayout_17 = new QVBoxLayout(serialDecodingCheck_CH2);
        verticalLayout_17->setSpacing(0);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 6, 0, 0);
        serialDecodingModeSelect_CH2 = new QComboBox(serialDecodingCheck_CH2);
        serialDecodingModeSelect_CH2->setObjectName(QStringLiteral("serialDecodingModeSelect_CH2"));

        verticalLayout_17->addWidget(serialDecodingModeSelect_CH2);


        verticalLayout_16->addWidget(serialDecodingCheck_CH2);


        horizontalLayout_6->addWidget(busSnifferGroup_CH2);


        verticalLayout_3->addLayout(horizontalLayout_6);

        pause_LA = new QCheckBox(page_4);
        pause_LA->setObjectName(QStringLiteral("pause_LA"));
        pause_LA->setEnabled(true);

        verticalLayout_3->addWidget(pause_LA);

        stackedWidget->addWidget(page_4);

        verticalLayout_5->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        scopeAxes->raise();
        deviceConnected->raise();
        stackedWidget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 720, 21));
        menuOscilloscope_2 = new QMenu(menuBar);
        menuOscilloscope_2->setObjectName(QStringLiteral("menuOscilloscope_2"));
        menuGain_2 = new QMenu(menuOscilloscope_2);
        menuGain_2->setObjectName(QStringLiteral("menuGain_2"));
        menuCH1_Stats = new noCloseMenu(menuOscilloscope_2);
        menuCH1_Stats->setObjectName(QStringLiteral("menuCH1_Stats"));
        menuCH2_Stats = new noCloseMenu(menuOscilloscope_2);
        menuCH2_Stats->setObjectName(QStringLiteral("menuCH2_Stats"));
        menuFrame_rate = new QMenu(menuOscilloscope_2);
        menuFrame_rate->setObjectName(QStringLiteral("menuFrame_rate"));
        menuRange = new QMenu(menuOscilloscope_2);
        menuRange->setObjectName(QStringLiteral("menuRange"));
        menuMultimeter_2 = new QMenu(menuBar);
        menuMultimeter_2->setObjectName(QStringLiteral("menuMultimeter_2"));
        menuV_2 = new QMenu(menuMultimeter_2);
        menuV_2->setObjectName(QStringLiteral("menuV_2"));
        menuI_2 = new QMenu(menuMultimeter_2);
        menuI_2->setObjectName(QStringLiteral("menuI_2"));
        menuRange_R = new QMenu(menuMultimeter_2);
        menuRange_R->setObjectName(QStringLiteral("menuRange_R"));
        menuRange_C = new QMenu(menuMultimeter_2);
        menuRange_C->setObjectName(QStringLiteral("menuRange_C"));
        menuBus_Sniffer = new QMenu(menuBar);
        menuBus_Sniffer->setObjectName(QStringLiteral("menuBus_Sniffer"));
        menuUART_1 = new QMenu(menuBus_Sniffer);
        menuUART_1->setObjectName(QStringLiteral("menuUART_1"));
        menuBaud_Rate = new QMenu(menuUART_1);
        menuBaud_Rate->setObjectName(QStringLiteral("menuBaud_Rate"));
        menuType_Here_2 = new QMenu(menuUART_1);
        menuType_Here_2->setObjectName(QStringLiteral("menuType_Here_2"));
        menuParity_Bit = new QMenu(menuUART_1);
        menuParity_Bit->setObjectName(QStringLiteral("menuParity_Bit"));
        menuData_Bits = new QMenu(menuUART_1);
        menuData_Bits->setObjectName(QStringLiteral("menuData_Bits"));
        menuUART_2 = new QMenu(menuBus_Sniffer);
        menuUART_2->setObjectName(QStringLiteral("menuUART_2"));
        menuBaud_Rate_2 = new QMenu(menuUART_2);
        menuBaud_Rate_2->setObjectName(QStringLiteral("menuBaud_Rate_2"));
        menuData_Bits_2 = new QMenu(menuUART_2);
        menuData_Bits_2->setObjectName(QStringLiteral("menuData_Bits_2"));
        menuParity_Bit_2 = new QMenu(menuUART_2);
        menuParity_Bit_2->setObjectName(QStringLiteral("menuParity_Bit_2"));
        menuAndroid_Special = new QMenu(menuBar);
        menuAndroid_Special->setObjectName(QStringLiteral("menuAndroid_Special"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuOscilloscope_2->menuAction());
        menuBar->addAction(menuMultimeter_2->menuAction());
        menuBar->addAction(menuBus_Sniffer->menuAction());
        menuBar->addAction(menuAndroid_Special->menuAction());
        menuOscilloscope_2->addAction(menuRange->menuAction());
        menuOscilloscope_2->addSeparator();
        menuOscilloscope_2->addAction(menuFrame_rate->menuAction());
        menuOscilloscope_2->addSeparator();
        menuOscilloscope_2->addAction(menuGain_2->menuAction());
        menuOscilloscope_2->addSeparator();
        menuOscilloscope_2->addAction(menuCH1_Stats->menuAction());
        menuOscilloscope_2->addAction(menuCH2_Stats->menuAction());
        menuOscilloscope_2->addAction(actionCursor_Stats);
        menuOscilloscope_2->addSeparator();
        menuOscilloscope_2->addAction(actionCalibrate);
        menuOscilloscope_2->addAction(actionForce_Square);
        menuOscilloscope_2->addAction(actionAutomatically_Enable_Cursors);
        menuGain_2->addAction(actionGainAuto);
        menuGain_2->addAction(actionGain0_5);
        menuGain_2->addAction(actionGain1);
        menuGain_2->addAction(actionGain2);
        menuGain_2->addAction(actionGain4);
        menuGain_2->addAction(actionGain8);
        menuGain_2->addAction(actionGain16);
        menuGain_2->addAction(actionGain32);
        menuGain_2->addAction(actionGain64);
        menuCH1_Stats->addAction(actionMax);
        menuCH1_Stats->addAction(actionMin);
        menuCH1_Stats->addAction(actionMean);
        menuCH1_Stats->addAction(actionRMS);
        menuCH2_Stats->addAction(actionMax_2);
        menuCH2_Stats->addAction(actionMin_2);
        menuCH2_Stats->addAction(actionMean_2);
        menuCH2_Stats->addAction(actionRMS_2);
        menuFrame_rate->addAction(action60FPS);
        menuFrame_rate->addAction(action30FPS);
        menuFrame_rate->addAction(action20FPS);
        menuFrame_rate->addAction(action15FPS);
        menuFrame_rate->addAction(action10FPS);
        menuFrame_rate->addAction(action5FPS);
        menuRange->addAction(actionSnap_to_Cursors);
        menuRange->addAction(actionEnter_Manually);
        menuMultimeter_2->addSeparator();
        menuMultimeter_2->addAction(menuV_2->menuAction());
        menuMultimeter_2->addAction(menuI_2->menuAction());
        menuMultimeter_2->addAction(menuRange_R->menuAction());
        menuMultimeter_2->addAction(menuRange_C->menuAction());
        menuV_2->addAction(actionAutoV);
        menuV_2->addAction(actionMV);
        menuV_2->addAction(actionV);
        menuI_2->addAction(actionAutoI);
        menuI_2->addAction(actionMA);
        menuI_2->addAction(actionA);
        menuRange_R->addAction(actionAutoR);
        menuRange_R->addAction(actionOhm);
        menuRange_R->addAction(actionKOhm);
        menuRange_C->addAction(actionAutoC);
        menuRange_C->addAction(actionNF);
        menuRange_C->addAction(action_F);
        menuBus_Sniffer->addAction(menuUART_1->menuAction());
        menuBus_Sniffer->addAction(menuUART_2->menuAction());
        menuUART_1->addAction(menuBaud_Rate->menuAction());
        menuUART_1->addAction(menuParity_Bit->menuAction());
        menuUART_1->addAction(menuData_Bits->menuAction());
        menuUART_1->addAction(menuType_Here_2->menuAction());
        menuBaud_Rate->addAction(action300);
        menuBaud_Rate->addAction(action600);
        menuBaud_Rate->addAction(action1200);
        menuBaud_Rate->addAction(action2400);
        menuBaud_Rate->addAction(action4800);
        menuBaud_Rate->addAction(action9600);
        menuBaud_Rate->addAction(action14400);
        menuBaud_Rate->addAction(action19200);
        menuBaud_Rate->addAction(action28800);
        menuBaud_Rate->addAction(action38400);
        menuBaud_Rate->addAction(action57600);
        menuBaud_Rate->addAction(action115200);
        menuParity_Bit->addAction(actionNone);
        menuData_Bits->addAction(action8);
        menuUART_2->addAction(menuBaud_Rate_2->menuAction());
        menuUART_2->addAction(menuData_Bits_2->menuAction());
        menuUART_2->addAction(menuParity_Bit_2->menuAction());
        menuBaud_Rate_2->addAction(action300_2);
        menuBaud_Rate_2->addAction(action600_2);
        menuBaud_Rate_2->addAction(action1200_2);
        menuBaud_Rate_2->addAction(action2400_2);
        menuBaud_Rate_2->addAction(action4800_2);
        menuBaud_Rate_2->addAction(action9600_2);
        menuBaud_Rate_2->addAction(action14400_2);
        menuBaud_Rate_2->addAction(action19200_2);
        menuBaud_Rate_2->addAction(action28800_2);
        menuBaud_Rate_2->addAction(action38400_2);
        menuBaud_Rate_2->addAction(action57600_2);
        menuBaud_Rate_2->addAction(action115200_2);
        menuData_Bits_2->addAction(action8_2);
        menuParity_Bit_2->addAction(actionNone_2);
        menuAndroid_Special->addAction(actionOld_Person_Mode);

        retranslateUi(MainWindow);
        QObject::connect(scopeGroup_CH1, SIGNAL(toggled(bool)), bufferDisplay, SLOT(scopeIn_CH1(bool)));
        QObject::connect(scopeGroup_CH2, SIGNAL(toggled(bool)), bufferDisplay, SLOT(scopeIn_CH2(bool)));
        QObject::connect(signalGenGroup_CH2, SIGNAL(toggled(bool)), bufferDisplay, SLOT(signalGenIn(bool)));
        QObject::connect(bufferDisplay, SIGNAL(busSnifferOut_CH2(bool)), busSnifferGroup_CH2, SLOT(setEnabled(bool)));
        QObject::connect(bufferDisplay, SIGNAL(signalGenOut(bool)), signalGenGroup_CH2, SLOT(setEnabled(bool)));
        QObject::connect(bufferDisplay, SIGNAL(scopeOut_CH1(bool)), scopeGroup_CH1, SLOT(setEnabled(bool)));
        QObject::connect(bufferDisplay, SIGNAL(scopeOut_CH2(bool)), scopeGroup_CH2, SLOT(setEnabled(bool)));
        QObject::connect(bufferDisplay, SIGNAL(busSnifferUncheck(bool)), busSnifferGroup_CH2, SLOT(setChecked(bool)));
        QObject::connect(bufferDisplay, SIGNAL(scopeUncheck(bool)), scopeGroup_CH2, SLOT(setChecked(bool)));
        QObject::connect(doubleSampleLabel, SIGNAL(toggled(bool)), bufferDisplay, SLOT(scopeDsrIn(bool)));
        QObject::connect(bufferDisplay, SIGNAL(scopeDsrUncheck(bool)), doubleSampleLabel, SLOT(setChecked(bool)));
        QObject::connect(bufferDisplay, SIGNAL(scopeDsrOut(bool)), doubleSampleLabel, SLOT(setEnabled(bool)));
        QObject::connect(psuSlider, SIGNAL(valueChanged(int)), psuSlider, SLOT(selfMoved(int)));
        QObject::connect(psuSlider, SIGNAL(lcdOut(QString)), psuDisplay, SLOT(display(QString)));
        QObject::connect(amplitudeValue_CH1, SIGNAL(valueChanged(double)), dcOffsetValue_CH1, SLOT(maximumChanged(double)));
        QObject::connect(amplitudeValue_CH2, SIGNAL(valueChanged(double)), dcOffsetValue_CH2, SLOT(maximumChanged(double)));
        QObject::connect(dcOffsetValue_CH1, SIGNAL(valueChanged(double)), amplitudeValue_CH1, SLOT(maximumChanged(double)));
        QObject::connect(dcOffsetValue_CH2, SIGNAL(valueChanged(double)), amplitudeValue_CH2, SLOT(maximumChanged(double)));
        QObject::connect(waveformSelect_CH1, SIGNAL(currentTextChanged(QString)), controller_fg, SLOT(waveformName_CH1(QString)));
        QObject::connect(waveformSelect_CH2, SIGNAL(currentTextChanged(QString)), controller_fg, SLOT(waveformName_CH2(QString)));
        QObject::connect(amplitudeValue_CH1, SIGNAL(valueChanged(double)), controller_fg, SLOT(amplitudeUpdate_CH1(double)));
        QObject::connect(dcOffsetValue_CH1, SIGNAL(valueChanged(double)), controller_fg, SLOT(offsetUpdate_CH1(double)));
        QObject::connect(bufferDisplay, SIGNAL(busSnifferOut_CH1(bool)), busSifferGroup_CH1, SLOT(setEnabled(bool)));
        QObject::connect(bufferDisplay, SIGNAL(busSnifferOut_CH2(bool)), busSnifferGroup_CH2, SLOT(setEnabled(bool)));
        QObject::connect(busSifferGroup_CH1, SIGNAL(toggled(bool)), bufferDisplay, SLOT(busSnifferIn_CH1(bool)));
        QObject::connect(busSnifferGroup_CH2, SIGNAL(toggled(bool)), bufferDisplay, SLOT(busSnifferIn_CH2(bool)));
        QObject::connect(digitalOutCheckbox_CH1, SIGNAL(toggled(bool)), bufferDisplay, SLOT(digIn_CH1(bool)));
        QObject::connect(digitalOutCheckbox_CH2, SIGNAL(toggled(bool)), bufferDisplay, SLOT(digIn_CH2(bool)));
        QObject::connect(digitalOutCheckbox_CH3, SIGNAL(toggled(bool)), bufferDisplay, SLOT(digIn_CH3(bool)));
        QObject::connect(digitalOutCheckbox_CH4, SIGNAL(toggled(bool)), bufferDisplay, SLOT(digIn_CH4(bool)));
        QObject::connect(amplitudeValue_CH2, SIGNAL(valueChanged(double)), controller_fg, SLOT(amplitudeUpdate_CH2(double)));
        QObject::connect(dcOffsetValue_CH2, SIGNAL(valueChanged(double)), controller_fg, SLOT(offsetUpdate_CH2(double)));
        QObject::connect(timeBaseSlider, SIGNAL(valueChanged(int)), controller_iso, SLOT(setWindow(int)));
        QObject::connect(scopeAxes, SIGNAL(mouseWheel(QWheelEvent*)), controller_iso, SLOT(setVoltageRange(QWheelEvent*)));
        QObject::connect(pausedLabeL_CH1, SIGNAL(toggled(bool)), controller_iso, SLOT(pauseEnable_CH1(bool)));
        QObject::connect(pausedLabel_CH2, SIGNAL(toggled(bool)), controller_iso, SLOT(pauseEnable_CH2(bool)));
        QObject::connect(pausedLabeL_CH1, SIGNAL(toggled(bool)), pausedLabel_CH2, SLOT(setChecked(bool)));
        QObject::connect(pausedLabel_CH2, SIGNAL(toggled(bool)), pausedLabeL_CH1, SLOT(setChecked(bool)));
        QObject::connect(controller_iso, SIGNAL(disableWindow(bool)), MainWindow, SLOT(setEnabled(bool)));
        QObject::connect(scopeAxes, SIGNAL(mouseRelease(QMouseEvent*)), controller_iso, SLOT(graphMouseRelease(QMouseEvent*)));
        QObject::connect(cursorHoriCheck, SIGNAL(toggled(bool)), controller_iso, SLOT(cursorEnableHori(bool)));
        QObject::connect(cursorVertCheck, SIGNAL(toggled(bool)), controller_iso, SLOT(cursorEnableVert(bool)));
        QObject::connect(scopeAxes, SIGNAL(mouseMove(QMouseEvent*)), controller_iso, SLOT(graphMouseMove(QMouseEvent*)));
        QObject::connect(controller_iso, SIGNAL(setCursorStatsVisible(bool)), cursorStatsLabel, SLOT(setVisible(bool)));
        QObject::connect(lockPsuCheckBox, SIGNAL(toggled(bool)), psuSlider, SLOT(setDisabled(bool)));
        QObject::connect(triggerGroup, SIGNAL(toggled(bool)), controller_iso, SLOT(setTriggerEnabled(bool)));
        QObject::connect(triggerLevelValue, SIGNAL(valueChanged(double)), controller_iso, SLOT(setTriggerLevel(double)));
        QObject::connect(controller_iso, SIGNAL(singleShotTriggered(bool)), pausedLabeL_CH1, SLOT(setChecked(bool)));
        QObject::connect(singleShotCheckBox, SIGNAL(toggled(bool)), controller_iso, SLOT(setSingleShotEnabled(bool)));
        QObject::connect(triggerChannelSelect, SIGNAL(currentIndexChanged(int)), controller_iso, SLOT(setTriggerMode(int)));
        QObject::connect(acCoupledLabel_CH1, SIGNAL(toggled(bool)), controller_iso, SLOT(setAC_CH1(bool)));
        QObject::connect(acCoupledLabel_CH2, SIGNAL(toggled(bool)), controller_iso, SLOT(setAC_CH2(bool)));
        QObject::connect(multimeterGroup, SIGNAL(toggled(bool)), bufferDisplay, SLOT(multimeterIn(bool)));
        QObject::connect(bufferDisplay, SIGNAL(multimeterOut(bool)), multimeterGroup, SLOT(setEnabled(bool)));
        QObject::connect(multimeterModeSelect, SIGNAL(currentIndexChanged(int)), controller_iso, SLOT(setMultimeterType(int)));
        QObject::connect(controller_iso, SIGNAL(multimeterMax(double)), multimeterMaxDisplay, SLOT(display(double)));
        QObject::connect(controller_iso, SIGNAL(multimeterMin(double)), multimeterMinDisplay, SLOT(display(double)));
        QObject::connect(controller_iso, SIGNAL(multimeterMean(double)), multimeterMeanDisplay, SLOT(display(double)));
        QObject::connect(multimeterResistanceSelect, SIGNAL(valueChanged(double)), controller_iso, SLOT(setSeriesResistance(double)));
        QObject::connect(controller_iso, SIGNAL(sendMultimeterLabel1(QString)), multimeterMaxLabel, SLOT(setText(QString)));
        QObject::connect(controller_iso, SIGNAL(sendMultimeterLabel2(QString)), multimeterMinLabel, SLOT(setText(QString)));
        QObject::connect(controller_iso, SIGNAL(sendMultimeterLabel3(QString)), multimeterMeanLabel, SLOT(setText(QString)));
        QObject::connect(serialDecodingCheck_CH1, SIGNAL(toggled(bool)), controller_iso, SLOT(setSerialDecodeEnabled_CH1(bool)));
        QObject::connect(serialDecodingCheck_CH2, SIGNAL(toggled(bool)), controller_iso, SLOT(setSerialDecodeEnabled_CH2(bool)));
        QObject::connect(controller_iso, SIGNAL(changeTimeAxis(bool)), MainWindow, SLOT(timeBaseNeedsChanging(bool)));
        QObject::connect(xyDisplayLabel, SIGNAL(toggled(bool)), controller_iso, SLOT(setXYmode(bool)));
        QObject::connect(busSnifferGroup_CH2, SIGNAL(toggled(bool)), signalGenGroup_CH2, SLOT(setDisabled(bool)));
        QObject::connect(scopeAxes, SIGNAL(mousePress(QMouseEvent*)), makeCursorsNicer, SLOT(clickDetected(QMouseEvent*)));
        QObject::connect(makeCursorsNicer, SIGNAL(tickHori(bool)), cursorHoriCheck, SLOT(setChecked(bool)));
        QObject::connect(makeCursorsNicer, SIGNAL(tickVert(bool)), cursorVertCheck, SLOT(setChecked(bool)));
        QObject::connect(makeCursorsNicer, SIGNAL(passOnSignal(QMouseEvent*)), controller_iso, SLOT(graphMousePress(QMouseEvent*)));
        QObject::connect(controller_iso, SIGNAL(sendTriggerValue(double)), triggerLevelValue, SLOT(setValue(double)));
        QObject::connect(triggerGroup, SIGNAL(toggled(bool)), controller_iso, SLOT(triggerGroupStateChange(bool)));
        QObject::connect(controller_iso, SIGNAL(disableWindow(bool)), deviceConnected, SLOT(connectedStatusChanged(bool)));
        QObject::connect(multimeterPauseCheckBox, SIGNAL(toggled(bool)), controller_iso, SLOT(pauseEnable_multimeter(bool)));
        QObject::connect(controller_iso, SIGNAL(sendVmax_CH1(double)), voltageInfoMaxDisplay_CH1, SLOT(display(double)));
        QObject::connect(controller_iso, SIGNAL(sendVmin_CH1(double)), voltageInfoMinDisplay_CH1, SLOT(display(double)));
        QObject::connect(controller_iso, SIGNAL(sendVmean_CH1(double)), voltageInfoMeanDisplay_CH1, SLOT(display(double)));
        QObject::connect(controller_iso, SIGNAL(sendVmax_CH2(double)), voltageInfoMaxDisplay_CH2, SLOT(display(double)));
        QObject::connect(controller_iso, SIGNAL(sendVmin_CH2(double)), voltageInfoMinDisplay_CH2, SLOT(display(double)));
        QObject::connect(controller_iso, SIGNAL(sendVmean_CH2(double)), voltageInfoMeanDisplay_CH2, SLOT(display(double)));
        QObject::connect(lockPsuCheckBox, SIGNAL(toggled(bool)), lockPsuCheckBox, SLOT(resetTimer(bool)));
        QObject::connect(lockPsuCheckBox, SIGNAL(toggled(bool)), lockPsuCheckBox, SLOT(resetTimer()));
        QObject::connect(psuSlider, SIGNAL(sliderMoved(int)), lockPsuCheckBox, SLOT(resetTimer()));
        QObject::connect(pause_LA, SIGNAL(toggled(bool)), pausedLabeL_CH1, SLOT(setChecked(bool)));
        QObject::connect(pausedLabeL_CH1, SIGNAL(toggled(bool)), pause_LA, SLOT(setChecked(bool)));
        QObject::connect(controller_fg, SIGNAL(setMaxFreq_CH2(double)), frequencyValue_CH2, SLOT(setMax(double)));
        QObject::connect(controller_fg, SIGNAL(setMinFreq_CH2(double)), frequencyValue_CH2, SLOT(setMin(double)));
        QObject::connect(frequencyValue_CH2, SIGNAL(valueChanged(double)), controller_fg, SLOT(freqUpdate_CH2(double)));
        QObject::connect(frequencyValue_CH1, SIGNAL(valueChanged(double)), controller_fg, SLOT(freqUpdate_CH1(double)));
        QObject::connect(controller_fg, SIGNAL(setMaxFreq_CH1(double)), frequencyValue_CH1, SLOT(setMax(double)));
        QObject::connect(controller_fg, SIGNAL(setMinFreq_CH1(double)), frequencyValue_CH1, SLOT(setMin(double)));
        QObject::connect(frequencyValue_CH1, SIGNAL(valueChanged(double)), frequencyValue_CH1, SLOT(changeStepping(double)));
        QObject::connect(frequencyValue_CH2, SIGNAL(valueChanged(double)), frequencyValue_CH2, SLOT(changeStepping(double)));
        QObject::connect(debugButton2, SIGNAL(clicked()), MainWindow, SLOT(reinitUsb()));

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "EspoTek Labrador", Q_NULLPTR));
        actionGainAuto->setText(QApplication::translate("MainWindow", "Auto", Q_NULLPTR));
        actionGain0_5->setText(QApplication::translate("MainWindow", "0.5", Q_NULLPTR));
        actionGain1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        actionGain2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        actionGain4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        actionGain8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        actionGain16->setText(QApplication::translate("MainWindow", "16", Q_NULLPTR));
        actionGain32->setText(QApplication::translate("MainWindow", "32", Q_NULLPTR));
        actionGain64->setText(QApplication::translate("MainWindow", "64", Q_NULLPTR));
        actionCalibrate->setText(QApplication::translate("MainWindow", "Calibrate (coming soon!)", Q_NULLPTR));
        actionCursor_Stats->setText(QApplication::translate("MainWindow", "Cursor Stats", Q_NULLPTR));
        actionMax->setText(QApplication::translate("MainWindow", "Max", Q_NULLPTR));
        actionMin->setText(QApplication::translate("MainWindow", "Min", Q_NULLPTR));
        actionMean->setText(QApplication::translate("MainWindow", "Mean", Q_NULLPTR));
        actionRMS->setText(QApplication::translate("MainWindow", "RMS", Q_NULLPTR));
        actionMax_2->setText(QApplication::translate("MainWindow", "Max", Q_NULLPTR));
        actionMin_2->setText(QApplication::translate("MainWindow", "Min", Q_NULLPTR));
        actionMean_2->setText(QApplication::translate("MainWindow", "Mean", Q_NULLPTR));
        actionRMS_2->setText(QApplication::translate("MainWindow", "RMS", Q_NULLPTR));
        actionMV->setText(QApplication::translate("MainWindow", "mV", Q_NULLPTR));
        actionV->setText(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        actionAutoV->setText(QApplication::translate("MainWindow", "Auto", Q_NULLPTR));
        actionAutoI->setText(QApplication::translate("MainWindow", "Auto", Q_NULLPTR));
        actionMA->setText(QApplication::translate("MainWindow", "mA", Q_NULLPTR));
        actionA->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
        action300->setText(QApplication::translate("MainWindow", "300", Q_NULLPTR));
        action600->setText(QApplication::translate("MainWindow", "600", Q_NULLPTR));
        action1200->setText(QApplication::translate("MainWindow", "1200", Q_NULLPTR));
        action2400->setText(QApplication::translate("MainWindow", "2400", Q_NULLPTR));
        action4800->setText(QApplication::translate("MainWindow", "4800", Q_NULLPTR));
        action9600->setText(QApplication::translate("MainWindow", "9600", Q_NULLPTR));
        action14400->setText(QApplication::translate("MainWindow", "14400", Q_NULLPTR));
        action19200->setText(QApplication::translate("MainWindow", "19200", Q_NULLPTR));
        action28800->setText(QApplication::translate("MainWindow", "28800", Q_NULLPTR));
        action38400->setText(QApplication::translate("MainWindow", "38400", Q_NULLPTR));
        action57600->setText(QApplication::translate("MainWindow", "57600 (Glitchy)", Q_NULLPTR));
        action115200->setText(QApplication::translate("MainWindow", "115200 (Glitchy)", Q_NULLPTR));
        action8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        actionNone->setText(QApplication::translate("MainWindow", "None", Q_NULLPTR));
        action300_2->setText(QApplication::translate("MainWindow", "300", Q_NULLPTR));
        action600_2->setText(QApplication::translate("MainWindow", "600", Q_NULLPTR));
        action1200_2->setText(QApplication::translate("MainWindow", "1200", Q_NULLPTR));
        action2400_2->setText(QApplication::translate("MainWindow", "2400", Q_NULLPTR));
        action4800_2->setText(QApplication::translate("MainWindow", "4800", Q_NULLPTR));
        action9600_2->setText(QApplication::translate("MainWindow", "9600", Q_NULLPTR));
        action14400_2->setText(QApplication::translate("MainWindow", "14400", Q_NULLPTR));
        action19200_2->setText(QApplication::translate("MainWindow", "19200", Q_NULLPTR));
        action28800_2->setText(QApplication::translate("MainWindow", "28800", Q_NULLPTR));
        action38400_2->setText(QApplication::translate("MainWindow", "38400", Q_NULLPTR));
        action57600_2->setText(QApplication::translate("MainWindow", "57600 (Glitchy)", Q_NULLPTR));
        action115200_2->setText(QApplication::translate("MainWindow", "115200 (Glitchy)", Q_NULLPTR));
        action8_2->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        actionNone_2->setText(QApplication::translate("MainWindow", "None", Q_NULLPTR));
        actionRecord->setText(QApplication::translate("MainWindow", "Record", Q_NULLPTR));
        actionForce_Square->setText(QApplication::translate("MainWindow", "Force Square Display (Not Officially Supported)", Q_NULLPTR));
        actionAutomatically_Enable_Cursors->setText(QApplication::translate("MainWindow", "Enable Cursors on Click", Q_NULLPTR));
        action60FPS->setText(QApplication::translate("MainWindow", "60FPS", Q_NULLPTR));
        action30FPS->setText(QApplication::translate("MainWindow", "30FPS", Q_NULLPTR));
        action20FPS->setText(QApplication::translate("MainWindow", "20FPS", Q_NULLPTR));
        action15FPS->setText(QApplication::translate("MainWindow", "15FPS", Q_NULLPTR));
        action10FPS->setText(QApplication::translate("MainWindow", "10FPS", Q_NULLPTR));
        action5FPS->setText(QApplication::translate("MainWindow", "5FPS", Q_NULLPTR));
        actionAuto_Lock->setText(QApplication::translate("MainWindow", "Auto Lock", Q_NULLPTR));
        actionSnap_to_Cursors->setText(QApplication::translate("MainWindow", "Snap to Cursors", Q_NULLPTR));
        actionEnter_Manually->setText(QApplication::translate("MainWindow", "Enter Manually", Q_NULLPTR));
        actionTake_Snapshot->setText(QApplication::translate("MainWindow", "Take Snapshot", Q_NULLPTR));
        actionOld_Person_Mode->setText(QApplication::translate("MainWindow", "Old Person Mode", Q_NULLPTR));
        actionAutoR->setText(QApplication::translate("MainWindow", "Auto", Q_NULLPTR));
        actionOhm->setText(QApplication::translate("MainWindow", "\316\251", Q_NULLPTR));
        actionKOhm->setText(QApplication::translate("MainWindow", "k\316\251", Q_NULLPTR));
        actionAutoC->setText(QApplication::translate("MainWindow", "Auto", Q_NULLPTR));
        actionNF->setText(QApplication::translate("MainWindow", "nF", Q_NULLPTR));
        action_F->setText(QApplication::translate("MainWindow", "\316\274F", Q_NULLPTR));
        deviceConnected->setText(QApplication::translate("MainWindow", "Device Not Connected!", Q_NULLPTR));
        scopeGroup_CH1->setTitle(QApplication::translate("MainWindow", "Oscilloscope CH1", Q_NULLPTR));
        acCoupledLabel_CH1->setText(QApplication::translate("MainWindow", "AC Coupled", Q_NULLPTR));
        filterLabel_CH1->setText(QApplication::translate("MainWindow", "Filter", Q_NULLPTR));
        doubleSampleLabel->setText(QApplication::translate("MainWindow", "Double Sample Rate", Q_NULLPTR));
        voltageInfoMaxLabel_CH1->setText(QApplication::translate("MainWindow", " Max", Q_NULLPTR));
        voltageInfoMinLabel_CH1->setText(QApplication::translate("MainWindow", " Min", Q_NULLPTR));
        VoltageInfoMeanLabel_CH1->setText(QApplication::translate("MainWindow", " Mean", Q_NULLPTR));
        voltageInfoRmsLabel_CH1->setText(QApplication::translate("MainWindow", " RMS", Q_NULLPTR));
        cursorGroup->setTitle(QApplication::translate("MainWindow", "Cursor/Scaling", Q_NULLPTR));
        cursorHoriCheck->setText(QApplication::translate("MainWindow", "Horizontal", Q_NULLPTR));
        makeCursorsNicer->setText(QApplication::translate("MainWindow", "CURSOR ENABLER", Q_NULLPTR));
        cursorVertCheck->setText(QApplication::translate("MainWindow", "Vertical", Q_NULLPTR));
        scaleHoriCheck->setText(QApplication::translate("MainWindow", "H-Scale", Q_NULLPTR));
        scaleVertCheck->setText(QApplication::translate("MainWindow", "V-Scale", Q_NULLPTR));
        scopeGroup_CH2->setTitle(QApplication::translate("MainWindow", "Oscilloscope CH2", Q_NULLPTR));
        acCoupledLabel_CH2->setText(QApplication::translate("MainWindow", "AC Coupled", Q_NULLPTR));
        filterLabel_CH2->setText(QApplication::translate("MainWindow", "Filter", Q_NULLPTR));
        xyDisplayLabel->setText(QApplication::translate("MainWindow", "X-Y Display", Q_NULLPTR));
        voltageInfoMaxLabel_CH2->setText(QApplication::translate("MainWindow", " Max", Q_NULLPTR));
        voltageInfoMinLabel_CH2->setText(QApplication::translate("MainWindow", " Min", Q_NULLPTR));
        VoltageInfoMeanLabel_CH2->setText(QApplication::translate("MainWindow", " Mean", Q_NULLPTR));
        voltageInfoRmsLabel_CH2->setText(QApplication::translate("MainWindow", " RMS", Q_NULLPTR));
        triggerGroup->setTitle(QApplication::translate("MainWindow", "Trigger", Q_NULLPTR));
        triggerChannelSelect->clear();
        triggerChannelSelect->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "CH1 (Rising)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "CH1 (Falling)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "CH2 (Rising)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "CH2 (Falling)", Q_NULLPTR)
        );
        singleShotCheckBox->setText(QApplication::translate("MainWindow", "Single Shot", Q_NULLPTR));
        pausedLabel_CH2->setText(QApplication::translate("MainWindow", "Paused", Q_NULLPTR));
        pausedLabeL_CH1->setText(QApplication::translate("MainWindow", "Paused", Q_NULLPTR));
        signalGenGroup_CH1->setTitle(QApplication::translate("MainWindow", "Signal Gen CH1", Q_NULLPTR));
        waveformLabel_CH1->setText(QApplication::translate("MainWindow", "Waveform", Q_NULLPTR));
        frequencyLabel_CH1->setText(QApplication::translate("MainWindow", "Frequency", Q_NULLPTR));
        amplitudeLabel_CH1->setText(QApplication::translate("MainWindow", "Amplitude (Peak-Peak)", Q_NULLPTR));
        amplitudeValue_CH1->setSuffix(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        dcOffsetLabel_CH1->setText(QApplication::translate("MainWindow", "Offset", Q_NULLPTR));
        dcOffsetValue_CH1->setSuffix(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        signalGenGroup_CH2->setTitle(QApplication::translate("MainWindow", "Signal Gen CH2", Q_NULLPTR));
        waveformLabel_CH2->setText(QApplication::translate("MainWindow", "Waveform", Q_NULLPTR));
        frequencyLabel_CH2->setText(QApplication::translate("MainWindow", "Frequency", Q_NULLPTR));
        amplitudeLabel_CH2->setText(QApplication::translate("MainWindow", "Amplitude (Peak-Peak)", Q_NULLPTR));
        amplitudeValue_CH2->setSuffix(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        dcOffsetLabel_CH2->setText(QApplication::translate("MainWindow", "Offset", Q_NULLPTR));
        dcOffsetValue_CH2->setSuffix(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        multimeterGroup->setTitle(QApplication::translate("MainWindow", "Multimeter++", Q_NULLPTR));
        multimeterModeLabel->setText(QApplication::translate("MainWindow", "Mode", Q_NULLPTR));
        multimeterModeSelect->clear();
        multimeterModeSelect->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "V", Q_NULLPTR)
         << QApplication::translate("MainWindow", "I", Q_NULLPTR)
         << QApplication::translate("MainWindow", "R", Q_NULLPTR)
         << QApplication::translate("MainWindow", "C", Q_NULLPTR)
        );
        multimeterResistanceLabel->setText(QApplication::translate("MainWindow", "Series Resistance", Q_NULLPTR));
        multimeterResistanceSelect->setSuffix(QApplication::translate("MainWindow", "\316\251", Q_NULLPTR));
        multimeterMaxLabel->setText(QApplication::translate("MainWindow", " Max", Q_NULLPTR));
        multimeterMinLabel->setText(QApplication::translate("MainWindow", " Min", Q_NULLPTR));
        multimeterMeanLabel->setText(QApplication::translate("MainWindow", " Mean", Q_NULLPTR));
        multimeterRmsLabel->setText(QApplication::translate("MainWindow", " RMS", Q_NULLPTR));
        multimeterPauseCheckBox->setText(QApplication::translate("MainWindow", "Paused", Q_NULLPTR));
        psuGroup->setTitle(QApplication::translate("MainWindow", "PSU", Q_NULLPTR));
        lockPsuCheckBox->setText(QApplication::translate("MainWindow", "Lock PSU", Q_NULLPTR));
        controller_fg->setText(QApplication::translate("MainWindow", "SALUTON MI ESTAS FUNCTION GENERATOR CONTROLLER", Q_NULLPTR));
        bufferDisplay->setText(QApplication::translate("MainWindow", "BUFFER IMAGE HERE", Q_NULLPTR));
        cursorStatsLabel->setText(QApplication::translate("MainWindow", "cursorStatsLabel", Q_NULLPTR));
        debugButton3->setText(QApplication::translate("MainWindow", "Jump to Bootloader", Q_NULLPTR));
        debugButton1->setText(QApplication::translate("MainWindow", "Debug!", Q_NULLPTR));
        debugButton2->setText(QApplication::translate("MainWindow", "ReinitUsb()", Q_NULLPTR));
        controller_iso->setText(QApplication::translate("MainWindow", "SALUTON MI ESTAS ISO DRIVER", Q_NULLPTR));
        digitalOutputGroup->setTitle(QApplication::translate("MainWindow", "Digital Output", Q_NULLPTR));
        digitalOutCheckbox_CH3->setText(QApplication::translate("MainWindow", "Pin 3", Q_NULLPTR));
        digitalOutCheckbox_CH2->setText(QApplication::translate("MainWindow", "Pin 2", Q_NULLPTR));
        digitalOutCheckbox_CH1->setText(QApplication::translate("MainWindow", "Pin 1", Q_NULLPTR));
        digitalOutCheckbox_CH4->setText(QApplication::translate("MainWindow", "Pin 4", Q_NULLPTR));
        busSifferGroup_CH1->setTitle(QApplication::translate("MainWindow", "Logic Analyzer CH1", Q_NULLPTR));
        serialDecodingCheck_CH1->setTitle(QApplication::translate("MainWindow", "Serial Decoding", Q_NULLPTR));
        serialDecodingModeSelect_CH1->clear();
        serialDecodingModeSelect_CH1->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "UART", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SPI", Q_NULLPTR)
         << QApplication::translate("MainWindow", "I2C", Q_NULLPTR)
        );
        busSnifferGroup_CH2->setTitle(QApplication::translate("MainWindow", "Logic Analyzer CH2", Q_NULLPTR));
        serialDecodingCheck_CH2->setTitle(QApplication::translate("MainWindow", "Serial Decoding", Q_NULLPTR));
        serialDecodingModeSelect_CH2->clear();
        serialDecodingModeSelect_CH2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "UART", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SPI", Q_NULLPTR)
         << QApplication::translate("MainWindow", "I2C", Q_NULLPTR)
        );
        pause_LA->setText(QApplication::translate("MainWindow", "Paused", Q_NULLPTR));
        menuOscilloscope_2->setTitle(QApplication::translate("MainWindow", "Oscilloscope", Q_NULLPTR));
        menuGain_2->setTitle(QApplication::translate("MainWindow", "Gain", Q_NULLPTR));
        menuCH1_Stats->setTitle(QApplication::translate("MainWindow", "CH1 Stats", Q_NULLPTR));
        menuCH2_Stats->setTitle(QApplication::translate("MainWindow", "CH2 Stats", Q_NULLPTR));
        menuFrame_rate->setTitle(QApplication::translate("MainWindow", "Frame rate", Q_NULLPTR));
        menuRange->setTitle(QApplication::translate("MainWindow", "Range", Q_NULLPTR));
        menuMultimeter_2->setTitle(QApplication::translate("MainWindow", "Multimeter", Q_NULLPTR));
        menuV_2->setTitle(QApplication::translate("MainWindow", "Range (V)", Q_NULLPTR));
        menuI_2->setTitle(QApplication::translate("MainWindow", "Range (I)", Q_NULLPTR));
        menuRange_R->setTitle(QApplication::translate("MainWindow", "Range (R)", Q_NULLPTR));
        menuRange_C->setTitle(QApplication::translate("MainWindow", "Range (C)", Q_NULLPTR));
        menuBus_Sniffer->setTitle(QApplication::translate("MainWindow", "Logic Analyzer", Q_NULLPTR));
        menuUART_1->setTitle(QApplication::translate("MainWindow", "UART 1", Q_NULLPTR));
        menuBaud_Rate->setTitle(QApplication::translate("MainWindow", "Baud Rate", Q_NULLPTR));
        menuType_Here_2->setTitle(QApplication::translate("MainWindow", "Type Here", Q_NULLPTR));
        menuParity_Bit->setTitle(QApplication::translate("MainWindow", "Parity Bit", Q_NULLPTR));
        menuData_Bits->setTitle(QApplication::translate("MainWindow", "Data Bits", Q_NULLPTR));
        menuUART_2->setTitle(QApplication::translate("MainWindow", "UART 2", Q_NULLPTR));
        menuBaud_Rate_2->setTitle(QApplication::translate("MainWindow", "Baud Rate", Q_NULLPTR));
        menuData_Bits_2->setTitle(QApplication::translate("MainWindow", "Data Bits", Q_NULLPTR));
        menuParity_Bit_2->setTitle(QApplication::translate("MainWindow", "Parity Bit", Q_NULLPTR));
        menuAndroid_Special->setTitle(QApplication::translate("MainWindow", "Android Special", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
