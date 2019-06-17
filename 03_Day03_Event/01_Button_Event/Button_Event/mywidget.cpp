#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent) : QLabel(parent)
{

}
void MyWidget::mouseMoveEvent(QMouseEvent *event)
{
    qDebug()<< "["<<event->x()<<","<<event->y()<<"]";
}
