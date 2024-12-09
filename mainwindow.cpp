#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    my_timer = new QTimer(this);
    connect(my_timer, SIGNAL(timeout()), this, SLOT(my_function()));
    my_timer->start(1000);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::my_function()
{
    QTime time = QTime::currentTime();
    QDate date = QDate::currentDate();
    QString string_time = time.toString("hh : mm : ss");
    QString string_date = date.toString("dd.MM.yyyy");
    if(time.second()%2 == 0){
        string_time[3] = ' ';
        string_time[8] = ' ';
    }
    ui->label->setText(string_time);
    ui->label_2->setText(string_date);
}

