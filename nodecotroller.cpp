#include "nodecotroller.h"
#include "ui_nodecotroller.h"

#include "serversocket.h"

NodeCotroller::NodeCotroller(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NodeCotroller)
{
    ui->setupUi(this);
}

NodeCotroller::~NodeCotroller()
{
    delete ui;
}

ServerSocket tcp;
void * NodeCotroller::loop(void * m)
{
    pthread_detach(pthread_self());
    while(1)
    {
        srand(time(NULL));
        char ch = 'a' + rand() % 26;
        string s(1,ch);
        string str = tcp.getMessage();
        if( str != "" )
        {
            cout << "Message:" << str << endl;
            tcp.Send(" [client message: "+str+"] "+s);
            tcp.clean();
        }
        usleep(1000);
    }
}

void NodeCotroller::startServer(){

    std::cout<<"flag"<<std::endl;
    pthread_t msg;
    tcp.setup(8080);
    if( pthread_create(&msg, NULL, loop, (void *)0) == 0)
    {
        tcp.receive();

    }
}
