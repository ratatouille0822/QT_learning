#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
protected:
    void timerEvent(QTimerEvent * event);

private:
    Ui::Widget *ui;
    int timer_id1;
    int timer_id2;

};

#endif // WIDGET_H
