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
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTreeWidget *treeWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        treeWidget = new QTreeWidget(Widget);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon_file/folder-invoices.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/icon_file/opened-folder.png"), QSize(), QIcon::Normal, QIcon::On);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setIcon(0, icon);
        treeWidget->setHeaderItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem1->setIcon(0, icon);
        new QTreeWidgetItem(__qtreewidgetitem1);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(30, 40, 351, 192));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Test tree", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("Widget", "Gender", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("Widget", "Name", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("Widget", "ID", Q_NULLPTR));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(2, QApplication::translate("Widget", "Male", Q_NULLPTR));
        ___qtreewidgetitem1->setText(1, QApplication::translate("Widget", "Liu, Bei", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("Widget", "1", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("Widget", "123", Q_NULLPTR));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
