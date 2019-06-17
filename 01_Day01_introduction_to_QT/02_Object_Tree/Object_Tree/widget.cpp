#include "widget.h"
#include "mypushbutton.h"


Widget::Widget(QWidget* parent): QWidget(parent)
{
    MyPushButton * button = new MyPushButton;
    button->setText("Test_Button");
    button->setParent(this);

}

Widget::~Widget()
{
}
