#ifndef HOMEDIALOG_H
#define HOMEDIALOG_H

#include <QDialog>
 #include "farmingdialog.h"//2 view 1 farmingdialog page .h  1(31) //{ creating boject in farming class}
#include "naturedialog.h" // nature 1.1
#include "nestdialog.h" // nest 2.1
#include "nuwaracitydialog.h" //NuwaraCity 3.1
#include "railwaydialog.h"//Railway 4.1
#include "waterfallsdialog.h" //Waterfalls 5.1
#include <QMediaPlayer> // libry
#include <QDebug> // libry

#include <QTimer> //timer // class 1

namespace Ui {
class HomeDialog;
}

class HomeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HomeDialog(QWidget *parent = nullptr);
    ~HomeDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_Nature_clicked();

    void on_pushButton_Nest_clicked();

    void on_pushButton_NuwaraCity_clicked();

    void on_pushButton_Railway_clicked();

    void on_pushButton_Waterfalls_clicked();

    void on_sliderProgress_sliderMoved(int position);

    void on_sliderVolume_sliderMoved(int position);

    void on_pushButton_2_clicked(); // player

    void on_pushButton_3_clicked(); // player

    void on_positionChanged(qint64 position); //  player// changed current position when play in media player

     void on_durationChanged(qint64 position); // player // lord the file duration

public slots: //timer 3
     void mytimer(); //timer 4// // public slot function

private:
    Ui::HomeDialog *ui;

    //2 view 2  farmingdialog page .h  2 (31)
    FarmingDialog * farmingDialog; //{creating object on farming }
    //  ///////////////////

     NatureDialog  * natureDialog;  // nature 1.2
     NestDialog * nestDialog;  // nest 2.2
     NuwaraCityDialog * nuwaracityDialog;//NuwaraCity 3.2
     RailwayDialog  * railwayDialog;//Railway 4.2
     WaterfallsDialog  * waterfallsDialog;//Waterfalls 5.1
     // ///////
     QMediaPlayer* player; // player //

     QTimer *timer;  //timer 2// object name of timer class

};

#endif // HOMEDIALOG_H
