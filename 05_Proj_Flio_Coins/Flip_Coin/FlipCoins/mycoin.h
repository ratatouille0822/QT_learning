#ifndef MYCOIN_H
#define MYCOIN_H

#include <QWidget>
#include <QMainWindow>
#include <QAction>
#include <QString>
#include <QMessageBox>
#include <QPixmap>
#include <QPainter>
#include <QPaintDevice>
#include <QIcon>
#include <QTimer>
#include <QPushButton>
#include <QDebug>

class MyCoin : public QPushButton
{
    Q_OBJECT
public:
    explicit MyCoin(QWidget *parent = 0);
    MyCoin(QString coin_image_addr);

    void flip();

    QString coin_image_addr;
public:
    int posX;
    int posY;
    bool flag;

    QTimer * timer_gold_to_silver;
    QTimer * timer_silver_to_gold;

    int max = 8;
    int min = 1;

    bool is_coin_turning;
    bool isWin = false;

signals:

public slots:

protected:
    void mousePressEvent(QMouseEvent * event);
};

#endif // MYCOIN_H
