#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include<QFileDialog>

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
    QString filter = "All File (*.*) ;; Text File (*.txt) ;; XML File (*.xml)";
    //фильтр который отображается выпадающим списком
    //справа внизу в окне "Окно выбора файлов". ;; так положено разделять фильтры
    QString filename = QFileDialog::getOpenFileName(this, "Окно выбора файлов", "С://", filter);
    //получить путь и имя файла который мы открыли. По умолчанию будет открываться диск С.

    QMessageBox::information(this, "Название файла", "Вы открыли файл:" + filename);
}

