#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

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

//Разница между флажками(CheckBox) и переключателями(RadioButtom) в том, что у флажков можно поставить все галочки,
//а у переключателей можно выбрать только один вариант, при выборе другого варианта первый переключатель анулируется
//Чтобы была возможность использовать несколько групп переключателей, например, "Твое любимое имя?" и "Твое любимое животное?"
//Нужно добавлять переключатели(RadioButtom) в разные контейнеры: вертикальные или горизонтальные.


void MainWindow::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked()){
        QMessageBox::information(this, "Ответ", "Вы выбрали Рому");
    }

    if(ui->radioButton_2->isChecked()){
        QMessageBox::information(this, "Ответ", "Вы выбрали Вику");
    }
}

