#include "textredactor.h"
#include "ui_textredactor.h"

#include<string>

TextRedactor::TextRedactor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TextRedactor)
{
    ui->setupUi(this);

    ui->spinBox->setReadOnly(true);

    connect (ui->textEdit, &QTextEdit::textChanged, this, &TextRedactor::output);
}

TextRedactor::~TextRedactor()
{
    delete ui;
}

void TextRedactor::output()
{
    QString input =  ui->textEdit->toPlainText();
    int i = 0,b = 0;
    ui->spinBox->setValue(0);
    if(input[0].isLetter()) b = 1;
    while(i < input.length()-1)
    {
        if(!input[i].isLetter()&&input[i+1].isLetter())
        {
            b+=1;
        }
        ui->spinBox->setValue(b);
        i++;
    }
}

