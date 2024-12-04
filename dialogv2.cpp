#include "dialogv2.h"
#include "ui_dialogv2.h"

DialogV2::DialogV2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogV2)
{
    ui->setupUi(this);
}

DialogV2::~DialogV2()
{
    delete ui;
}
