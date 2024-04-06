/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLine;
    QAction *actionCircle;
    QAction *actionRectangle;
    QAction *actionSelect;
    QAction *actionDelete;
    QAction *actionExit;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuDraw;
    QMenu *menuModify;
    QMenu *menuFile;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionLine = new QAction(MainWindow);
        actionLine->setObjectName(QString::fromUtf8("actionLine"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Line.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLine->setIcon(icon);
        actionCircle = new QAction(MainWindow);
        actionCircle->setObjectName(QString::fromUtf8("actionCircle"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/Circle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCircle->setIcon(icon1);
        actionRectangle = new QAction(MainWindow);
        actionRectangle->setObjectName(QString::fromUtf8("actionRectangle"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/Rectangle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRectangle->setIcon(icon2);
        actionSelect = new QAction(MainWindow);
        actionSelect->setObjectName(QString::fromUtf8("actionSelect"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect->setIcon(icon3);
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/Delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon4);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/Exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon5);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuDraw = new QMenu(menubar);
        menuDraw->setObjectName(QString::fromUtf8("menuDraw"));
        menuModify = new QMenu(menubar);
        menuModify->setObjectName(QString::fromUtf8("menuModify"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setStyleSheet(QString::fromUtf8("hover{background-color:gray}"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuDraw->menuAction());
        menubar->addAction(menuModify->menuAction());
        menuDraw->addAction(actionLine);
        menuDraw->addAction(actionCircle);
        menuDraw->addAction(actionRectangle);
        menuModify->addAction(actionSelect);
        menuModify->addAction(actionDelete);
        menuFile->addAction(actionExit);
        toolBar->addAction(actionLine);
        toolBar->addAction(actionCircle);
        toolBar->addAction(actionRectangle);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLine->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
        actionCircle->setText(QCoreApplication::translate("MainWindow", "Circle", nullptr));
        actionRectangle->setText(QCoreApplication::translate("MainWindow", "Rectangle", nullptr));
        actionSelect->setText(QCoreApplication::translate("MainWindow", "Select", nullptr));
        actionDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        menuDraw->setTitle(QCoreApplication::translate("MainWindow", "Draw", nullptr));
        menuModify->setTitle(QCoreApplication::translate("MainWindow", "Modify", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
