#include "textredactor.h"
#include "ui_textredactor.h"

#include<string>

TextRedactor::TextRedactor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TextRedactor)
{
    ui->setupUi(this);

    ui->Num_of_words->setReadOnly(true);

    connect (ui->Input_text, &QTextEdit::textChanged, this, &TextRedactor::output);
}

TextRedactor::~TextRedactor()
{
    delete ui;
}

void TextRedactor::output()
{
    QString input =  ui->Input_text->toPlainText();
    int iter = 0;
    ui->Num_of_words->setValue(0);
    if(input[0].isLetter()) ui->Num_of_words->setValue(1);
    while(iter < input.length()-1)
    {
        if(!input[iter].isLetter()&&input[iter+1].isLetter())
        {
            ui->Num_of_words->setValue(ui->Num_of_words->value()+1);
        }
        iter++;
    }
}

