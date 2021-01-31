#include "server_class.h"
#include "database.h"

server_class::server_class()
{

}

void server_class::readyRead()
{
    QTcpSocket *client = (QTcpSocket*)sender();
    QByteArray data = client->readAll();
    for(QTcpSocket *buffer : clients){
        buffer->write(data);
    }
}

void server_class::disconnected()
{
    QTcpSocket *client = (QTcpSocket*)sender();
    qDebug() << "Client" << client->peerAddress().toString() << "disconnected!";

    disconnect(client, &QTcpSocket::readyRead, this, &server_class::readyRead);
    disconnect(client, &QTcpSocket::disconnected, this, &server_class::disconnected);

    clients.remove(clients.indexOf(client));
}

void server_class::authorization()
{
   QTcpSocket *client = (QTcpSocket*)sender();
   QString login = QString::fromUtf8(client->readLine());   //QByteArrey
   QString pass = QString::fromUtf8(client->readLine());
   pass = password_decryption(pass);
   login.chop(1);
   login = data_decryption(login);
   if(!ex->add_User(login,pass)){
       if(ex->check_password(login, pass)!=0){
           client->abort();
       }
   }
   ex->close_connection();
   disconnect(client, &QTcpSocket::readyRead, this, &server_class::authorization);
}


void server_class::incomingConnection(qintptr handle)
{
    QTcpSocket *client =new QTcpSocket();
    client->setSocketDescriptor(handle);
    clients.append(client);
    qDebug() << "New connection from: " << client->peerAddress().toString();

    if(ex->open_connection()){
    connect(client, &QTcpSocket::readyRead, this, &server_class::authorization);
    }

   connect(client, &QTcpSocket::readyRead, this, &server_class::readyRead);
   connect(client, &QTcpSocket::disconnected, this, &server_class::disconnected);
}

QString server_class::password_decryption(QString data)
{
    for(int iter = 0; iter < data.length(); iter++){
        char sym = QString(data).at(iter).toLatin1();
        sym -= 4;
        data.replace(iter,1,sym);
    }
    return data;
}

QString server_class::data_decryption(QString data)
{
    for(int iter = 0; iter < data.length(); iter++){
        char sym = QString(data).at(iter).toLatin1();
        if(sym >= 'a' && sym <= 'z'){
            if(sym-8 > 'z'){
                sym += 18;
            }
            else{
                sym -= 8;
            }
        }
        else if(sym >= 'A' && sym <= 'Z'){
            if(sym-8 > 'Z'){
                sym += 18;
            }
            else{
                sym -= 8;
            }
        }
        data.replace(iter,1,sym);
    }
    return data;
}
