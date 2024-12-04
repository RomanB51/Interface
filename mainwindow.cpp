#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include<QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
            ui->progressBar, SLOT(SetValue(int)));  //перемещает слайдер, команда connect устанвливает связь между
                                                    //двумя объектами интерфейса*/
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //QMessageBox::about(this, "Сообщение", "Мое новое сообщение"); //вывод сообщений/предупреждений, заголовок и само сообщение

    /*QMessageBox::StandardButton answer = QMessageBox::question(this, "К тебе вопрос, Ром", "Каков твой ответ?",
                                                               QMessageBox::Yes | QMessageBox::No);
    if(answer == QMessageBox::Yes)
        QApplication::quit();
    else
        ui->label->setText("Ты ответил нет");*/

    QLabel *label = new QLabel("Привет мир!");
    label->show();
}

