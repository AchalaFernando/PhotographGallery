#include "nestdialog.h"
#include "ui_nestdialog.h"

NestDialog::NestDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NestDialog)
{
    ui->setupUi(this);
}

NestDialog::~NestDialog()
{
    delete ui;
}
