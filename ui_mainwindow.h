/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_0;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QPushButton *pushButtonA_1;
    QPushButton *pushButtonB_2;
    QPushButton *pushButtonC_3;
    QPushButton *pushButtonD_4;
    QPushButton *pushButtonE_5;
    QPushButton *pushButtonF_6;
    QPushButton *pushButtonG_7;
    QPushButton *pushButtonH_8;
    QPushButton *pushButtonI_9;
    QPushButton *pushButtonJ_10;
    QPushButton *pushButtonK_11;
    QPushButton *pushButtonL_12;
    QPushButton *pushButtonM_13;
    QPushButton *pushButtonN_14;
    QPushButton *pushButtonO_15;
    QPushButton *pushButtonP_16;
    QPushButton *pushButtonQ_17;
    QPushButton *pushButtonR_18;
    QPushButton *pushButtonS_19;
    QPushButton *pushButtonT_20;
    QPushButton *pushButtonU_21;
    QPushButton *pushButtonV_22;
    QPushButton *pushButtonW_23;
    QPushButton *pushButtonX_24;
    QPushButton *pushButtonY_25;
    QPushButton *pushButtonZ_26;
    QPushButton *pushButtonHome_27;
    QLabel *labelSubject;
    QComboBox *comboBoxSubject;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpinBox *spinBoxIteration;
    QWidget *tab_1;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QSpinBox *spinBoxInteval;
    QLabel *label_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *spinBoxCH;
    QLabel *label_4;
    QSpinBox *spinBoxPoint;
    QLabel *label_5;
    QLabel *label_6;
    QSpinBox *spinBoxRepeated;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QSpinBox *spinBoxPort;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menuBar;
    QMenu *menuAbout;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(779, 356);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tab_0 = new QWidget();
        tab_0->setObjectName(QStringLiteral("tab_0"));
        gridLayout_2 = new QGridLayout(tab_0);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widget = new QWidget(tab_0);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 3, 0, 3);
        pushButtonA_1 = new QPushButton(widget);
        pushButtonA_1->setObjectName(QStringLiteral("pushButtonA_1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonA_1->sizePolicy().hasHeightForWidth());
        pushButtonA_1->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(23);
        font.setBold(false);
        font.setWeight(50);
        pushButtonA_1->setFont(font);

        gridLayout_3->addWidget(pushButtonA_1, 0, 0, 1, 1);

        pushButtonB_2 = new QPushButton(widget);
        pushButtonB_2->setObjectName(QStringLiteral("pushButtonB_2"));
        sizePolicy.setHeightForWidth(pushButtonB_2->sizePolicy().hasHeightForWidth());
        pushButtonB_2->setSizePolicy(sizePolicy);
        pushButtonB_2->setFont(font);

        gridLayout_3->addWidget(pushButtonB_2, 0, 1, 1, 1);

        pushButtonC_3 = new QPushButton(widget);
        pushButtonC_3->setObjectName(QStringLiteral("pushButtonC_3"));
        sizePolicy.setHeightForWidth(pushButtonC_3->sizePolicy().hasHeightForWidth());
        pushButtonC_3->setSizePolicy(sizePolicy);
        pushButtonC_3->setFont(font);

        gridLayout_3->addWidget(pushButtonC_3, 0, 2, 1, 1);

        pushButtonD_4 = new QPushButton(widget);
        pushButtonD_4->setObjectName(QStringLiteral("pushButtonD_4"));
        sizePolicy.setHeightForWidth(pushButtonD_4->sizePolicy().hasHeightForWidth());
        pushButtonD_4->setSizePolicy(sizePolicy);
        pushButtonD_4->setFont(font);

        gridLayout_3->addWidget(pushButtonD_4, 0, 3, 1, 1);

        pushButtonE_5 = new QPushButton(widget);
        pushButtonE_5->setObjectName(QStringLiteral("pushButtonE_5"));
        sizePolicy.setHeightForWidth(pushButtonE_5->sizePolicy().hasHeightForWidth());
        pushButtonE_5->setSizePolicy(sizePolicy);
        pushButtonE_5->setFont(font);

        gridLayout_3->addWidget(pushButtonE_5, 0, 4, 1, 1);

        pushButtonF_6 = new QPushButton(widget);
        pushButtonF_6->setObjectName(QStringLiteral("pushButtonF_6"));
        sizePolicy.setHeightForWidth(pushButtonF_6->sizePolicy().hasHeightForWidth());
        pushButtonF_6->setSizePolicy(sizePolicy);
        pushButtonF_6->setFont(font);

        gridLayout_3->addWidget(pushButtonF_6, 0, 5, 1, 1);

        pushButtonG_7 = new QPushButton(widget);
        pushButtonG_7->setObjectName(QStringLiteral("pushButtonG_7"));
        sizePolicy.setHeightForWidth(pushButtonG_7->sizePolicy().hasHeightForWidth());
        pushButtonG_7->setSizePolicy(sizePolicy);
        pushButtonG_7->setFont(font);

        gridLayout_3->addWidget(pushButtonG_7, 0, 6, 1, 1);

        pushButtonH_8 = new QPushButton(widget);
        pushButtonH_8->setObjectName(QStringLiteral("pushButtonH_8"));
        sizePolicy.setHeightForWidth(pushButtonH_8->sizePolicy().hasHeightForWidth());
        pushButtonH_8->setSizePolicy(sizePolicy);
        pushButtonH_8->setFont(font);

        gridLayout_3->addWidget(pushButtonH_8, 0, 7, 1, 1);

        pushButtonI_9 = new QPushButton(widget);
        pushButtonI_9->setObjectName(QStringLiteral("pushButtonI_9"));
        sizePolicy.setHeightForWidth(pushButtonI_9->sizePolicy().hasHeightForWidth());
        pushButtonI_9->setSizePolicy(sizePolicy);
        pushButtonI_9->setFont(font);

        gridLayout_3->addWidget(pushButtonI_9, 0, 8, 1, 1);

        pushButtonJ_10 = new QPushButton(widget);
        pushButtonJ_10->setObjectName(QStringLiteral("pushButtonJ_10"));
        sizePolicy.setHeightForWidth(pushButtonJ_10->sizePolicy().hasHeightForWidth());
        pushButtonJ_10->setSizePolicy(sizePolicy);
        pushButtonJ_10->setFont(font);

        gridLayout_3->addWidget(pushButtonJ_10, 1, 0, 1, 1);

        pushButtonK_11 = new QPushButton(widget);
        pushButtonK_11->setObjectName(QStringLiteral("pushButtonK_11"));
        sizePolicy.setHeightForWidth(pushButtonK_11->sizePolicy().hasHeightForWidth());
        pushButtonK_11->setSizePolicy(sizePolicy);
        pushButtonK_11->setFont(font);

        gridLayout_3->addWidget(pushButtonK_11, 1, 1, 1, 1);

        pushButtonL_12 = new QPushButton(widget);
        pushButtonL_12->setObjectName(QStringLiteral("pushButtonL_12"));
        sizePolicy.setHeightForWidth(pushButtonL_12->sizePolicy().hasHeightForWidth());
        pushButtonL_12->setSizePolicy(sizePolicy);
        pushButtonL_12->setFont(font);

        gridLayout_3->addWidget(pushButtonL_12, 1, 2, 1, 1);

        pushButtonM_13 = new QPushButton(widget);
        pushButtonM_13->setObjectName(QStringLiteral("pushButtonM_13"));
        sizePolicy.setHeightForWidth(pushButtonM_13->sizePolicy().hasHeightForWidth());
        pushButtonM_13->setSizePolicy(sizePolicy);
        pushButtonM_13->setFont(font);

        gridLayout_3->addWidget(pushButtonM_13, 1, 3, 1, 1);

        pushButtonN_14 = new QPushButton(widget);
        pushButtonN_14->setObjectName(QStringLiteral("pushButtonN_14"));
        sizePolicy.setHeightForWidth(pushButtonN_14->sizePolicy().hasHeightForWidth());
        pushButtonN_14->setSizePolicy(sizePolicy);
        pushButtonN_14->setFont(font);

        gridLayout_3->addWidget(pushButtonN_14, 1, 4, 1, 1);

        pushButtonO_15 = new QPushButton(widget);
        pushButtonO_15->setObjectName(QStringLiteral("pushButtonO_15"));
        sizePolicy.setHeightForWidth(pushButtonO_15->sizePolicy().hasHeightForWidth());
        pushButtonO_15->setSizePolicy(sizePolicy);
        pushButtonO_15->setFont(font);

        gridLayout_3->addWidget(pushButtonO_15, 1, 5, 1, 1);

        pushButtonP_16 = new QPushButton(widget);
        pushButtonP_16->setObjectName(QStringLiteral("pushButtonP_16"));
        sizePolicy.setHeightForWidth(pushButtonP_16->sizePolicy().hasHeightForWidth());
        pushButtonP_16->setSizePolicy(sizePolicy);
        pushButtonP_16->setFont(font);

        gridLayout_3->addWidget(pushButtonP_16, 1, 6, 1, 1);

        pushButtonQ_17 = new QPushButton(widget);
        pushButtonQ_17->setObjectName(QStringLiteral("pushButtonQ_17"));
        sizePolicy.setHeightForWidth(pushButtonQ_17->sizePolicy().hasHeightForWidth());
        pushButtonQ_17->setSizePolicy(sizePolicy);
        pushButtonQ_17->setFont(font);

        gridLayout_3->addWidget(pushButtonQ_17, 1, 7, 1, 1);

        pushButtonR_18 = new QPushButton(widget);
        pushButtonR_18->setObjectName(QStringLiteral("pushButtonR_18"));
        sizePolicy.setHeightForWidth(pushButtonR_18->sizePolicy().hasHeightForWidth());
        pushButtonR_18->setSizePolicy(sizePolicy);
        pushButtonR_18->setFont(font);

        gridLayout_3->addWidget(pushButtonR_18, 1, 8, 1, 1);

        pushButtonS_19 = new QPushButton(widget);
        pushButtonS_19->setObjectName(QStringLiteral("pushButtonS_19"));
        sizePolicy.setHeightForWidth(pushButtonS_19->sizePolicy().hasHeightForWidth());
        pushButtonS_19->setSizePolicy(sizePolicy);
        pushButtonS_19->setFont(font);

        gridLayout_3->addWidget(pushButtonS_19, 2, 0, 1, 1);

        pushButtonT_20 = new QPushButton(widget);
        pushButtonT_20->setObjectName(QStringLiteral("pushButtonT_20"));
        sizePolicy.setHeightForWidth(pushButtonT_20->sizePolicy().hasHeightForWidth());
        pushButtonT_20->setSizePolicy(sizePolicy);
        pushButtonT_20->setFont(font);

        gridLayout_3->addWidget(pushButtonT_20, 2, 1, 1, 1);

        pushButtonU_21 = new QPushButton(widget);
        pushButtonU_21->setObjectName(QStringLiteral("pushButtonU_21"));
        sizePolicy.setHeightForWidth(pushButtonU_21->sizePolicy().hasHeightForWidth());
        pushButtonU_21->setSizePolicy(sizePolicy);
        pushButtonU_21->setFont(font);

        gridLayout_3->addWidget(pushButtonU_21, 2, 2, 1, 1);

        pushButtonV_22 = new QPushButton(widget);
        pushButtonV_22->setObjectName(QStringLiteral("pushButtonV_22"));
        sizePolicy.setHeightForWidth(pushButtonV_22->sizePolicy().hasHeightForWidth());
        pushButtonV_22->setSizePolicy(sizePolicy);
        pushButtonV_22->setFont(font);

        gridLayout_3->addWidget(pushButtonV_22, 2, 3, 1, 1);

        pushButtonW_23 = new QPushButton(widget);
        pushButtonW_23->setObjectName(QStringLiteral("pushButtonW_23"));
        sizePolicy.setHeightForWidth(pushButtonW_23->sizePolicy().hasHeightForWidth());
        pushButtonW_23->setSizePolicy(sizePolicy);
        pushButtonW_23->setFont(font);

        gridLayout_3->addWidget(pushButtonW_23, 2, 4, 1, 1);

        pushButtonX_24 = new QPushButton(widget);
        pushButtonX_24->setObjectName(QStringLiteral("pushButtonX_24"));
        sizePolicy.setHeightForWidth(pushButtonX_24->sizePolicy().hasHeightForWidth());
        pushButtonX_24->setSizePolicy(sizePolicy);
        pushButtonX_24->setFont(font);

        gridLayout_3->addWidget(pushButtonX_24, 2, 5, 1, 1);

        pushButtonY_25 = new QPushButton(widget);
        pushButtonY_25->setObjectName(QStringLiteral("pushButtonY_25"));
        sizePolicy.setHeightForWidth(pushButtonY_25->sizePolicy().hasHeightForWidth());
        pushButtonY_25->setSizePolicy(sizePolicy);
        pushButtonY_25->setFont(font);

        gridLayout_3->addWidget(pushButtonY_25, 2, 6, 1, 1);

        pushButtonZ_26 = new QPushButton(widget);
        pushButtonZ_26->setObjectName(QStringLiteral("pushButtonZ_26"));
        sizePolicy.setHeightForWidth(pushButtonZ_26->sizePolicy().hasHeightForWidth());
        pushButtonZ_26->setSizePolicy(sizePolicy);
        pushButtonZ_26->setFont(font);

        gridLayout_3->addWidget(pushButtonZ_26, 2, 7, 1, 1);

        pushButtonHome_27 = new QPushButton(widget);
        pushButtonHome_27->setObjectName(QStringLiteral("pushButtonHome_27"));
        sizePolicy.setHeightForWidth(pushButtonHome_27->sizePolicy().hasHeightForWidth());
        pushButtonHome_27->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(17);
        font1.setBold(false);
        font1.setWeight(50);
        pushButtonHome_27->setFont(font1);

        gridLayout_3->addWidget(pushButtonHome_27, 2, 8, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 5);

        labelSubject = new QLabel(tab_0);
        labelSubject->setObjectName(QStringLiteral("labelSubject"));

        gridLayout_2->addWidget(labelSubject, 0, 0, 1, 1);

        comboBoxSubject = new QComboBox(tab_0);
        comboBoxSubject->setObjectName(QStringLiteral("comboBoxSubject"));

        gridLayout_2->addWidget(comboBoxSubject, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 4, 1, 1);

        label = new QLabel(tab_0);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 2, 1, 1);

        spinBoxIteration = new QSpinBox(tab_0);
        spinBoxIteration->setObjectName(QStringLiteral("spinBoxIteration"));
        spinBoxIteration->setMinimum(1);
        spinBoxIteration->setMaximum(999);
        spinBoxIteration->setValue(1);

        gridLayout_2->addWidget(spinBoxIteration, 0, 3, 1, 1);

        tabWidget->addTab(tab_0, QString());
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        gridLayout_6 = new QGridLayout(tab_1);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        groupBox = new QGroupBox(tab_1);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        spinBoxInteval = new QSpinBox(groupBox);
        spinBoxInteval->setObjectName(QStringLiteral("spinBoxInteval"));
        spinBoxInteval->setMinimum(1);
        spinBoxInteval->setMaximum(99999999);
        spinBoxInteval->setValue(250);

        gridLayout_4->addWidget(spinBoxInteval, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_4->addWidget(label_3, 1, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_4->addWidget(label_2, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 3, 2, 1, 1);

        spinBoxCH = new QSpinBox(groupBox);
        spinBoxCH->setObjectName(QStringLiteral("spinBoxCH"));
        spinBoxCH->setMinimum(1);
        spinBoxCH->setValue(8);

        gridLayout_4->addWidget(spinBoxCH, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_4->addWidget(label_4, 2, 0, 1, 1);

        spinBoxPoint = new QSpinBox(groupBox);
        spinBoxPoint->setObjectName(QStringLiteral("spinBoxPoint"));
        spinBoxPoint->setMinimum(1);
        spinBoxPoint->setMaximum(99999);
        spinBoxPoint->setValue(400);

        gridLayout_4->addWidget(spinBoxPoint, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_4->addWidget(label_5, 3, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        spinBoxRepeated = new QSpinBox(groupBox);
        spinBoxRepeated->setObjectName(QStringLiteral("spinBoxRepeated"));
        spinBoxRepeated->setMinimum(1);
        spinBoxRepeated->setMaximum(9999);
        spinBoxRepeated->setValue(20);

        gridLayout_4->addWidget(spinBoxRepeated, 0, 1, 1, 1);

        gridLayout_4->setColumnStretch(0, 2);
        gridLayout_4->setColumnStretch(1, 4);
        gridLayout_4->setColumnStretch(2, 10);

        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 112, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 1, 0, 1, 1);


        gridLayout_6->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(tab_1);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_7 = new QGridLayout(groupBox_2);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout->addWidget(label_7);

        spinBoxPort = new QSpinBox(groupBox_2);
        spinBoxPort->setObjectName(QStringLiteral("spinBoxPort"));
        spinBoxPort->setMinimum(1);
        spinBoxPort->setMaximum(99999);
        spinBoxPort->setValue(2000);

        horizontalLayout->addWidget(spinBoxPort);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout_7->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_2, 1, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_2, 0, 1, 1, 1);

        gridLayout_6->setColumnStretch(0, 10);
        gridLayout_6->setColumnStretch(1, 10);
        tabWidget->addTab(tab_1, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 779, 21));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionAbout);
        menuAbout->addAction(actionAbout_Qt);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "EMG Keyboard", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About Qt", 0));
        pushButtonA_1->setText(QApplication::translate("MainWindow", "A", 0));
        pushButtonB_2->setText(QApplication::translate("MainWindow", "B", 0));
        pushButtonC_3->setText(QApplication::translate("MainWindow", "C", 0));
        pushButtonD_4->setText(QApplication::translate("MainWindow", "D", 0));
        pushButtonE_5->setText(QApplication::translate("MainWindow", "E", 0));
        pushButtonF_6->setText(QApplication::translate("MainWindow", "F", 0));
        pushButtonG_7->setText(QApplication::translate("MainWindow", "G", 0));
        pushButtonH_8->setText(QApplication::translate("MainWindow", "H", 0));
        pushButtonI_9->setText(QApplication::translate("MainWindow", "I", 0));
        pushButtonJ_10->setText(QApplication::translate("MainWindow", "J", 0));
        pushButtonK_11->setText(QApplication::translate("MainWindow", "K", 0));
        pushButtonL_12->setText(QApplication::translate("MainWindow", "L", 0));
        pushButtonM_13->setText(QApplication::translate("MainWindow", "M", 0));
        pushButtonN_14->setText(QApplication::translate("MainWindow", "N", 0));
        pushButtonO_15->setText(QApplication::translate("MainWindow", "O", 0));
        pushButtonP_16->setText(QApplication::translate("MainWindow", "P", 0));
        pushButtonQ_17->setText(QApplication::translate("MainWindow", "Q", 0));
        pushButtonR_18->setText(QApplication::translate("MainWindow", "R", 0));
        pushButtonS_19->setText(QApplication::translate("MainWindow", "S", 0));
        pushButtonT_20->setText(QApplication::translate("MainWindow", "T", 0));
        pushButtonU_21->setText(QApplication::translate("MainWindow", "U", 0));
        pushButtonV_22->setText(QApplication::translate("MainWindow", "V", 0));
        pushButtonW_23->setText(QApplication::translate("MainWindow", "W", 0));
        pushButtonX_24->setText(QApplication::translate("MainWindow", "X", 0));
        pushButtonY_25->setText(QApplication::translate("MainWindow", "Y", 0));
        pushButtonZ_26->setText(QApplication::translate("MainWindow", "Z", 0));
        pushButtonHome_27->setText(QApplication::translate("MainWindow", "Home", 0));
        labelSubject->setText(QApplication::translate("MainWindow", "Subject Code", 0));
        label->setText(QApplication::translate("MainWindow", "# Iteration", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_0), QApplication::translate("MainWindow", "Keyboard", 0));
        groupBox->setTitle(QString());
        label_3->setText(QApplication::translate("MainWindow", "ms", 0));
        label_2->setText(QApplication::translate("MainWindow", "Interval", 0));
        label_4->setText(QApplication::translate("MainWindow", "CH", 0));
        label_5->setText(QApplication::translate("MainWindow", "Points", 0));
        label_6->setText(QApplication::translate("MainWindow", "How many times repeated ?", 0));
        groupBox_2->setTitle(QString());
        label_7->setText(QApplication::translate("MainWindow", "Server Port", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("MainWindow", "Settings", 0));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
