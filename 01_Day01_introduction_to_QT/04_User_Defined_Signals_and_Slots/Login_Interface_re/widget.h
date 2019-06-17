#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QDebug>
#include <QString>
#include <QDialog>
#include <QMessageBox>
#include <QLabel>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

    QPushButton* login_button;
    QLineEdit* user_name_input;
    QLineEdit* password_input;
    QDialog* dialog_box;
    QLabel* lable_dialog_box;

    QString user_name;
    QString password;

};

#endif // WIDGET_H
