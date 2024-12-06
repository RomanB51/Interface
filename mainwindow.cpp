#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item = new QListWidgetItem(QIcon(":/Picture/open.png"), "Рома"); //правильное создание элементов листа
    ui->listWidget->addItem(item);
    QListWidgetItem *item2 = new QListWidgetItem(QIcon(":/Picture/Password.jpg"), "Вика");
    ui->listWidget->addItem(item2);
    QListWidgetItem *item3 = new QListWidgetItem(QIcon(":/Picture/save.jpg"), "Мама");
    ui->listWidget->addItem(item3);

    ui->listWidget->addItem("Рома"); //создание элемента листа, но без картинки - это так себе способ
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "Заголовок", ui->listWidget->currentItem()->text());//получение текста элемента списка
    ui->listWidget->currentItem()->setBackground(Qt::blue);//изменение цвета фона элемента текста
    ui->listWidget->currentItem()->setForeground(Qt::white);//изменение цвета текста элемента
}

