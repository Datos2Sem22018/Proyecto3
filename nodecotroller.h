#ifndef NODECOTROLLER_H
#define NODECOTROLLER_H

#include <QMainWindow>

namespace Ui {
class NodeCotroller;
}

class NodeCotroller : public QMainWindow
{
    Q_OBJECT

public:
    explicit NodeCotroller(QWidget *parent = nullptr);
    ~NodeCotroller();

private:
    Ui::NodeCotroller *ui;
};

#endif // NODECOTROLLER_H
