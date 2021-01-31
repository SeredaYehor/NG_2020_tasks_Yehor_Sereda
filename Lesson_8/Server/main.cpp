#include <QCoreApplication>
#include "server_class.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    server_class *servak = new server_class();

    int port = 8080;

    bool check = servak->listen(QHostAddress::Any, port);

    if(check){
        qDebug() << "Server started at: " << servak->serverAddress().toString();
    }
    else{
        qDebug() << "Server failed to start: " << servak->errorString();
    }
    return a.exec();
}
