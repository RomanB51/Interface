#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include<QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   /* QDir dir("D:/C++/QT creator/My_projectV1/Interface"); //создаем объект
    if(dir.exists())                                //осуществляем проверку есть на компе путь приведенный выше
        QMessageBox::information(this, "title", "Directory");
    else
        QMessageBox::information(this, "title", "Not directory");*/



    /*QDir dir;
    foreach (QFileInfo var, dir.drives()) {            //в выпадающем списке comboBox появляются все диски компа
        ui->comboBox->addItem(var.absoluteFilePath());

    }*/



    /*QDir dir("D:/C++/QT creator/My_projectV1/Interface"); //вывод списка файлов и папок внутри папки Interface внутрь list
    foreach (QFileInfo var, dir.entryInfoList())
        ui->listWidget->addItem(var.absoluteFilePath());*/



    QDir dir("D:/C++/QT creator/My_projectV1/Interface"); //вывод списка файлов и папок внутри папки Interface внутрь list
    foreach (QFileInfo var, dir.entryInfoList())
        if(var.isDir())                                   //вывод только директорий
            ui->listWidget->addItem("Dir:" + var.absoluteFilePath());
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_clicked()
{
    QDir dir_3("D:/C++/QT creator/YY");
    if(dir_3.exists())                                          //существует ли папка
        QMessageBox::information(this, "Title", "Существует");  //если существует, то выведи сообщение, что все ок
    else
        dir_3.mkdir("D:/C++/QT creator/YY");                    //иначе создай папку
}

