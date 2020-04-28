/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include "torngrafik.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionReset;
    QAction *action3;
    QAction *action5;
    QAction *action10;
    QAction *action20;
    QAction *action50;
    QAction *action100;
    QAction *actionMix;
    QAction *actionSlow;
    QAction *actionNormal;
    QAction *actionFast;
    QAction *actionmoveDiscs;
    QAction *actionsolveMixed;
    Torngrafik *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuSettings;
    QMenu *menuSize;
    QMenu *menuSpeed;
    QMenu *menuUppdrag;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName(QStringLiteral("actionReset"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/reset.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReset->setIcon(icon);
        action3 = new QAction(MainWindow);
        action3->setObjectName(QStringLiteral("action3"));
        action3->setCheckable(true);
        action5 = new QAction(MainWindow);
        action5->setObjectName(QStringLiteral("action5"));
        action5->setCheckable(true);
        action10 = new QAction(MainWindow);
        action10->setObjectName(QStringLiteral("action10"));
        action10->setCheckable(true);
        action20 = new QAction(MainWindow);
        action20->setObjectName(QStringLiteral("action20"));
        action20->setCheckable(true);
        action50 = new QAction(MainWindow);
        action50->setObjectName(QStringLiteral("action50"));
        action50->setCheckable(true);
        action100 = new QAction(MainWindow);
        action100->setObjectName(QStringLiteral("action100"));
        action100->setCheckable(true);
        actionMix = new QAction(MainWindow);
        actionMix->setObjectName(QStringLiteral("actionMix"));
        actionSlow = new QAction(MainWindow);
        actionSlow->setObjectName(QStringLiteral("actionSlow"));
        actionSlow->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/turtle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSlow->setIcon(icon1);
        actionNormal = new QAction(MainWindow);
        actionNormal->setObjectName(QStringLiteral("actionNormal"));
        actionNormal->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/rabbit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNormal->setIcon(icon2);
        actionFast = new QAction(MainWindow);
        actionFast->setObjectName(QStringLiteral("actionFast"));
        actionFast->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/rocket.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFast->setIcon(icon3);
        actionmoveDiscs = new QAction(MainWindow);
        actionmoveDiscs->setObjectName(QStringLiteral("actionmoveDiscs"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/play1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionmoveDiscs->setIcon(icon4);
        actionsolveMixed = new QAction(MainWindow);
        actionsolveMixed->setObjectName(QStringLiteral("actionsolveMixed"));
        centralWidget = new Torngrafik(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        menuSize = new QMenu(menuSettings);
        menuSize->setObjectName(QStringLiteral("menuSize"));
        menuSpeed = new QMenu(menuSettings);
        menuSpeed->setObjectName(QStringLiteral("menuSpeed"));
        menuUppdrag = new QMenu(menuBar);
        menuUppdrag->setObjectName(QStringLiteral("menuUppdrag"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuUppdrag->menuAction());
        menuSettings->addAction(actionReset);
        menuSettings->addAction(menuSize->menuAction());
        menuSettings->addAction(actionMix);
        menuSettings->addAction(menuSpeed->menuAction());
        menuSize->addAction(action3);
        menuSize->addAction(action5);
        menuSize->addAction(action10);
        menuSize->addAction(action20);
        menuSize->addAction(action50);
        menuSize->addAction(action100);
        menuSpeed->addAction(actionSlow);
        menuSpeed->addAction(actionNormal);
        menuSpeed->addAction(actionFast);
        menuUppdrag->addAction(actionmoveDiscs);
        menuUppdrag->addAction(actionsolveMixed);
        mainToolBar->addAction(actionSlow);
        mainToolBar->addAction(actionNormal);
        mainToolBar->addAction(actionFast);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionReset);
        mainToolBar->addAction(actionmoveDiscs);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionReset->setText(QApplication::translate("MainWindow", "\303\205terst\303\244ll", nullptr));
        action3->setText(QApplication::translate("MainWindow", "3", nullptr));
        action5->setText(QApplication::translate("MainWindow", "5", nullptr));
        action10->setText(QApplication::translate("MainWindow", "10", nullptr));
        action20->setText(QApplication::translate("MainWindow", "20", nullptr));
        action50->setText(QApplication::translate("MainWindow", "50", nullptr));
        action100->setText(QApplication::translate("MainWindow", "100", nullptr));
        actionMix->setText(QApplication::translate("MainWindow", "Blanda", nullptr));
        actionSlow->setText(QApplication::translate("MainWindow", "l\303\245ngsam", nullptr));
        actionNormal->setText(QApplication::translate("MainWindow", "lagom", nullptr));
        actionFast->setText(QApplication::translate("MainWindow", "snabb", nullptr));
        actionmoveDiscs->setText(QApplication::translate("MainWindow", "moveDiscs", nullptr));
        actionsolveMixed->setText(QApplication::translate("MainWindow", "solveMixed", nullptr));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Inst\303\244llningar", nullptr));
        menuSize->setTitle(QApplication::translate("MainWindow", "Storlek", nullptr));
        menuSpeed->setTitle(QApplication::translate("MainWindow", "hastighet", nullptr));
        menuUppdrag->setTitle(QApplication::translate("MainWindow", "Uppdrag", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
