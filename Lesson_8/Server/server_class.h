#ifndef SERVER_CLASS_H
#define SERVER_CLASS_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QDebug>
#include "database.h"


class server_class : public QTcpServer
{
    Q_OBJECT
public:
    server_class();

private slots:
    void readyRead();
    void disconnected();
    void authorization();

protected:
    void incomingConnection(qintptr handle);
    QString password_decryption(QString data);
    QString data_decryption(QString data);

private:
    QVector<QTcpSocket*> clients;
    Database *ex = new Database("Servak","test.sqlite");
};

#endif // SERVER_CLASS_H
