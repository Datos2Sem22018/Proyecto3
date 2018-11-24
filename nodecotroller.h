#ifndef NODECOTROLLER_H
#define NODECOTROLLER_H

#include <QMainWindow>
#include "video.h"
#include "linkedlist.h"

namespace Ui {
class NodeCotroller;
}

class NodeCotroller : public QMainWindow
{
    Q_OBJECT

public:
    explicit NodeCotroller(QWidget *parent = nullptr);
    ~NodeCotroller();
    static int startNodeController(int argc, char** argv);
    static void startServer();
    static void closeServer();
    static void * loop(void * m);


private:
    Ui::NodeCotroller *ui;
};

#endif // NODECOTROLLER_H
