#include "eventlabel.h"

EventLabel::EventLabel(QWidget *parent) : QLabel(parent)
{

}

void EventLabel::mouseMoveEvent(QMouseEvent* event)
{

    qDebug()<<QString("[%1, %2]").arg(QString::number(event->x())).arg(QString::number(event->y()));

}

void EventLabel::mousePressEvent(QMouseEvent* event_press)
{
    if(Qt::LeftButton == event_press->button())
    {
        qDebug()<< "Left Button Pressed";
    }
    else if(Qt::RightButton == event_press->button())
    {
        qDebug()<< "Right Button Pressed";
    }

}
