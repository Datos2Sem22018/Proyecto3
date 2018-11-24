#include "nodecotroller.h"
#include <QApplication>
#include <thread>

int run(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NodeCotroller w;
    w.show();



    return a.exec();
}



int main(int argc, char *argv[])
{

    std::thread t1 (run, argc, argv);
    NodeCotroller::startServer();
    t1.join();

    //run(argc, argv);

    return 0;
}


