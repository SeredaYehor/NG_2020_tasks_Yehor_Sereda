#include "textredactor.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    textRedactor w;
    w.show();
    return a.exec();
}
