/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QPushButton *bFIle;
    QPushButton *pushButton_2;
    QFrame *frame;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *luncompressed;
    QLabel *lFilename;
    QLabel *label_7;
    QFrame *frame_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_16;
    QFrame *frame_3;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_17;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(391, 391);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        bFIle = new QPushButton(centralWidget);
        bFIle->setObjectName(QStringLiteral("bFIle"));
        bFIle->setGeometry(QRect(10, 10, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 10, 75, 23));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 100, 371, 61));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 61, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 10, 281, 21));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        label_3->setFont(font1);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 30, 281, 21));
        label_4->setFont(font1);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 30, 61, 21));
        label_5->setFont(font);
        luncompressed = new QLabel(centralWidget);
        luncompressed->setObjectName(QStringLiteral("luncompressed"));
        luncompressed->setGeometry(QRect(20, 70, 351, 31));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        luncompressed->setFont(font2);
        luncompressed->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lFilename = new QLabel(centralWidget);
        lFilename->setObjectName(QStringLiteral("lFilename"));
        lFilename->setGeometry(QRect(20, 40, 351, 21));
        lFilename->setFont(font1);
        lFilename->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 180, 351, 31));
        label_7->setFont(font2);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 210, 371, 61));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 10, 61, 21));
        label_8->setFont(font);
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(80, 10, 281, 21));
        label_9->setFont(font1);
        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(80, 30, 281, 21));
        label_10->setFont(font1);
        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 30, 61, 21));
        label_11->setFont(font);
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 290, 351, 31));
        label_16->setFont(font2);
        label_16->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 320, 371, 61));
        frame_3->setFrameShape(QFrame::Panel);
        frame_3->setFrameShadow(QFrame::Sunken);
        label_12 = new QLabel(frame_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 10, 61, 21));
        label_12->setFont(font);
        label_13 = new QLabel(frame_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(80, 10, 281, 21));
        label_13->setFont(font1);
        label_14 = new QLabel(frame_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(80, 30, 281, 21));
        label_14->setFont(font1);
        label_15 = new QLabel(frame_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 30, 61, 21));
        label_15->setFont(font);
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(90, 10, 211, 21));
        label_17->setFont(font2);
        label_17->setAlignment(Qt::AlignCenter);
        MainWindowClass->setCentralWidget(centralWidget);

        retranslateUi(MainWindowClass);
        QObject::connect(pushButton_2, SIGNAL(released()), MainWindowClass, SLOT(close()));
        QObject::connect(bFIle, SIGNAL(released()), MainWindowClass, SLOT(GetFile()));
        QObject::connect(MainWindowClass, SIGNAL(SendFileSize(QString)), label_3, SLOT(setText(QString)));
        QObject::connect(MainWindowClass, SIGNAL(SendLZWSize(QString)), label_9, SLOT(setText(QString)));
        QObject::connect(MainWindowClass, SIGNAL(SendLZWRatio(QString)), label_10, SLOT(setText(QString)));
        QObject::connect(MainWindowClass, SIGNAL(SendHuffmanSize(QString)), label_13, SLOT(setText(QString)));
        QObject::connect(MainWindowClass, SIGNAL(SendHuffmanRatio(QString)), label_14, SLOT(setText(QString)));
        QObject::connect(MainWindowClass, SIGNAL(SendFilename(QString)), lFilename, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "CMPT 365 - Project 2.1 (tmontesa)", nullptr));
        bFIle->setText(QApplication::translate("MainWindowClass", "File", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindowClass", "Quit", nullptr));
        label_2->setText(QApplication::translate("MainWindowClass", "File Size:", nullptr));
        label_3->setText(QApplication::translate("MainWindowClass", "0 bytes", nullptr));
        label_4->setText(QApplication::translate("MainWindowClass", "100%", nullptr));
        label_5->setText(QApplication::translate("MainWindowClass", "Ratio:", nullptr));
        luncompressed->setText(QApplication::translate("MainWindowClass", "Uncompressed", nullptr));
        lFilename->setText(QApplication::translate("MainWindowClass", "No file selected.", nullptr));
        label_7->setText(QApplication::translate("MainWindowClass", "LZW Lossless Compression", nullptr));
        label_8->setText(QApplication::translate("MainWindowClass", "File Size:", nullptr));
        label_9->setText(QApplication::translate("MainWindowClass", "0 bytes", nullptr));
        label_10->setText(QApplication::translate("MainWindowClass", "0%", nullptr));
        label_11->setText(QApplication::translate("MainWindowClass", "Ratio:", nullptr));
        label_16->setText(QApplication::translate("MainWindowClass", "Huffman Lossless Compression", nullptr));
        label_12->setText(QApplication::translate("MainWindowClass", "File Size:", nullptr));
        label_13->setText(QApplication::translate("MainWindowClass", "0 bytes", nullptr));
        label_14->setText(QApplication::translate("MainWindowClass", "0%", nullptr));
        label_15->setText(QApplication::translate("MainWindowClass", "Ratio:", nullptr));
        label_17->setText(QApplication::translate("MainWindowClass", "Lossless Compression Ratios", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
