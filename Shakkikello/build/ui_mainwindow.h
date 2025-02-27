/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *progressBar1;
    QPushButton *switch1;
    QPushButton *sec;
    QPushButton *start;
    QPushButton *min;
    QPushButton *switch2;
    QProgressBar *progressBar2;
    QPushButton *stop;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        progressBar1 = new QProgressBar(centralwidget);
        progressBar1->setObjectName("progressBar1");
        progressBar1->setGeometry(QRect(60, 160, 118, 23));
        progressBar1->setValue(24);
        switch1 = new QPushButton(centralwidget);
        switch1->setObjectName("switch1");
        switch1->setGeometry(QRect(60, 190, 101, 41));
        sec = new QPushButton(centralwidget);
        sec->setObjectName("sec");
        sec->setGeometry(QRect(170, 330, 93, 29));
        start = new QPushButton(centralwidget);
        start->setObjectName("start");
        start->setGeometry(QRect(80, 440, 101, 41));
        min = new QPushButton(centralwidget);
        min->setObjectName("min");
        min->setGeometry(QRect(340, 330, 93, 29));
        switch2 = new QPushButton(centralwidget);
        switch2->setObjectName("switch2");
        switch2->setGeometry(QRect(450, 200, 101, 41));
        progressBar2 = new QProgressBar(centralwidget);
        progressBar2->setObjectName("progressBar2");
        progressBar2->setGeometry(QRect(450, 170, 118, 23));
        progressBar2->setValue(24);
        stop = new QPushButton(centralwidget);
        stop->setObjectName("stop");
        stop->setGeometry(QRect(430, 440, 101, 41));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 259, 221, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        switch1->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        sec->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        min->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        switch2->setText(QCoreApplication::translate("MainWindow", "Switch Player", nullptr));
        stop->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Game ongoing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
