#include "widget.h"
#include "ui_widget.h"
#include <QTreeWidgetItem>
#include <QStringList>
#include <QIcon>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QStringList string_list;
    string_list<< "2"<<"Guan, Yu"<<"Male";

    QIcon icon;
    icon.addPixmap(QPixmap(":/icon_file/edit.png"), QIcon::Normal, QIcon::On);//节点打开状态
    icon.addPixmap(QPixmap(":/icon_file/file.png"), QIcon::Normal, QIcon::Off);//节点关闭状态


    QTreeWidgetItem* tree_widget_item = new QTreeWidgetItem(string_list);
    tree_widget_item->setIcon(0,icon);
    ui->treeWidget->addTopLevelItem(tree_widget_item);

    QStringList child_string_list;
    child_string_list << "No.2"<<"sword";
    QTreeWidgetItem* child_tree_widget = new QTreeWidgetItem(child_string_list);
    child_tree_widget->setIcon(1,QIcon("D:\03_LESSON\QT_Projs\01_Day01_introduction_to_QT\06_Tree_List\Tree\icon_filefolder_invoices.png"));
    tree_widget_item->addChild(child_tree_widget);


}

Widget::~Widget()
{
    delete ui;
}
