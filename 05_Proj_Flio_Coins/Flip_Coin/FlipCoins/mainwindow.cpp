#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mypushbutton.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Settings of Choose level widow:
    ChooseLevel * choose_level = new ChooseLevel(this);
    choose_level->hide();

    //Settings of Icon:
    this->setFixedSize(320, 588);
    QIcon  window_icon(QPixmap(":/Images/Coin0001.png"));
    this->setWindowIcon(window_icon);

    //Settings of Toolbar actions: File, Aboutk：
    connect(ui->actionExit, QAction::triggered, this, QWidget::close);
    connect(ui->actionAbout, QAction::triggered, [=](){
        QMessageBox::about(this, "About", "翻金币游戏\n真的不是很好玩奥");
    });

    //sound for Start button:
    QSound * start_button_sound = new QSound(":/Images/TapButtonSound.wav", this);

    //Settings of Start button:
    MyPushButton * start_button = new MyPushButton(":/Images/MenuSceneStartButton.png");
    start_button->setParent(this);
    start_button->move(0.5 * (this->width() - start_button->width()), 0.618 * this->height());
    connect(start_button, QPushButton::clicked, this,  [=](){
        start_button->moveDown();
        start_button->moveUp();
        QTimer::singleShot(200, [=](){
            this->hide();
            choose_level->setGeometry(this->geometry());
            choose_level->show();
        start_button_sound->play();
       } );
    });


    //Signal from Choose level window:
    connect(choose_level, ChooseLevel::switch_to_main_window,[=](){
        choose_level->hide();
        this->setGeometry(choose_level->geometry());
        this->show();

    });

    //setting start button Main Toolbar:
    connect(ui->actionStart, QAction::triggered, this, [=](){
        this->hide();
        choose_level->show();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent* event)
{
    qDebug()<< "MainWindow wants to draw";
    QPainter painter(this);
    painter.begin(this);

    QPixmap pix;

    pix.load(":/Images/OtherSceneBg.png");
    painter.drawPixmap(0, 0, this->width(), this->height(), pix);

    pix.load(":/Images/Title.png");
    pix = pix.scaled(pix.width() * 0.5, pix.height()* 0.5);
    painter.drawPixmap(10, 30, pix.width(), pix.height(), pix);

    painter.end();
}

