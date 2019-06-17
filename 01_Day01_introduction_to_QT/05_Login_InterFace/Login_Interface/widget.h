#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
#include <QPushButton>
#include <QLineEdit>
#include <QDebug>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    QString user_name;
    QString pass_word;

    QPushButton* login_button;

    QLineEdit* user_name_input;
    QLineEdit* pass_word_input;

private slots:
    void on_pushButton_clicked();

    void on_passWord_editingFinished();

    void on_userName_editingFinished();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
