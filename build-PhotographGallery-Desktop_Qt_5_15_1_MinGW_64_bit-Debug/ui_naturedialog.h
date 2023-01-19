/********************************************************************************
** Form generated from reading UI file 'naturedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NATUREDIALOG_H
#define UI_NATUREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NatureDialog
{
public:
    QLabel *label_2;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_7;
    QLabel *label_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *label_15;
    QLabel *label_18;
    QLabel *label_17;

    void setupUi(QDialog *NatureDialog)
    {
        if (NatureDialog->objectName().isEmpty())
            NatureDialog->setObjectName(QString::fromUtf8("NatureDialog"));
        NatureDialog->resize(1509, 999);
        label_2 = new QLabel(NatureDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 930, 1521, 71));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Fotter.PNG")));
        label = new QLabel(NatureDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, -10, 1511, 111));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Hedder.PNG")));
        label_5 = new QLabel(NatureDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 100, 321, 411));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/nature/nature  (1).jpg")));
        label_6 = new QLabel(NatureDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 520, 321, 411));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/nature/nature  (14).jpg")));
        label_8 = new QLabel(NatureDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(440, 520, 321, 411));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/nature/nature  (9).jpg")));
        label_9 = new QLabel(NatureDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(790, 100, 321, 411));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/nature/nature  (12).jpg")));
        label_10 = new QLabel(NatureDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(790, 520, 321, 411));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/nature/nature  (7).jpg")));
        label_11 = new QLabel(NatureDialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(1140, 520, 321, 411));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/nature/nature  (6).jpg")));
        label_12 = new QLabel(NatureDialog);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(1140, 100, 321, 411));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/nature/nature  (13).jpg")));
        label_7 = new QLabel(NatureDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(440, 100, 321, 411));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/nature/nature  (11).jpg")));
        label_4 = new QLabel(NatureDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 200, 55, 16));
        layoutWidget = new QWidget(NatureDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 190, 41, 651));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(39, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("OCR A Std"));
        font.setPointSize(26);
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        verticalLayout->addWidget(label_13);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        verticalLayout->addWidget(label_14);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);

        verticalLayout->addWidget(label_16);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);

        verticalLayout->addWidget(label_15);

        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);

        verticalLayout->addWidget(label_18);

        label_17 = new QLabel(NatureDialog);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(1390, 0, 101, 91));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/logo/logo.png")));

        retranslateUi(NatureDialog);

        QMetaObject::connectSlotsByName(NatureDialog);
    } // setupUi

    void retranslateUi(QDialog *NatureDialog)
    {
        NatureDialog->setWindowTitle(QCoreApplication::translate("NatureDialog", "Dialog", nullptr));
        label_2->setText(QString());
        label->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_7->setText(QString());
        label_4->setText(QString());
        label_3->setText(QCoreApplication::translate("NatureDialog", "<html><head/><body><p><span style=\" color:#ffffff;\">N</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("NatureDialog", "<html><head/><body><p><span style=\" color:#ffffff;\">a</span></p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("NatureDialog", "<html><head/><body><p><span style=\" color:#ffffff;\">t</span></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("NatureDialog", "<html><head/><body><p><span style=\" color:#ffffff;\">u</span></p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("NatureDialog", "<html><head/><body><p><span style=\" color:#ffffff;\">r</span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("NatureDialog", "<html><head/><body><p><span style=\" color:#ffffff;\">e</span></p></body></html>", nullptr));
        label_17->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NatureDialog: public Ui_NatureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NATUREDIALOG_H
