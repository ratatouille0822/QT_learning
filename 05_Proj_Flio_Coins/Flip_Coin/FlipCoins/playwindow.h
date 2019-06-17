#ifndef PLAYWINDOW_H
#define PLAYWINDOW_H

#include <QMainWindow>
#include <QPixmap>
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
#include "mycoin.h"
#include "dataconfig.h"
#include <QDebug>
#include <QTimer>
#include <QPropertyAnimation>
#include <QSound>

class PlayWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit PlayWindow(QWidget *parent = 0);
    PlayWindow(int level);
    MyPushButton * btn_back_to_chooselevel_window = nullptr;
    MyCoin* coins_array[4][4];
    int gameArray[4][4];

    int check_sum = 0;
    bool isWin = 0;

signals:
    void backToChooselevelWindow();

public slots:

private:
    int level_index;
protected:
    void paintEvent(QPaintEvent * event);

};

#endif // PLAYWINDOW_H
