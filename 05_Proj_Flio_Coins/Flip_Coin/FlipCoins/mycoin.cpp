#include "mycoin.h"

MyCoin::MyCoin(QWidget *parent) : QPushButton(parent)
{

}

MyCoin::MyCoin(QString coin_image_addr)
{
    QPixmap pix;
    pix.load(coin_image_addr);

    this->setFixedSize(pix.width(), pix.height());
    this->setIcon(pix);
    this->setIconSize(QSize(pix.width(), pix.height()));
    this->setStyleSheet("QPushButton{border:0px;}");
    //this->setAttribute(Qt::AlignHCenter | Qt::AlignVCenter);
    timer_gold_to_silver = new QTimer(this);
    timer_silver_to_gold = new QTimer(this);

    connect(timer_gold_to_silver, QTimer::timeout, [=](){
        QPixmap coin_images;
        QString coin_image_path = QString(":/Images/Coin000%1").arg(min++);
        if(this->min > this->max)
        {
            this->min = 1;
            this->is_coin_turning = 0;
            timer_gold_to_silver->stop();
        }
        bool ret = coin_images.load(coin_image_path);
        if(!ret)
        {
            qDebug()<<"Failed open coin image!";
        }
        this->setFixedSize(coin_images.width(), coin_images.height());
        this->setIcon(coin_images);
        this->setIconSize(QSize(coin_images.width(), coin_images.height()));
        this->setStyleSheet("QPushButton{border:0px;}");


    });
    connect(timer_silver_to_gold, QTimer::timeout, [=](){

        QPixmap coin_images;
        QString coin_image_path = QString(":/Images/Coin000%1").arg(max--);
        qDebug()<<"------------------"<<this->min;
        if(this->max < this->min)
        {
            this->max = 8;
            this->is_coin_turning = 0;
            timer_silver_to_gold->stop();
        }
        bool ret = coin_images.load(coin_image_path);
        if(!ret)
        {
            qDebug()<<"Failed open coin image!----1---"<<this->max<<"--->"<<this->min;
        }
        this->setFixedSize(coin_images.width(), coin_images.height());
        this->setIcon(coin_images);
        this->setIconSize(QSize(coin_images.width(), coin_images.height()));
        this->setStyleSheet("QPushButton{border:0px;}");


    });
}

void MyCoin::flip()
{
    if(this->flag == 1)
    {
        timer_gold_to_silver->start(30);
        this->is_coin_turning = 1;
        this->flag =0;
    }
    else if(this->flag == 0)
    {
        timer_silver_to_gold->start(30);
        this->is_coin_turning = 1;
        this->flag = 1;
    }

}


void MyCoin::mousePressEvent(QMouseEvent * event)
{
    if(!this->is_coin_turning | isWin == 1)
        return QPushButton::mousePressEvent(event);

}


















