#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>
#include<QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("D:/C++/Password.jpg");
    ui->label_pic->setPixmap(pix.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "test" && password == "test"){
        QMessageBox::information(this, "Ввод пароля", "Вы успешно ввели пароль");
        hide(); //скрывает main_window в данном случае окно ввода пароля
        new_window = new New_window(this);
        new_window->show();
    }
    else
        QMessageBox::warning(this, "Ошибка", "Вы неверно ввели пароль");
}

