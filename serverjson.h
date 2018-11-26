#ifndef SERVERJSON_H
#define SERVERJSON_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QFile>

class serverjson: public QTcpServer
{
    Q_OBJECT
public:
    serverjson();
    ~serverjson();

    QTcpSocket* socket;
    QByteArray Data;

public slots:
    void startServer();
    void incomingConnection(qintptr socketDescriptor);
    void sockReady();
    void sockDisc();
};
#endif // SERVERJSON_H
