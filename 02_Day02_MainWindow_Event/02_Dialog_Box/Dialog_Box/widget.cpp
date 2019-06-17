#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QMessageBox::about(this, "关于", "关于");
}

void Widget::on_pushButton_2_clicked()
{
   QMessageBox::aboutQt(this);
}

void Widget::on_pushButton_3_clicked()
{
    QMessageBox::question(this,"Frage?","Sprechen Sie Deutsch?", QMessageBox::Yes|QMessageBox::No,QMessageBox::No);
}
