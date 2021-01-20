#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);


    connect (ui->zero,&QPushButton::clicked, this,&Calculator::output);
    connect (ui->one,&QPushButton::clicked, this,&Calculator::output);
    connect (ui->two,&QPushButton::clicked, this,&Calculator::output);
    connect (ui->three,&QPushButton::clicked, this,&Calculator::output);
    connect (ui->four,&QPushButton::clicked, this,&Calculator::output);
    connect (ui->five,&QPushButton::clicked, this,&Calculator::output);
    connect (ui->six,&QPushButton::clicked, this,&Calculator::output);
    connect (ui->seven,&QPushButton::clicked, this,&Calculator::output);
    connect (ui->eight,&QPushButton::clicked, this,&Calculator::output);
    connect (ui->nine,&QPushButton::clicked, this,&Calculator::output);
    connect (ui->plus,&QPushButton::clicked, this,&Calculator::output);
    connect (ui->minus,&QPushButton::clicked, this,&Calculator::output);
    connect (ui->star,&QPushButton::clicked, this,&Calculator::output);
    connect (ui->div,&QPushButton::clicked, this,&Calculator::output);
    connect (ui->equal,&QPushButton::clicked, this,&Calculator::output);
}

    float number;
    int action;

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::output()
{
    QPushButton * button = (QPushButton*)sender();
    if(ui->lineEdit->text()=="0") ui->lineEdit->clear();
    if(button->text()=="+")
    {
        number = ui->lineEdit->text().toInt();
        action = 43;
        ui->lineEdit->clear();
    }
    else if(button->text()=="-")
    {
        number = ui->lineEdit->text().toInt();
        action = 45;
        ui->lineEdit->clear();
    }
    else if(button->text()=="*")
    {
        number = ui->lineEdit->text().toInt();
        action = 42;
        ui->lineEdit->clear();
    }
    else if(button->text()=="/")
    {
        number = ui->lineEdit->text().toInt();
        action = 47;
        ui->lineEdit->clear();
    }
    else if(button->text()=="=")
    {
        switch(action)
        {
            case 45: number -= ui->lineEdit->text().toInt(); break;
            case 43: number += ui->lineEdit->text().toInt(); break;
            case 42: number *= ui->lineEdit->text().toInt(); break;
            case 47: number /= ui->lineEdit->text().toInt(); break;
        }
        ui->lineEdit->setText(QString::number(number));
    }
    else ui->lineEdit->setText(ui->lineEdit->text() + button->text());
}

