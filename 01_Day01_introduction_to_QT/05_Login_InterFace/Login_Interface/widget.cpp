#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    login_button = new QPushButton("Login", this);
    user_name_input = new QLineEdit("user name", this);
    pass_word_input = new QLineEdit("password", this);
    user_name_input->resize(100,50);
    pass_word_input->resize(100,50);
    user_name_input->move(50, 50);
    pass_word_input->move(50,150);
    login_button->move(50, 250);

    qDebug()<< user_name_input->text();
    qDebug()<< pass_word_input->text();





}

Widget::~Widget()
{
    delete ui;
}
