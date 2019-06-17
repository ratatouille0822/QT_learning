/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(800, 600);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 90, 70));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 110, 90, 70));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 210, 90, 70));
        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 310, 90, 70));
        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(130, 310, 90, 70));
        pushButton_6 = new QPushButton(Widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(130, 110, 90, 70));
        pushButton_7 = new QPushButton(Widget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(130, 20, 90, 70));
        pushButton_8 = new QPushButton(Widget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(130, 210, 90, 70));
        pushButton_9 = new QPushButton(Widget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(240, 310, 90, 70));
        pushButton_10 = new QPushButton(Widget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(240, 110, 90, 70));
        pushButton_11 = new QPushButton(Widget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(240, 20, 90, 70));
        pushButton_12 = new QPushButton(Widget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(240, 210, 90, 70));
        pushButton_13 = new QPushButton(Widget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(350, 310, 90, 70));
        pushButton_14 = new QPushButton(Widget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(350, 110, 90, 70));
        pushButton_15 = new QPushButton(Widget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(350, 210, 90, 70));
        pushButton_16 = new QPushButton(Widget);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(350, 20, 90, 70));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "About", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "AboutQT", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Widget", "Frage", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
