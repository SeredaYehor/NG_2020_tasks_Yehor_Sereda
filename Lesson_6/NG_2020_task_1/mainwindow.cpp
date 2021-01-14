#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFont>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QFont font = ui->pushButton->font();
    font.setPointSize(20);
    ui->pushButton->setFont(font);

    ui->lineEdit_3->setReadOnly(true);

    connect(ui->pushButton,&QPushButton::clicked, this, &MainWindow::result);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::result()
{
    int val_1 = ui->lineEdit->text().toInt();
    int val_2 = ui->lineEdit_2->text().toInt();
    ui->lineEdit_3->setText(QString::number(val_1+val_2));
}

