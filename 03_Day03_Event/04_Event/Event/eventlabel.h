#ifndef EVENTLABEL_H
#define EVENTLABEL_H

#include <QWidget>
#include <QDebug>
#include <QMouseEvent>
#include <QLabel>

class EventLabel : public QLabel
{
    Q_OBJECT
public:
    explicit EventLabel(QWidget *parent = 0);

signals:

protected:
    virtual void mouseMoveEvent(QMouseEvent * event);
    virtual void mousePressEvent(QMouseEvent* event_press);

public slots:
};

#endif // EVENTLABEL_H
