#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>
#include<QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QPixmap pix("D:/C++/Password.jpg"); неверный подход к размещению изображений, так как при перемещении
    //программы на другой комп или линукс эта ссылка не сработает, так как изображения не будет на новом компе.
    //Для того, что бы это поправить нужно создать файл Qt resources и добавить в него нужные изображения.
    //Затем скопировать путь к этому изображению, кликнув в дереве проекта по нему правой кнопкой мыши. Внизу
    //приведен верный способ установки изображений в приложении:
    QPixmap pix(":/Image/Password.jpg");//ВОТ ЭТО ВЕРНЫЙ СПОСОБ ЗАДАНИЯ ИЗОБРАЖЕНИЙ
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

