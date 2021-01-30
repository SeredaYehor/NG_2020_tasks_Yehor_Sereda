#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFont>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QFont font = ui->b_result->font();
    font.setPointSize(20);
    ui->b_result->setFont(font);

    ui->result->setReadOnly(true);

    connect(ui->b_result,&QPushButton::clicked, this, &MainWindow::result);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::result()
{
    ui->result->setText(QString::number(ui->input_1->text().toFloat()+ui->input_2->text().toFloat()));
}

