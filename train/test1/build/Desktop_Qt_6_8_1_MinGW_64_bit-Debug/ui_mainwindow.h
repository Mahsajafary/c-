/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtfirstnum;
    QLineEdit *txtsecondnum;
    QPushButton *btnadd;
    QPushButton *btnsubtract;
    QPushButton *btnDivide;
    QPushButton *btnMultipy;
    QLabel *label_3;
    QLineEdit *txtresult;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(0, 600));
        QFont font;
        font.setBold(true);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(16, 31, 82, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(16, 60, 83, 20));
        label_2->setMinimumSize(QSize(61, 20));
        txtfirstnum = new QLineEdit(centralwidget);
        txtfirstnum->setObjectName("txtfirstnum");
        txtfirstnum->setGeometry(QRect(110, 30, 113, 20));
        txtsecondnum = new QLineEdit(centralwidget);
        txtsecondnum->setObjectName("txtsecondnum");
        txtsecondnum->setGeometry(QRect(111, 61, 113, 20));
        btnadd = new QPushButton(centralwidget);
        btnadd->setObjectName("btnadd");
        btnadd->setGeometry(QRect(23, 109, 46, 24));
        btnsubtract = new QPushButton(centralwidget);
        btnsubtract->setObjectName("btnsubtract");
        btnsubtract->setGeometry(QRect(87, 109, 46, 24));
        btnDivide = new QPushButton(centralwidget);
        btnDivide->setObjectName("btnDivide");
        btnDivide->setGeometry(QRect(149, 109, 46, 24));
        btnMultipy = new QPushButton(centralwidget);
        btnMultipy->setObjectName("btnMultipy");
        btnMultipy->setGeometry(QRect(210, 109, 46, 24));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(32, 170, 69, 21));
        txtresult = new QLineEdit(centralwidget);
        txtresult->setObjectName("txtresult");
        txtresult->setGeometry(QRect(111, 170, 113, 20));
        txtresult->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
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
        label->setText(QCoreApplication::translate("MainWindow", "  First Number :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", " Second Number :", nullptr));
        btnadd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnsubtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnDivide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btnMultipy->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Teh result is  :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
