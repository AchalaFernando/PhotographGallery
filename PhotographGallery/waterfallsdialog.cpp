#include "waterfallsdialog.h"
#include "ui_waterfallsdialog.h"

WaterfallsDialog::WaterfallsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WaterfallsDialog)
{
    ui->setupUi(this);
}

WaterfallsDialog::~WaterfallsDialog()
{
    delete ui;
}
