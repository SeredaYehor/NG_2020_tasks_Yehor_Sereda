#include "textredactor.h"
#include "ui_textredactor.h"

#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QFileDialog>

textRedactor::textRedactor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::textRedactor)
{
    ui->setupUi(this);

    connect(ui->b_load,&QPushButton::clicked,this,&textRedactor::load_file);
    connect(ui->b_save,&QPushButton::clicked,this,&textRedactor::save_file);
    connect(ui->b_underline,&QPushButton::clicked,this,&textRedactor::Underline);
    connect(ui->horizontalSlider,&QSlider::valueChanged,this,&textRedactor::t_color);
    ui->horizontalSlider->setMaximum(6);
}

textRedactor::~textRedactor()
{
    delete ui;
}

void textRedactor::load_file()
{
    QString path = QFileDialog::getOpenFileName(this,"Save file","/Text_redactor/text_file","Text files (*.txt)");
    if(path.isEmpty())return;
    QFile fileToLoad(path);

    if(fileToLoad.open(QIODevice::ReadOnly))
    {
        QTextStream to(&fileToLoad);
        //ui->textEdit->setHtml(from.readAll());    //error
        fileToLoad.close();
    }
    else
    {
        QMessageBox::warning(this,"Oh shit, it's gonna boom!",fileToLoad.errorString());
    }
}

void textRedactor::save_file()
{
    QString path = QFileDialog::getSaveFileName(this,"Save file","/Text_redactor/file_qt","Text files (*.txt)");
    if(path.isEmpty())return;
    QFile fileToSave(path);

    if(fileToSave.open(QIODevice::WriteOnly))
    {
        QTextStream to(&fileToSave);
        to << ui->textEdit->toHtml();
        fileToSave.close();
    }
    else
    {
        QMessageBox::warning(this,"Oh shit, it's gonna boom!",fileToSave.errorString());
    }
}

void textRedactor::Underline()
{
    ui->textEdit->setFontUnderline(true);   //bad working funct
}

void textRedactor::t_color()
{

        switch(ui->horizontalSlider->value())                               //non invisible colors)))
        {
            case 0 : ui->textEdit->setTextColor(Qt::black); break;
            case 1 : ui->textEdit->setTextColor(Qt::green); break;
            case 2 : ui->textEdit->setTextColor(Qt::blue); break;
            case 3 : ui->textEdit->setTextColor(Qt::red); break;
            case 4 : ui->textEdit->setTextColor(Qt::yellow); break;
            case 5 : ui->textEdit->setTextColor(Qt::magenta); break;
            case 6 : ui->textEdit->setTextColor(Qt::gray); break;
        }
}
