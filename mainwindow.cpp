#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->checkBox->setChecked(true); //устанавливает галку по умолчанию в checkBox
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked())//вывод сообщений при нажатии на кнопку, которая проверяет стоит галка или нет
        QMessageBox::information(this, "Заголовок", "Галочка стоит");
    else
        QMessageBox::information(this, "Заголовок", "Галочка не стоит");
}


void MainWindow::on_checkBox_stateChanged(int arg1) //вывод сообщений при нажатии на галочку
{
    if(arg1)
        QMessageBox::information(this, "Заголовок", "Галочка стоит");
    else
        QMessageBox::information(this, "Заголовок", "Галочка не стоит");
}

