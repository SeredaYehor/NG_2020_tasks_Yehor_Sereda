/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QPushButton *one;
    QPushButton *two;
    QPushButton *three;
    QPushButton *four;
    QPushButton *five;
    QPushButton *six;
    QPushButton *seven;
    QPushButton *eight;
    QPushButton *nine;
    QPushButton *plus;
    QPushButton *minus;
    QPushButton *star;
    QPushButton *div;
    QPushButton *zero;
    QPushButton *equal;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(800, 600);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(280, 90, 151, 21));
        one = new QPushButton(centralwidget);
        one->setObjectName(QString::fromUtf8("one"));
        one->setGeometry(QRect(280, 120, 31, 31));
        two = new QPushButton(centralwidget);
        two->setObjectName(QString::fromUtf8("two"));
        two->setGeometry(QRect(320, 120, 31, 31));
        three = new QPushButton(centralwidget);
        three->setObjectName(QString::fromUtf8("three"));
        three->setGeometry(QRect(360, 120, 31, 31));
        four = new QPushButton(centralwidget);
        four->setObjectName(QString::fromUtf8("four"));
        four->setGeometry(QRect(280, 160, 31, 31));
        five = new QPushButton(centralwidget);
        five->setObjectName(QString::fromUtf8("five"));
        five->setGeometry(QRect(320, 160, 31, 31));
        six = new QPushButton(centralwidget);
        six->setObjectName(QString::fromUtf8("six"));
        six->setGeometry(QRect(360, 160, 31, 31));
        seven = new QPushButton(centralwidget);
        seven->setObjectName(QString::fromUtf8("seven"));
        seven->setGeometry(QRect(280, 200, 31, 31));
        eight = new QPushButton(centralwidget);
        eight->setObjectName(QString::fromUtf8("eight"));
        eight->setGeometry(QRect(320, 200, 31, 31));
        nine = new QPushButton(centralwidget);
        nine->setObjectName(QString::fromUtf8("nine"));
        nine->setGeometry(QRect(360, 200, 31, 31));
        plus = new QPushButton(centralwidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        plus->setGeometry(QRect(400, 120, 31, 31));
        minus = new QPushButton(centralwidget);
        minus->setObjectName(QString::fromUtf8("minus"));
        minus->setGeometry(QRect(400, 160, 31, 31));
        star = new QPushButton(centralwidget);
        star->setObjectName(QString::fromUtf8("star"));
        star->setGeometry(QRect(400, 200, 31, 31));
        div = new QPushButton(centralwidget);
        div->setObjectName(QString::fromUtf8("div"));
        div->setGeometry(QRect(400, 240, 31, 31));
        zero = new QPushButton(centralwidget);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setGeometry(QRect(320, 240, 31, 31));
        equal = new QPushButton(centralwidget);
        equal->setObjectName(QString::fromUtf8("equal"));
        equal->setGeometry(QRect(360, 240, 31, 31));
        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        one->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        two->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        three->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        four->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        five->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        six->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        seven->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        eight->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        nine->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        plus->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        minus->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        star->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        div->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        zero->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        equal->setText(QCoreApplication::translate("Calculator", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
