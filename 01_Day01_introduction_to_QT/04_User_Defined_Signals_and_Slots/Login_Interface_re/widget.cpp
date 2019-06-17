#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    login_button = new QPushButton("login",this);
    user_name_input = new QLineEdit("user name", this);
    password_input = new QLineEdit("password", this);

    user_name_input->resize(150, 20);
    password_input->resize(150, 20);

    user_name_input->move(50, 50);
    password_input->move(50, 150);

    login_button->move(50, 250);

    qDebug()<<user_name_input->text();
    qDebug()<<password_input->text();


    connect(login_button, &QPushButton::clicked, [=](){
        this->user_name = this->user_name_input->text();
        this->password = this->password_input->text();
        qDebug()<< user_name;
        qDebug()<< password;
        if(user_name == QString("123") && password == QString("123"))
        {
            QMessageBox::information(this, "Login","Login Succeed", QMessageBox::Cancel|QMessageBox::Ok,QMessageBox::Ok);
        }
        else
        {
            QMessageBox::about(this, "Login", "Login Failed");
        }
    });
}

Widget::~Widget()
{

}
