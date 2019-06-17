#ifndef CHOOSELEVEL_H
#define CHOOSELEVEL_H

#include <QMainWindow>
#include <QPixmap>
#include <QDebug>
#include <QPaintEvent>
#include <QPainter>
#include <QPaintDevice>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QPushButton>
#include "mypushbutton.h"
#include <QLabel>
#include "playwindow.h"
#include <QSound>

class ChooseLevel : public QMainWindow
{
    Q_OBJECT
public:
    explicit ChooseLevel(QWidget *parent = 0);

signals:
    void switch_to_main_window();

public slots:
protected:
    void paintEvent(QPaintEvent* event);
private:
    PlayWindow * play_window = nullptr;
};

#endif // CHOOSELEVEL_H
