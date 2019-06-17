#include "playwindow.h"

PlayWindow::PlayWindow(QWidget *parent) : QMainWindow(parent)
{

}

PlayWindow::PlayWindow(int level)
{
    // Settings of main scene
    // Settings of tool bar:
    this->level_index = level;
    this->setFixedSize(320, 588);
    this->setWindowTitle("翻金币");
    QMenuBar * menu_bar = this->menuBar();
    QMenu * start_menu = new QMenu("开始");
    QAction * quit_action = new QAction("退出");
    menu_bar->addMenu(start_menu);
    start_menu->addAction(quit_action);
    connect(quit_action, &QAction::triggered, [=](){

        this->close();
    });

    //Setting of Icon:
    this->setWindowIcon(QIcon(":/Images/Coin0001.png"));

    //Settings of btn_back_to_chooselevel_window:
    btn_back_to_chooselevel_window = new MyPushButton(":/Images/BackButton.png", ":/Images/BackButtonSelected.png");
    btn_back_to_chooselevel_window->setParent(this);
    btn_back_to_chooselevel_window->move(this->width() - btn_back_to_chooselevel_window->width() -20, this->height() - btn_back_to_chooselevel_window->height()-20);
    connect(btn_back_to_chooselevel_window, &QPushButton::clicked, this, [=](){

        this->hide();
        emit this->backToChooselevelWindow();
    });

    //Settings of Win/label:
    QPixmap pix;
    QLabel * win_label = new QLabel(this);

    pix.load(":/Images/LevelCompletedDialogBg.png");
    win_label->setPixmap(pix);
    win_label->setGeometry(0,0,pix.width(),pix.height());
    win_label->move((this->width()-pix.width()) * 0.5, -pix.height());

    //Coin flip sound:
    QSound * coin_flip_sound = new QSound(":/Images/ConFlipSound.wav", this);
    //Win Sound:
    QSound * win_sound = new QSound(":/Images/LevelWinSound.wav");

    for(int i = 0; i< 4; i++)
    {
        for(int j = 0; j< 4; j++)
        {
            qDebug()<<"Entered loop: construct board node:"<< i<<"_"<<j;
            QPixmap pix;
            pix.load(":/Images/BoardNode.png");
            QLabel *board_node_label = new QLabel;
            board_node_label->setParent(this);
            board_node_label->setFixedSize(pix.width(), pix.height());
            board_node_label->setPixmap(pix);
            board_node_label->move(57+i*50, 200+j*50);

            dataConfig data_config;

            for(int i = 0; i<4; i++)
            {
                for(int j = 0;j<4;j++)
                {
                    gameArray[i][j] = data_config.mData[level][i][j];
                }
            }


            QString coin_image_file_path;

            if(gameArray[i][j])
            {
                coin_image_file_path = ":/Images/Coin0001.png";
            }
            else
            {
                coin_image_file_path = ":/Images/Coin0008.png";
            }

            MyCoin * coins = new MyCoin(coin_image_file_path);

            coins_array[i][j] = coins;

            coins->setParent(this);
            coins->move(59 + i * 50, 204 + j * 50);
            coins->posX = i;
            coins->posY = j;
            coins->flag = gameArray[i][j];

            qDebug() << "[" <<coins->posX << ","<< coins->posY<<","<<coins->flag<<"]";


            connect(coins, QPushButton::clicked, [=](){

                if(!isWin)
                {
                    coins->flip();
                    //coins flip sound:
                    coin_flip_sound->play();
                    gameArray[i][j] = gameArray[i][j] == 0 ? 1:0;
                    QTimer::singleShot(200, [&](){
                        if(coins->posY - 1 >= 0)
                        {
                        coins_array[coins->posX][coins->posY - 1]->flip();
                        gameArray[coins->posX][coins->posY - 1] = gameArray[coins->posX][coins->posY - 1] == 1? 0:1;
                        }
                        if(coins->posY + 1 < 4)
                        {
                        coins_array[coins->posX][coins->posY + 1]->flip();
                        gameArray[coins->posX][coins->posY + 1] = gameArray[coins->posX][coins->posY + 1] == 1? 0:1;
                        }
                        if(coins->posX - 1 >= 0)
                        {
                        coins_array[coins->posX - 1][coins->posY]->flip();
                        gameArray[coins->posX - 1][coins->posY] = gameArray[coins->posX - 1][coins->posY] == 1? 0:1;
                        }
                        if(coins->posX + 1 < 4)
                        {
                        coins_array[coins->posX + 1][coins->posY ]->flip();
                        gameArray[coins->posX + 1][coins->posY] = gameArray[coins->posX + 1][coins->posY] == 1? 0:1;
                        }


                        check_sum = 0;
                        for(int i = 0;i<4; i++)
                        {
                            for(int j = 0; j<4; j++)
                            {
                                check_sum += gameArray[i][j];
                            }
                        }
                        isWin = check_sum == 16 ? 1:0;
                        if(isWin)
                        {
                            win_sound->play();
                            qDebug()<<"Won---------------------------------------------------------------------";
                            QPropertyAnimation * animation_level_complete_label = new QPropertyAnimation(win_label,"geometry");
                            animation_level_complete_label->setDuration(1000);
                            animation_level_complete_label->setStartValue(QRect(win_label->x(), win_label->y(), win_label->width(), win_label->height()));
                            animation_level_complete_label->setEndValue(QRect(win_label->x(), win_label->y() + 114, win_label->width(), win_label->height()));

                            animation_level_complete_label->setEasingCurve(QEasingCurve::OutBounce);
                            animation_level_complete_label->start();
                            for(int i = 0;i<4; i++)
                            {
                                for(int j = 0; j<4; j++)
                                {
                                    coins->isWin = true;
                                }
                            }
                        }
                    });
                }
            });
        }
    }
}

void PlayWindow::paintEvent(QPaintEvent * event)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/Images/OtherSceneBg.png");

    painter.drawPixmap(0, 0, this->width(), this->height(), pix);
}





























