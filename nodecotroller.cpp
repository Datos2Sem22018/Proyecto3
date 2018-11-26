#include "nodecotroller.h"
#include "ui_nodecotroller.h"
#include <iostream>

NodeCotroller::NodeCotroller(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NodeCotroller)
{
    ui->setupUi(this);
    //connect(ui->btn_FinishS, &QPushButton::clicked, this, NodeCotroller::closeServer);
}

NodeCotroller::~NodeCotroller()
{
    delete ui;
}

