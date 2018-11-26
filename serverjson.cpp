#include "serverjson.h"
#include <iostream>
using namespace std;
serverjson::serverjson(){}
serverjson::~serverjson(){}

void serverjson::startServer()
{
    if (this->listen(QHostAddress::Any,8080))
    {
        qDebug()<<"Listening";
    }
    else
    {
        qDebug()<<"Not listening";
    }
}

void serverjson::incomingConnection(qintptr socketDescriptor)
{
    socket = new QTcpSocket(this);
    socket->setSocketDescriptor(socketDescriptor);

        connect(socket,SIGNAL(readyRead()),this,SLOT(sockReady()));
        connect(socket,SIGNAL(disconnected()),this,SLOT(sockDisc()));

    qDebug()<<socketDescriptor<<" Client connected";
    //"key":"value" or value
    //{"type":"connect", "status":"yes"}
    socket->write("{\"type\":\"connect\",\"status\":\"yes\"}");
    qDebug()<<"Send client connect status - YES";
}

void serverjson::sockReady()
{

}

void serverjson::sockDisc()
{
    qDebug()<<"Disconnect";
    socket->deleteLater();
}
