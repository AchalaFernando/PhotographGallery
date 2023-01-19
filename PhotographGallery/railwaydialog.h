#ifndef RAILWAYDIALOG_H
#define RAILWAYDIALOG_H

#include <QDialog>

namespace Ui {
class RailwayDialog;
}

class RailwayDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RailwayDialog(QWidget *parent = nullptr);
    ~RailwayDialog();

private:
    Ui::RailwayDialog *ui;
};

#endif // RAILWAYDIALOG_H
