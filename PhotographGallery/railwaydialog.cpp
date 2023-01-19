#include "railwaydialog.h"
#include "ui_railwaydialog.h"

RailwayDialog::RailwayDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RailwayDialog)
{
    ui->setupUi(this);
}

RailwayDialog::~RailwayDialog()
{
    delete ui;
}
