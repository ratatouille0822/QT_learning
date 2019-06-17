#include "chooselevel.h"

ChooseLevel::ChooseLevel(QWidget *parent) : QMainWindow(parent)
{
    //Settings of window:
    this->setFixedSize(320, 588);
    this->setWindowTitle("选择关卡");
    QMenuBar * menu_bar = this->menuBar() ;
    this->setMenuBar(menu_bar);
    QMenu * start_menu = menu_bar->addMenu("开始");
    QAction* exit_action = start_menu->addAction("退出");

    connect(exit_action,&QAction::triggered,this, [=](){
        this->close();
    });

    //Sound for back button:

    QSound * zurueck_Taster_sound = new QSound(":/Images/BackButtonSound.wav", this);
    //Einstellungen des Zuruecktaster:

    MyPushButton * zurueck_Taster = new MyPushButton(":/Images/BackButton.png", ":/Images/BackButtonSelected.png");
    zurueck_Taster->setParent(this);
    zurueck_Taster->move(this->width()-zurueck_Taster->width()-20, this->height()-zurueck_Taster->height()-20);

    //Nach Hauptmask gehen:
    connect(zurueck_Taster, QPushButton::clicked, [=](){
       this->hide() ;
       zurueck_Taster_sound->play();
       emit this->switch_to_main_window();
    });

    //Make level buttons:
    for(int i = 0; i < 20; i++)
    {
        //20 Buttons for 20 levels:
        QSound * level_button_sound = new QSound(":/Images/TapButtonSound.wav");
        MyPushButton * level_button = new MyPushButton(this);
        QPixmap pix;
        pix.load(":/Images/LevelIcon.png");
        level_button->setIcon(pix);
        level_button->setIconSize(QSize(pix.width(), pix.height()));
        level_button->setFixedSize(pix.width(), pix.height());
        level_button->setStyleSheet("QPushButton{border:0px;}");
        level_button->move(25 + (i%4)*70, 130 + (i/4) * 70);

        connect(level_button, QPushButton::clicked, this, [=](){
            //level_button->moveDown();
            //level_button->moveUp();
            //qDebug()<<"Button-->"<<i<<"<-";

            // Make level Scenes:

            level_button_sound->play();
            if(play_window == nullptr)
            {
                qDebug()<<" Play Window is to construct";
                this->hide();
                this->play_window = new PlayWindow(i + 1);
                this->play_window->setGeometry(this->geometry());
                this->play_window->show();

                //Signal from Play Window:
                connect(play_window, &PlayWindow::backToChooselevelWindow, this, [=](){
                qDebug()<<"Signal from play_window received";
                this->show();
                this->setGeometry(this->play_window->geometry());
                zurueck_Taster_sound->play();
                delete play_window;
                play_window = nullptr;
            });

            }
            else
            {
                qDebug()<<"Here is else!!!";
                play_window->show();
                qDebug()<<"--------------";
            }

        });

        //20 Laables for 20 buttons
        QLabel * level_button_label = new QLabel(QString().number(i+1));
        level_button_label->setParent(this);
        level_button_label->move(25 + (i%4)*70, 130 + (i/4) * 70);
        level_button_label->setFixedSize(pix.width(), pix.height());
        level_button_label->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        level_button_label->setAttribute(Qt::WA_TransparentForMouseEvents);
    }

}

void ChooseLevel::paintEvent(QPaintEvent* event)
{
    QPainter painter(this);// = new QPainter(this);
    painter.begin(this);
    QPixmap pix;
    pix.load(":/Images/OtherSceneBg.png");
    painter.drawPixmap(0, 0, this->width(), this->height(), pix);

    pix.load(":/Images/Title.png");
    painter.drawPixmap((this->width() - pix.width()) * 0.5, 30, pix.width(), pix.height(), pix);
    painter.end();
}
