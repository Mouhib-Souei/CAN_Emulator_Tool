/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *pushButton_ON;
    QPushButton *pushButton_OFF;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QMenu *menuCSF_LAB;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(120, 40, 431, 231));
        pushButton_ON = new QPushButton(groupBox);
        pushButton_ON->setObjectName("pushButton_ON");
        pushButton_ON->setGeometry(QRect(120, 50, 171, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Script")});
        font.setPointSize(12);
        pushButton_ON->setFont(font);
        pushButton_OFF = new QPushButton(groupBox);
        pushButton_OFF->setObjectName("pushButton_OFF");
        pushButton_OFF->setGeometry(QRect(120, 120, 171, 61));
        pushButton_OFF->setFont(font);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(230, 330, 381, 121));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(62, 30, 261, 71));
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuCSF_LAB = new QMenu(menubar);
        menuCSF_LAB->setObjectName("menuCSF_LAB");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuCSF_LAB->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Control Led", nullptr));
        pushButton_ON->setText(QCoreApplication::translate("MainWindow", "Led Green ON", nullptr));
        pushButton_OFF->setText(QCoreApplication::translate("MainWindow", "Led Green OFF", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "LED status", nullptr));
        menuCSF_LAB->setTitle(QCoreApplication::translate("MainWindow", "CSF_LAB", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
