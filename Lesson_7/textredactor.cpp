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

    ui->Input->setAlignment(Qt::AlignJustify);
    connect(ui->b_load,&QPushButton::clicked,this,&textRedactor::load_file);
    connect(ui->b_save,&QPushButton::clicked,this,&textRedactor::save_file);
    connect(ui->b_underline,&QPushButton::clicked,this,&textRedactor::underline);
    connect(ui->b_justify,&QPushButton::clicked,this,&textRedactor::underline);
    connect(ui->red,&QSlider::valueChanged,this,&textRedactor::t_color);
    connect(ui->green,&QSlider::valueChanged,this,&textRedactor::t_color);
    connect(ui->blue,&QSlider::valueChanged,this,&textRedactor::t_color);
    connect(ui->b_italic,&QPushButton::clicked,this,&textRedactor::t_italic);
    connect(ui->b_bold,&QPushButton::clicked,this,&textRedactor::t_bold);
    connect(ui->b_center,&QPushButton::clicked,this,&textRedactor::alig);
    connect(ui->b_left,&QPushButton::clicked,this,&textRedactor::alig);
    connect(ui->b_right,&QPushButton::clicked,this,&textRedactor::alig);
    ui->red->setMaximum(255);
    ui->green->setMaximum(255);
    ui->blue->setMaximum(255);
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
        QTextStream from(&fileToLoad);
        ui->Input->setHtml(from.readAll());
        fileToLoad.close();
    }
    else
    {
        QMessageBox::warning(this,"Error!",fileToLoad.errorString());
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
        to << ui->Input->toHtml();
        fileToSave.close();
    }
    else
    {
        QMessageBox::warning(this,"Error!",fileToSave.errorString());
    }
}

void textRedactor::underline()
{
    if(!ui->Input->fontUnderline()) ui->Input->setFontUnderline(true);
    else ui->Input->setFontUnderline(false);
}

void textRedactor::t_italic()
{
    QFont font = ui->Input->currentFont();
    if(!font.italic())
    {
        font.setItalic(true);
        ui->b_italic->setFlat(true);
    }
    else
    {
        font.setItalic(false);
        ui->b_italic->setFlat(false);
    }
    ui->Input->setCurrentFont(font);
}

void textRedactor::t_bold()
{
    QFont font = ui->Input->font();
    if(!font.bold())
    {
        font.setBold(true);
        ui->b_bold->setFlat(true);
    }
    else
    {
        font.setBold(false);
        ui->b_bold->setFlat(false);
    }
    ui->Input->setCurrentFont(font);
}

void textRedactor::alig()
{
    QPushButton * button = (QPushButton*)sender();
    if(button->text()=="Center") ui->Input->setAlignment(Qt::AlignCenter);
    else if(button->text()=="Left") ui->Input->setAlignment(Qt::AlignLeft);
    else if(button->text()=="Right") ui->Input->setAlignment(Qt::AlignRight);
    else if(button->text()=="Justify")ui->Input->setAlignment(Qt::AlignJustify);

}

void textRedactor::t_color()
{
        ui->Input->setTextColor(QColor(ui->red->value(),ui->green->value(),ui->blue->value()));
}
