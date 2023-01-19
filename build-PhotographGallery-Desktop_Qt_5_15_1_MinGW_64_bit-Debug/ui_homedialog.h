/********************************************************************************
** Form generated from reading UI file 'homedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEDIALOG_H
#define UI_HOMEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_Farming;
    QLabel *label_5;
    QPushButton *pushButton_Nature;
    QLabel *label_6;
    QPushButton *pushButton_Nest;
    QPushButton *pushButton_NuwaraCity;
    QLabel *label_7;
    QPushButton *pushButton_Railway;
    QLabel *label_8;
    QPushButton *pushButton_Waterfalls;
    QLabel *label_9;
    QLabel *label_4;
    QLabel *labelDateTime;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSlider *sliderProgress;
    QSlider *sliderVolume;

    void setupUi(QDialog *HomeDialog)
    {
        if (HomeDialog->objectName().isEmpty())
            HomeDialog->setObjectName(QString::fromUtf8("HomeDialog"));
        HomeDialog->resize(1525, 912);
        HomeDialog->setStyleSheet(QString::fromUtf8("background-color:#000000;"));
        label = new QLabel(HomeDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 1511, 131));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setMidLineWidth(-12);
        label->setPixmap(QPixmap(QString::fromUtf8(":/Hedder.PNG")));
        label_2 = new QLabel(HomeDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 840, 1521, 71));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Fotter.PNG")));
        label_3 = new QLabel(HomeDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 150, 231, 611));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/homeImages/Field.PNG")));
        pushButton = new QPushButton(HomeDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 770, 231, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("OCR A Std"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font-weight: bold;\n"
"border-radius : 10px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/homeButton/barley.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(50, 40));
        label_Farming = new QLabel(HomeDialog);
        label_Farming->setObjectName(QString::fromUtf8("label_Farming"));
        label_Farming->setGeometry(QRect(340, 230, 141, 171));
        label_5 = new QLabel(HomeDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(280, 150, 231, 611));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/homeImages/Nature.PNG")));
        pushButton_Nature = new QPushButton(HomeDialog);
        pushButton_Nature->setObjectName(QString::fromUtf8("pushButton_Nature"));
        pushButton_Nature->setGeometry(QRect(280, 770, 231, 61));
        pushButton_Nature->setFont(font1);
        pushButton_Nature->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font-weight: bold;\n"
"border-radius : 10px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/homeButton/beach_96px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Nature->setIcon(icon1);
        pushButton_Nature->setIconSize(QSize(39, 39));
        label_6 = new QLabel(HomeDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(530, 150, 231, 611));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/homeImages/Nest.PNG")));
        pushButton_Nest = new QPushButton(HomeDialog);
        pushButton_Nest->setObjectName(QString::fromUtf8("pushButton_Nest"));
        pushButton_Nest->setGeometry(QRect(530, 770, 231, 61));
        pushButton_Nest->setFont(font1);
        pushButton_Nest->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font-weight: bold;\n"
"border-radius : 10px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/homeButton/nest_100px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Nest->setIcon(icon2);
        pushButton_Nest->setIconSize(QSize(37, 50));
        pushButton_NuwaraCity = new QPushButton(HomeDialog);
        pushButton_NuwaraCity->setObjectName(QString::fromUtf8("pushButton_NuwaraCity"));
        pushButton_NuwaraCity->setGeometry(QRect(780, 770, 231, 61));
        pushButton_NuwaraCity->setFont(font1);
        pushButton_NuwaraCity->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font-weight: bold;\n"
"border-radius : 10px;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/homeButton/city_96px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_NuwaraCity->setIcon(icon3);
        pushButton_NuwaraCity->setIconSize(QSize(34, 40));
        label_7 = new QLabel(HomeDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(780, 150, 231, 611));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/homeImages/NuwaraCity.PNG")));
        pushButton_Railway = new QPushButton(HomeDialog);
        pushButton_Railway->setObjectName(QString::fromUtf8("pushButton_Railway"));
        pushButton_Railway->setGeometry(QRect(1030, 770, 231, 61));
        pushButton_Railway->setFont(font1);
        pushButton_Railway->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font-weight: bold;\n"
"border-radius : 10px;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/homeButton/steam_engine_96px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Railway->setIcon(icon4);
        pushButton_Railway->setIconSize(QSize(41, 50));
        label_8 = new QLabel(HomeDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(1030, 150, 231, 611));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/homeImages/Railway.PNG")));
        pushButton_Waterfalls = new QPushButton(HomeDialog);
        pushButton_Waterfalls->setObjectName(QString::fromUtf8("pushButton_Waterfalls"));
        pushButton_Waterfalls->setGeometry(QRect(1280, 770, 231, 61));
        pushButton_Waterfalls->setFont(font1);
        pushButton_Waterfalls->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font-weight: bold;\n"
"border-radius : 10px;\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/homeButton/waterfall_96px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Waterfalls->setIcon(icon5);
        pushButton_Waterfalls->setIconSize(QSize(42, 50));
        label_9 = new QLabel(HomeDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(1280, 150, 231, 611));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/homeImages/Waterfall.PNG")));
        label_4 = new QLabel(HomeDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1390, 10, 101, 91));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/logo/logo.png")));
        labelDateTime = new QLabel(HomeDialog);
        labelDateTime->setObjectName(QString::fromUtf8("labelDateTime"));
        labelDateTime->setGeometry(QRect(1320, 100, 181, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        labelDateTime->setFont(font2);
        labelDateTime->setStyleSheet(QString::fromUtf8("font: 75 22pt \"MS Shell Dlg 2\";\n"
"font: 75 20pt \"MS Shell Dlg 2\";\n"
"color:rgb(255, 255, 255);"));
        label_10 = new QLabel(HomeDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(1190, 850, 51, 29));
        label_10->setMinimumSize(QSize(39, 0));
        QFont font3;
        font3.setFamily(QString::fromUtf8("OCR A Std"));
        font3.setPointSize(26);
        label_10->setFont(font3);
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/homeButton/bar_chart_48px.png")));
        label_11 = new QLabel(HomeDialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(1340, 830, 51, 51));
        label_11->setMinimumSize(QSize(39, 0));
        label_11->setFont(font3);
        label_11->setAutoFillBackground(false);
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/homeButton/subwoofer_48px.png")));
        pushButton_2 = new QPushButton(HomeDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 860, 503, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font4.setPointSize(18);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        pushButton_2->setFont(font4);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"font: 18pt \"MS Shell Dlg 2\";\n"
"border-radius : 10px;\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/homeButton/music_96px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon6);
        pushButton_2->setIconSize(QSize(36, 50));
        pushButton_3 = new QPushButton(HomeDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(990, 860, 71, 41));
        pushButton_3->setFont(font4);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"font: 18pt \"MS Shell Dlg 2\";\n"
"border-radius : 10px;\n"
""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/homeButton/stop_96px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon7);
        pushButton_3->setIconSize(QSize(58, 66));
        layoutWidget = new QWidget(HomeDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1140, 880, 321, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sliderProgress = new QSlider(layoutWidget);
        sliderProgress->setObjectName(QString::fromUtf8("sliderProgress"));
        sliderProgress->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(sliderProgress);

        sliderVolume = new QSlider(layoutWidget);
        sliderVolume->setObjectName(QString::fromUtf8("sliderVolume"));
        sliderVolume->setValue(99);
        sliderVolume->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(sliderVolume);


        retranslateUi(HomeDialog);

        QMetaObject::connectSlotsByName(HomeDialog);
    } // setupUi

    void retranslateUi(QDialog *HomeDialog)
    {
        HomeDialog->setWindowTitle(QCoreApplication::translate("HomeDialog", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        pushButton->setText(QCoreApplication::translate("HomeDialog", "Farming", nullptr));
        label_Farming->setText(QString());
        label_5->setText(QString());
        pushButton_Nature->setText(QCoreApplication::translate("HomeDialog", "Nature", nullptr));
        label_6->setText(QString());
        pushButton_Nest->setText(QCoreApplication::translate("HomeDialog", "Nest", nullptr));
        pushButton_NuwaraCity->setText(QCoreApplication::translate("HomeDialog", "Nuwara City", nullptr));
        label_7->setText(QString());
        pushButton_Railway->setText(QCoreApplication::translate("HomeDialog", "Railway", nullptr));
        label_8->setText(QString());
        pushButton_Waterfalls->setText(QCoreApplication::translate("HomeDialog", "Waterfalls", nullptr));
        label_9->setText(QString());
        label_4->setText(QString());
        labelDateTime->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("HomeDialog", "Play Music while you are watching", nullptr));
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HomeDialog: public Ui_HomeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEDIALOG_H
