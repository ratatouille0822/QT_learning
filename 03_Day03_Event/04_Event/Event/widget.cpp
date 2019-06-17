#include "widget.h"
#include "ui_widget.h"
#include "eventlabel.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    EventLabel* event_lable = new EventLabel(this);
    event_lable->setPixmap(QPixmap(":/icon/L.jpg"));



}

Widget::~Widget()
{
    delete ui;
}
