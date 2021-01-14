/********************************************************************************
** Form generated from reading UI file 'textredactor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTREDACTOR_H
#define UI_TEXTREDACTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextRedactor
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QLabel *label;
    QSpinBox *spinBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TextRedactor)
    {
        if (TextRedactor->objectName().isEmpty())
            TextRedactor->setObjectName(QString::fromUtf8("TextRedactor"));
        TextRedactor->resize(800, 600);
        centralwidget = new QWidget(TextRedactor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(310, 220, 104, 71));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 360, 47, 13));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(340, 320, 42, 22));
        TextRedactor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TextRedactor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        TextRedactor->setMenuBar(menubar);
        statusbar = new QStatusBar(TextRedactor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TextRedactor->setStatusBar(statusbar);

        retranslateUi(TextRedactor);

        QMetaObject::connectSlotsByName(TextRedactor);
    } // setupUi

    void retranslateUi(QMainWindow *TextRedactor)
    {
        TextRedactor->setWindowTitle(QCoreApplication::translate("TextRedactor", "TextRedactor", nullptr));
        label->setText(QCoreApplication::translate("TextRedactor", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextRedactor: public Ui_TextRedactor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTREDACTOR_H
