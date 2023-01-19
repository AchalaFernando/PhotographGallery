#ifndef FARMINGDIALOG_H
#define FARMINGDIALOG_H

#include <QDialog>

namespace Ui {
class FarmingDialog;
}

class FarmingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FarmingDialog(QWidget *parent = nullptr);
    ~FarmingDialog();

private:
    Ui::FarmingDialog *ui;
};

#endif // FARMINGDIALOG_H
