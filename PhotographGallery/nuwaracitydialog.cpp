#include "nuwaracitydialog.h"
#include "ui_nuwaracitydialog.h"

NuwaraCityDialog::NuwaraCityDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NuwaraCityDialog)
{
    ui->setupUi(this);
}

NuwaraCityDialog::~NuwaraCityDialog()
{
    delete ui;
}
