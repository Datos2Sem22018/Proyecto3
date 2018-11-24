#include "nodecotroller.h"
#include "ui_nodecotroller.h"

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
