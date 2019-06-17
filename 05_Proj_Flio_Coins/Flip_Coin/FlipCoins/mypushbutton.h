#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QWidget>
#include <QPushButton>
#include <QString>
#include <QDebug>
#include <QPropertyAnimation>
#include <QMouseEvent>

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit MyPushButton(QWidget *parent = 0);
    MyPushButton(QString normal_button_image, QString pressed_button_image = "");

    void moveDown();
    void moveUp();
signals:

public slots:
private:
    QString normal_button_image;
    QString pressed_button_image;
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

};

#endif // MYPUSHBUTTON_H
