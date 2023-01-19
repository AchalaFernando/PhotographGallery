#ifndef NUWARACITYDIALOG_H
#define NUWARACITYDIALOG_H

#include <QDialog>

namespace Ui {
class NuwaraCityDialog;
}

class NuwaraCityDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NuwaraCityDialog(QWidget *parent = nullptr);
    ~NuwaraCityDialog();

private:
    Ui::NuwaraCityDialog *ui;
};

#endif // NUWARACITYDIALOG_H
