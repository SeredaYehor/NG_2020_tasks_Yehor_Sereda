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

    ui->result->setReadOnly(true);

    connect(ui->pushButton,&QPushButton::clicked, this, &MainWindow::result);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::result()
{
    float val_1 = ui->input_1->text().toFloat();
    float val_2 = ui->input_2->text().toFloat();
    ui->result->setText(QString::number(val_1+val_2));
}

