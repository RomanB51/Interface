/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_5;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QWidget *tab;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(608, 381);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/C:/Users/\320\220\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200/Pictures/Password.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName("action_2");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/C:/Users/\320\220\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200/Pictures/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_2->setIcon(icon1);
        action_5 = new QAction(MainWindow);
        action_5->setObjectName("action_5");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/C:/Users/\320\220\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200/Pictures/save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action_5->setIcon(icon2);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setIconSize(QSize(20, 20));
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Picture/Password.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon3, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QString::fromUtf8("\320\224\320\276\320\274\320\276\320\271"));

        verticalLayout->addWidget(tabWidget);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 608, 22));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\204\320\260\320\271\320\273", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        action_5->setText(QCoreApplication::translate("MainWindow", "\320\225\321\211\320\265 \320\276\320\264\320\270\320\275 \320\277\321\203\320\275\320\272\321\202", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setTabToolTip(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\201\321\202 \320\262\321\213\321\201\320\277\320\273\321\213\320\262\320\260\321\216\321\211\320\265\320\271 \320\277\320\276\320\264\321\201\320\272\320\260\320\267\320\272\320\270", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262\320\272\320\273\320\260\320\264\320\272\321\203", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
