#include "naturedialog.h"
#include "ui_naturedialog.h"

NatureDialog::NatureDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NatureDialog)
{
    ui->setupUi(this);
}

NatureDialog::~NatureDialog()
{
    delete ui;
}
