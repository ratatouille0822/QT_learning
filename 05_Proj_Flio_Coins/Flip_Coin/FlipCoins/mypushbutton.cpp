#include "mypushbutton.h"

MyPushButton::MyPushButton(QWidget *parent) : QPushButton(parent)
{

}
MyPushButton::MyPushButton(QString normal_button_image, QString pressed_button_image)
{
    this->normal_button_image = normal_button_image;
    this->pressed_button_image = pressed_button_image;

    QPixmap button_pix_map;
    bool ret = button_pix_map.load(this->normal_button_image);
    if(!ret)
    {
        qDebug()<< "Failed open button image";
        return ;
    }

    this->setFixedSize(button_pix_map.width(), button_pix_map.height());
    this->setStyleSheet("QPushButton{border:0px;}");
    this->setIcon(button_pix_map);
    this->setIconSize(QSize(button_pix_map.width(), button_pix_map.height()));
}

void MyPushButton::moveDown()
{
    QPropertyAnimation *animation = new QPropertyAnimation(this, "geometry");
    animation->setDuration(200);
    animation->setStartValue(QRect(this->x(), this->y(), this->width(), this->height()));
    animation->setEndValue(QRect(this->x(), this->y() + 20, this->width(), this->height()));
    animation->setEasingCurve(QEasingCurve::InOutElastic);

    animation->start();

}

void MyPushButton::moveUp()
{
    QPropertyAnimation *animation = new QPropertyAnimation(this, "geometry");
    animation->setDuration(200);
    animation->setStartValue(QRect(this->x(), this->y() + 20, this->width(), this->height()));
    animation->setEndValue(QRect(this->x(), this->y() , this->width(), this->height()));
    animation->setEasingCurve(QEasingCurve::OutElastic);

    animation->start();

}

void MyPushButton::mousePressEvent(QMouseEvent *event)
{
    if(pressed_button_image != "")
    {
        QPixmap pix;
        bool ret = pix.load(pressed_button_image);
        if(!ret)
        {
            qDebug()<<"Failed open from MyPushButton::mousePressEvent(QMouseEvent * event)";
            return;
        }
        this->setFixedSize(pix.width(), pix.height());
        this->setStyleSheet("QPushButton{border:0px;}");
        this->setIcon(pix);
        this->setIconSize(QSize(pix.width(), pix.height()));
    }

    return QPushButton::mousePressEvent(event);

}

void MyPushButton::mouseReleaseEvent(QMouseEvent *event)
{
    if(normal_button_image != "")
    {
        QPixmap pix;
        bool ret = pix.load(normal_button_image);
        if(!ret)
        {
            qDebug()<<"Failed open from MyPushButton::mouseReleaseEvent(QMouseEvent * event)";
            return;
        }
        this->setFixedSize(pix.width(), pix.height());
        this->setStyleSheet("QPushButton{border:0px;}");
        this->setIcon(pix);
        this->setIconSize(QSize(pix.width(), pix.height()));
    }

    return QPushButton::mouseReleaseEvent(event);

}

//void MyPushButton::mouseMoveEvent(QMouseEvent *event)
//{
//    if(normal_button_image != "")
//    {
//        QPixmap pix;
//        bool ret = pix.load(normal_button_image);
//        if(!ret)
//        {
//            qDebug()<<"Failed open from MyPushButton::mouseReleaseEvent(QMouseEvent * event)";
//            return;
//        }
//        this->setFixedSize(pix.width(), pix.height());
//        this->setStyleSheet("QPushButton{border:0px;}");
//        this->setIcon(pix);
//        this->setIconSize(QSize(pix.width(), pix.height()));
//    }

//    return QPushButton::mouseReleaseEvent(event);

//}






































