#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QMenu>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QLabel* label = new QLabel("标签1", ui->statusBar);
    QMenu* tools = new QMenu("工具", ui->menuBar);
    ui->menuBar->addMenu(tools);


}

MainWindow::~MainWindow()
{
    delete ui;
}
