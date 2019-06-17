#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->resize(320,240);
    this->move(500,500);
    QPushButton* button = new QPushButton("Close!", this);
    button->move(100,100);

    connect(button, &QPushButton::clicked, this, &Widget::close);

}

Widget::~Widget()
{

}
