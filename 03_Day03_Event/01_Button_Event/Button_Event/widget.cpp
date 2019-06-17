#include "widget.h"
#include "ui_widget.h"
#include "mywidget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    MyWidget * my_widget =  new MyWidget(this);
    my_widget->setPixmap(QPixmap(":/Death_Note_L_ident.jpg"));
    my_widget->show();







}

Widget::~Widget()
{
    delete ui;
}
