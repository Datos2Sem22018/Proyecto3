#include "nodecotroller.h"
#include <QApplication>
#include <thread>
#include "serverjson.h"

int run(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NodeCotroller w;
    w.show();
    return a.exec();
}

int main(int argc, char *argv[])
{
    serverjson Server;
    Server.startServer();

    run(argc, argv);
    QString qstr;
    std::string str = qstr.toStdString();
    std::string hola;
    hola = str;
    return 0;
}


