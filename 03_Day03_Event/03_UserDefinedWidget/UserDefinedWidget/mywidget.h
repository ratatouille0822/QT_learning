#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QSlider>
#include <QLCDNumber>
#include <QHBoxLayout>
#include <QSpinBox>


class MyWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget(QWidget *parent = 0);

signals:

public slots:

private:
    QSlider * q_slider;
    QLCDNumber* q_lcd_number;
    QSpinBox* q_spin_box;
};

#endif // MYWIDGET_H
