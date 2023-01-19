#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "homedialog.h" //homedialog class or heder

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
   HomeDialog *homeDialog; // creating object / pointer of ir * uper & lower case*
};
#endif // MAINWINDOW_H
