#ifndef TEXTREDACTOR_H
#define TEXTREDACTOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class TextRedactor; }
QT_END_NAMESPACE

class TextRedactor : public QMainWindow
{
    Q_OBJECT

public:
    TextRedactor(QWidget *parent = nullptr);
    ~TextRedactor();

private slots:
    void output();

private:
    Ui::TextRedactor *ui;
};
#endif // TEXTREDACTOR_H
