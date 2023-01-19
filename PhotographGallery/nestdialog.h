#ifndef NESTDIALOG_H
#define NESTDIALOG_H

#include <QDialog>

namespace Ui {
class NestDialog;
}

class NestDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NestDialog(QWidget *parent = nullptr);
    ~NestDialog();

private:
    Ui::NestDialog *ui;
};

#endif // NESTDIALOG_H
