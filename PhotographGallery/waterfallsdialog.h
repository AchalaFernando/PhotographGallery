#ifndef WATERFALLSDIALOG_H
#define WATERFALLSDIALOG_H

#include <QDialog>

namespace Ui {
class WaterfallsDialog;
}

class WaterfallsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WaterfallsDialog(QWidget *parent = nullptr);
    ~WaterfallsDialog();

private:
    Ui::WaterfallsDialog *ui;
};

#endif // WATERFALLSDIALOG_H
