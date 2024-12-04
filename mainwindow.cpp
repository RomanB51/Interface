#include "mainwindow.h"
#include "./ui_mainwindow.h"


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

void MainWindow::on_pushButton_clicked()
{
    new_window = new DialogV2(this); //аргумент this обозначает, что MainWindow является родительским объектом для new_window
    new_window->show();             //и при закрытии MainWindow new_window тоже закроется, в противном случае new_window так
                                        //и останется открытым
}

