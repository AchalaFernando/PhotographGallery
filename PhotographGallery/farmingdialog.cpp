#include "farmingdialog.h"
#include "ui_farmingdialog.h"

FarmingDialog::FarmingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FarmingDialog)
{
    ui->setupUi(this);
}

FarmingDialog::~FarmingDialog()
{
    delete ui;
}
