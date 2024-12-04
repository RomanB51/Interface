#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include<QLabel>
#include"dialogv2.h"

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

    DialogV2 new_window; //создаем объект класса dialogv2. Алгоритм вызова нового окна. Создаем ADD file QT->QT designer from class
    new_window.setModal(true); //подключаем заголовочный файл нового окна в этот файл через ". Данный способ не позволит тебе
    new_window.exec();         //при открытии второго окна щелкать в первом


    //QMessageBox::about(this, "Сообщение", "Мое новое сообщение"); //вывод сообщений/предупреждений, заголовок и само сообщение

    /*QMessageBox::StandardButton answer = QMessageBox::question(this, "К тебе вопрос, Ром", "Каков твой ответ?",
                                                               QMessageBox::Yes | QMessageBox::No);
    if(answer == QMessageBox::Yes)
        QApplication::quit();
    else
        ui->label->setText("Ты ответил нет");*/


    /*QLabel *label = new QLabel("Привет мир!"); //создание этикетки и вывод ее
    label->show();*/
}

