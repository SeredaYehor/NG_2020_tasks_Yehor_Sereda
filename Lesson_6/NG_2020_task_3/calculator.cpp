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
    char action;

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::output()
{
    QPushButton * button = (QPushButton*)sender();
    if(ui->Res_bar->text()=="0") ui->Res_bar->clear();
    if(button->text()=="+")
    {
        number = ui->Res_bar->text().toInt();
        action = '+';
        ui->Res_bar->clear();
    }
    else if(button->text()=="-")
    {
        number = ui->Res_bar->text().toInt();
        action = '-';
        ui->Res_bar->clear();
    }
    else if(button->text()=="*")
    {
        number = ui->Res_bar->text().toInt();
        action = '*';
        ui->Res_bar->clear();
    }
    else if(button->text()=="/")
    {
        number = ui->Res_bar->text().toInt();
        action = '/';
        ui->Res_bar->clear();
    }
    else if(button->text()=="=")
    {
        switch(action)
        {
            case '-': number -= ui->Res_bar->text().toInt(); break;
            case '+': number += ui->Res_bar->text().toInt(); break;
            case '*': number *= ui->Res_bar->text().toInt(); break;
            case '/': number /= ui->Res_bar->text().toInt(); break;
        }
        ui->Res_bar->setText(QString::number(number));
    }
    else ui->Res_bar->setText(ui->Res_bar->text() + button->text());
}

