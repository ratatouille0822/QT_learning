#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QMouseEvent>
#include <QDebug>
#include <QLabel>

class MyWidget : public QLabel
{
    Q_OBJECT
public:
    explicit MyWidget(QWidget *parent = 0);

protected:
    void mouseMoveEvent(QMouseEvent * event);

signals:

public slots:
};

#endif // MYWIDGET_H
