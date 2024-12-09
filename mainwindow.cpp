#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "form.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

//На вклажки ты можешь добавлять различные виджеты, кнопки, текстовые поля и.т.д


void MainWindow::on_tabWidget_tabCloseRequested(int index)//функция закрытия вкладок. Функцию закрыия вкладок нужно добавлять
//в дизайнере отдельно в пункте tabsClosable. Movable дает возможность перетаскивать вкладки влево-вправо, как в браузере.
{
    ui->tabWidget->removeTab(index);
}


void MainWindow::on_pushButton_clicked()
{
    //ui->tabWidget->addTab(new QWidget(), "newTab");// фиксированное имя вкладки newTab
    //ui->tabWidget->addTab(new QWidget(), QString("Tab %0").arg(ui->tabWidget->count() + 1)); //имя вкладки будет Tab + номер вкладки
    ui->tabWidget->addTab(new Form(), QString("Tab %0").arg(ui->tabWidget->count() + 1));// создает новую вкладку с формами
    //по умолчанию, смотри form.ui

    ui->tabWidget->setCurrentIndex(ui->tabWidget->count() - 1); //автоматическое переключение на созданную вкладку
}
