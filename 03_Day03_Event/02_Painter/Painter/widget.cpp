#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent* event)
{
    QPainter * painter = new QPainter(this);
    QPen * pen = new QPen;

    painter->drawLine(0, 0, 100, 100);

    pen->setColor(QColor(255, 255, 0));
    pen->setWidth(5);
    pen->setBrush(Qt::Dense7Pattern);

    painter->drawRect(QRect(100,100,100,100));





}
