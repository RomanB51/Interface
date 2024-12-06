#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*ui->comboBox->addItem(QIcon(":/Picture/open.png"), "Рома"); //создаем подпункты выпадающего меню с именем и иконками
    ui->comboBox->addItem(QIcon(":/Picture/Password.jpg"), "Вика");
    ui->comboBox->addItem(QIcon(":/Picture/save.jpg"), "Мама");*/

    for(int i = 0; i < 10; i++)
        ui->comboBox->addItem(QIcon(":/Picture/save.jpg"), QString::number(i) + "Рома");//QString::number(i) преобразует в строку
    ui->comboBox->insertItem(3,"new_text"); //заменяем 3 пункт comboBox на новый текст и без картинки
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "Тренировка3", QString::number(ui->comboBox->currentIndex()));//выводит индекс выбранной строки
    QMessageBox::information(this, "Тренировка", ui->comboBox->currentText()); //Получение имени строки на которую мы кликнули
}

