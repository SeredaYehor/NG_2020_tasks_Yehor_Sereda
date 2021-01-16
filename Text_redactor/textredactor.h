#ifndef TEXTREDACTOR_H
#define TEXTREDACTOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class textRedactor; }
QT_END_NAMESPACE

class textRedactor : public QMainWindow
{
    Q_OBJECT

public:
    textRedactor(QWidget *parent = nullptr);
    ~textRedactor();

public slots:
    void load_file();
    void save_file();
    void Underline();
    void t_color();

private:
    Ui::textRedactor *ui;
};
#endif // TEXTREDACTOR_H
