#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QString>
#include <QMessageBox>
#include <QPixmap>
#include <QPainter>
#include <QPaintDevice>
#include <QIcon>
#include <QTimer>
#include <chooselevel.h>
#include <QSound>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
protected:
    void paintEvent(QPaintEvent* event);
public slots:

};

#endif // MAINWINDOW_H
