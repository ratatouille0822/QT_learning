#include "widget.h"
#include <QApplication>
#include <QDialog>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("Login");
    w.show();





    return a.exec();
}

