#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include<QFile>
#include<QTextStream>

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






void MainWindow::on_pushButton_clicked()//процесс записи внутрь файла
{
    QFile file("D:/C++/QT creator/text.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text)){ //Проверка на то, можем ли мы что-либо записывать
        QMessageBox::warning(this, "Title", "Не удалось открыть файл");
    }

    QTextStream out(&file);
    QString text = ui->plainTextEdit->toPlainText(); //вносим текст в переменную text
    out << text;
    //file.flush(); //принудительная очистка буфера, по идее он после вывода и сам автомтаически это делает
                    //но может сделать это в непредсказуемый момент времени
    out << "\nНовая строка;";
    file.close(); //закрывает файл

}


void MainWindow::on_pushButton_2_clicked()//процесс считывания из файла
{
    QFile file("D:/C++/QT creator/text.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){ //Проверка на то, можем ли мы что-либо записывать
        QMessageBox::warning(this, "Title", "Не удалось открыть файл");
    }

    QTextStream in(&file);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);
    in << text;
    file.close();
}

