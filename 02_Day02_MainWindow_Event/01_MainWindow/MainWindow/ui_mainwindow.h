/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionnew;
    QAction *actionopen;
    QAction *actionclose;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionAbout;
    QAction *actionAboutQT;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dock1;
    QListView *listView;
    QTreeView *treeView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(812, 547);
        actionnew = new QAction(MainWindow);
        actionnew->setObjectName(QStringLiteral("actionnew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionnew->setIcon(icon);
        actionopen = new QAction(MainWindow);
        actionopen->setObjectName(QStringLiteral("actionopen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/opened-folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionopen->setIcon(icon1);
        actionclose = new QAction(MainWindow);
        actionclose->setObjectName(QStringLiteral("actionclose"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/folder-invoices.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionclose->setIcon(icon2);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/myspace.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon3);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/document.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon4);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAboutQT = new QAction(MainWindow);
        actionAboutQT->setObjectName(QStringLiteral("actionAboutQT"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 571, 471));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 812, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable);
        dock1 = new QWidget();
        dock1->setObjectName(QStringLiteral("dock1"));
        listView = new QListView(dock1);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(-1, -1, 241, 201));
        listView->setSelectionRectVisible(true);
        treeView = new QTreeView(dock1);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(0, 200, 241, 251));
        dockWidget->setWidget(dock1);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(actionnew);
        menu->addAction(actionopen);
        menu->addAction(actionclose);
        menu_2->addAction(actionCopy);
        menu_2->addAction(actionPaste);
        menu_2->addAction(actionCut);
        menu_3->addAction(actionAbout);
        menu_3->addAction(actionAboutQT);
        mainToolBar->addAction(actionnew);
        mainToolBar->addAction(actionopen);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionclose);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionnew->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", Q_NULLPTR));
        actionnew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
        actionopen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        actionopen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
        actionclose->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        actionclose->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
        actionCopy->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266", Q_NULLPTR));
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", Q_NULLPTR));
        actionPaste->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264", Q_NULLPTR));
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", Q_NULLPTR));
        actionCut->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207", Q_NULLPTR));
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", Q_NULLPTR));
        actionAboutQT->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216QT", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
        dockWidget->setWindowTitle(QApplication::translate("MainWindow", "\345\261\236\346\200\247", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
