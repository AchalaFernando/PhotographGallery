#include "homedialog.h"
#include "ui_homedialog.h"
//#include "farmingdialog.h"//1 view 1  farmingdialog page .h
#include <QDebug> //timer 6//
#include <QDateTime>//clock 1//

HomeDialog::HomeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HomeDialog)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this); // player ///
      connect(player, &QMediaPlayer::positionChanged , this  , &HomeDialog::on_positionChanged);  // player /// Connect Signals on spots
      connect(player, &QMediaPlayer::durationChanged , this  , &HomeDialog::on_durationChanged);  // player ///Connect Signals on spots

            //timer//
             timer = new QTimer(this); //timer 8 //
            connect(timer, SIGNAL(timeout()),this,SLOT(mytimer())); //timer 9 // signal and slot macanizm
            timer->start(1000); //timer 10 end // 2 second for =2000
}


HomeDialog::~HomeDialog()
{
    delete ui;
}

void HomeDialog::on_pushButton_clicked() // 1 view 2 farming  btn
{
    // 1 view  3////farmingDialog call gallery page
//       FarmingDialog farmingDialog;
//       farmingDialog.setModal(true);
//       farmingDialog.exec();


   // /////////////////////////////////////////
 //2 view 3  done push btn function  for farming

    farmingDialog = new FarmingDialog(this);
    farmingDialog->show();

}

void HomeDialog::on_pushButton_Nature_clicked() //Nature btn 1.3
{
    natureDialog =new NatureDialog(this);
    natureDialog->show();
}

void HomeDialog::on_pushButton_Nest_clicked() // // nest 2.3
{
    nestDialog = new NestDialog(this);
    nestDialog ->show();
}

void HomeDialog::on_pushButton_NuwaraCity_clicked() //  NuwaraCity 3.3
{
    nuwaracityDialog = new NuwaraCityDialog(this);
    nuwaracityDialog->show();
}

void HomeDialog::on_pushButton_Railway_clicked() //Railway 4.3
{
    railwayDialog  = new RailwayDialog(this);
    railwayDialog->show();
}

void HomeDialog::on_pushButton_Waterfalls_clicked() //Waterfalls 4.3
{
    waterfallsDialog = new WaterfallsDialog(this);
    waterfallsDialog->show();
}

void HomeDialog::on_sliderProgress_sliderMoved(int position) // player progress bar
{
    player->setPosition(position);
}

void HomeDialog::on_sliderVolume_sliderMoved(int position) // player volume bar
{
    player->setVolume(position);
}

void HomeDialog::on_pushButton_2_clicked() // player play button
{
    player->setMedia(QUrl::fromLocalFile("D:/Practicals/3Y1S CourseworkFile/PhotographGallery/PhotographGallery/resources/audio/MOONLIGHT ON THE DREAM WORLD - Beautiful Emotional Piano Music .mp3"));
        player->play();
        qDebug() <<player->errorString();
}

void HomeDialog::on_pushButton_3_clicked() // player stop button
{
     player->stop();
}

void HomeDialog::on_positionChanged(qint64 position) //.h//  void on_positionChanged(qint64 position); //  player//
{
    ui->sliderProgress->setValue(position);
}

void HomeDialog::on_durationChanged(qint64 position) //.h// void on_durationChanged(qint64 position); // player //
{
    ui->sliderProgress->setMaximum(position);
}

void HomeDialog::mytimer() //timer 5// refacter
{
    //qDebug()<< "update.."; //timer 7 //
    QTime time = QTime:: currentTime(); //clock 2// ststic function to current time
    QString time_text =time.toString("hh : mm : ss");//clock 3// //current time in to a string
    if((time.second() % 2) == 0){
        time_text[3] = ' ' ;
        time_text[8] = ' ' ;
    }

    ui->labelDateTime->setText(time_text); //clock 4//
}
