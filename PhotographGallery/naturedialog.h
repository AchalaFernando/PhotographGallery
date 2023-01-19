#ifndef NATUREDIALOG_H
#define NATUREDIALOG_H

#include <QDialog>

namespace Ui {
class NatureDialog;
}

class NatureDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NatureDialog(QWidget *parent = nullptr);
    ~NatureDialog();

private:
    Ui::NatureDialog *ui;
};

#endif // NATUREDIALOG_H
