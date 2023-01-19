#include "mainwindow.h"
#include "ui_mainwindow.h"
#include  <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked() //login btn
{

    QString username = ui-> lineEdit_username->text();
    QString password = ui-> lineEdit_password->text();
    if(username =="Achala" && password=="APass"){
        QMessageBox ::information (this,"Login","You are successfully logged in to the Photogra!");
        hide();
        homeDialog =new HomeDialog(this); // parent this class
        homeDialog->show(); // dialog object
    }
    else{

        QMessageBox::warning(this,"Login","Please enter correct username and password!");
    }

}

void MainWindow::on_pushButton_2_clicked()
{

}
