/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_restart;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_1;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_16;
    QPushButton *pushButton_13;
    QPushButton *pushButton_3;
    QPushButton *pushButton_12;
    QPushButton *pushButton_6;
    QPushButton *pushButton_15;
    QPushButton *pushButton_7;
    QPushButton *pushButton_11;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QPushButton *pushButton_14;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1558, 871);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(470, -10, 624, 928));
        gridLayout_2 = new QGridLayout(verticalLayoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_4, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(-1, 0, -1, 0);
        pushButton_restart = new QPushButton(verticalLayoutWidget);
        pushButton_restart->setObjectName("pushButton_restart");
        sizePolicy.setHeightForWidth(pushButton_restart->sizePolicy().hasHeightForWidth());
        pushButton_restart->setSizePolicy(sizePolicy);
        pushButton_restart->setMinimumSize(QSize(250, 60));
        QFont font;
        font.setPointSize(26);
        pushButton_restart->setFont(font);
        pushButton_restart->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_restart->setStyleSheet(QString::fromUtf8("border: 4px solid;\n"
"border-radius: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(124, 17, 53, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(79, 43, 43);\n"
"border-color: rgb(238, 148, 148);\n"
""));
        pushButton_restart->setIconSize(QSize(80, 80));

        gridLayout_3->addWidget(pushButton_restart, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 9, 0, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(22);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 220, 33);"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 4, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 2, 0, 1, 1);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Z003")});
        font2.setPointSize(40);
        font2.setBold(true);
        font2.setItalic(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(238, 148, 148)"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 6, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        pushButton_1 = new QPushButton(verticalLayoutWidget);
        pushButton_1->setObjectName("pushButton_1");
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setMinimumSize(QSize(150, 150));
        QFont font3;
        font3.setPointSize(25);
        pushButton_1->setFont(font3);
        pushButton_1->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_1->setStyleSheet(QString::fromUtf8("border: 4px solid;\n"
"border-radius: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(124, 17, 53, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(79, 43, 43);\n"
"border-color: rgb(238, 148, 148);\n"
""));

        gridLayout->addWidget(pushButton_1, 0, 3, 1, 1);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(150, 150));
        pushButton_5->setFont(font3);
        pushButton_5->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("border: 4px solid;\n"
"border-radius: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(124, 17, 53, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(79, 43, 43);\n"
"border-color: rgb(238, 148, 148);\n"
"\n"
"\n"
""));

        gridLayout->addWidget(pushButton_5, 1, 3, 1, 1);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(150, 150));
        pushButton_4->setFont(font3);
        pushButton_4->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("border: 4px solid;\n"
"border-radius: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(124, 17, 53, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(79, 43, 43);\n"
"border-color: rgb(238, 148, 148);\n"
""));

        gridLayout->addWidget(pushButton_4, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(150, 150));
        pushButton_2->setFont(font3);
        pushButton_2->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("border: 4px solid;\n"
"border-radius: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(124, 17, 53, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(79, 43, 43);\n"
"border-color: rgb(238, 148, 148);\n"
"\n"
""));

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        pushButton_9 = new QPushButton(verticalLayoutWidget);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setMinimumSize(QSize(150, 150));
        pushButton_9->setFont(font3);
        pushButton_9->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_9->setStyleSheet(QString::fromUtf8("border: 4px solid;\n"
"border-radius: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(124, 17, 53, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(79, 43, 43);\n"
"border-color: rgb(238, 148, 148);\n"
""));

        gridLayout->addWidget(pushButton_9, 2, 3, 1, 1);

        pushButton_16 = new QPushButton(verticalLayoutWidget);
        pushButton_16->setObjectName("pushButton_16");
        sizePolicy.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy);
        pushButton_16->setMinimumSize(QSize(150, 150));
        pushButton_16->setFont(font3);
        pushButton_16->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_16->setStyleSheet(QString::fromUtf8("border: 4px solid;\n"
"border-radius: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(124, 17, 53, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(79, 43, 43);\n"
"border-color: rgb(238, 148, 148);\n"
"\n"
""));

        gridLayout->addWidget(pushButton_16, 3, 0, 1, 1);

        pushButton_13 = new QPushButton(verticalLayoutWidget);
        pushButton_13->setObjectName("pushButton_13");
        sizePolicy.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy);
        pushButton_13->setMinimumSize(QSize(150, 150));
        pushButton_13->setMaximumSize(QSize(16777215, 16777215));
        pushButton_13->setFont(font3);
        pushButton_13->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_13->setStyleSheet(QString::fromUtf8("border: 4px solid;\n"
"border-radius: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(124, 17, 53, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(79, 43, 43);\n"
"border-color: rgb(238, 148, 148);\n"
""));

        gridLayout->addWidget(pushButton_13, 3, 3, 1, 1);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(150, 150));
        pushButton_3->setFont(font3);
        pushButton_3->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("border: 4px solid;\n"
"border-radius: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(124, 17, 53, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(79, 43, 43);\n"
"border-color: rgb(238, 148, 148);\n"
""));

        gridLayout->addWidget(pushButton_3, 0, 1, 1, 1);

        pushButton_12 = new QPushButton(verticalLayoutWidget);
        pushButton_12->setObjectName("pushButton_12");
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);
        pushButton_12->setMinimumSize(QSize(150, 150));
        pushButton_12->setFont(font3);
        pushButton_12->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_12->setStyleSheet(QString::fromUtf8("border: 4px solid;\n"
"border-radius: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(124, 17, 53, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(79, 43, 43);\n"
"border-color: rgb(238, 148, 148);\n"
""));

        gridLayout->addWidget(pushButton_12, 2, 0, 1, 1);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(150, 150));
        pushButton_6->setFont(font3);
        pushButton_6->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("border: 4px solid;\n"
"border-radius: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(124, 17, 53, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(79, 43, 43);\n"
"border-color: rgb(238, 148, 148);\n"
"\n"
""));

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_15 = new QPushButton(verticalLayoutWidget);
        pushButton_15->setObjectName("pushButton_15");
        sizePolicy.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy);
        pushButton_15->setMinimumSize(QSize(150, 150));
        pushButton_15->setFont(font3);
        pushButton_15->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_15->setStyleSheet(QString::fromUtf8("border: 4px solid;\n"
"border-radius: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(124, 17, 53, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(79, 43, 43);\n"
"border-color: rgb(238, 148, 148);\n"
"\n"
""));

        gridLayout->addWidget(pushButton_15, 3, 1, 1, 1);

        pushButton_7 = new QPushButton(verticalLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMinimumSize(QSize(150, 150));
        pushButton_7->setFont(font3);
        pushButton_7->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("border: 4px solid;\n"
"border-radius: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(124, 17, 53, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(79, 43, 43);\n"
"border-color: rgb(238, 148, 148);\n"
""));

        gridLayout->addWidget(pushButton_7, 1, 1, 1, 1);

        pushButton_11 = new QPushButton(verticalLayoutWidget);
        pushButton_11->setObjectName("pushButton_11");
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);
        pushButton_11->setMinimumSize(QSize(150, 150));
        pushButton_11->setFont(font3);
        pushButton_11->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_11->setStyleSheet(QString::fromUtf8("border: 4px solid;\n"
"border-radius: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(124, 17, 53, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(79, 43, 43);\n"
"border-color: rgb(238, 148, 148);\n"
""));

        gridLayout->addWidget(pushButton_11, 2, 1, 1, 1);

        pushButton_8 = new QPushButton(verticalLayoutWidget);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMinimumSize(QSize(150, 150));
        pushButton_8->setFont(font3);
        pushButton_8->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_8->setStyleSheet(QString::fromUtf8("border: 4px solid;\n"
"border-radius: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(124, 17, 53, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(79, 43, 43);\n"
"border-color: rgb(238, 148, 148);\n"
""));

        gridLayout->addWidget(pushButton_8, 1, 0, 1, 1);

        pushButton_10 = new QPushButton(verticalLayoutWidget);
        pushButton_10->setObjectName("pushButton_10");
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);
        pushButton_10->setMinimumSize(QSize(150, 150));
        pushButton_10->setFont(font3);
        pushButton_10->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_10->setStyleSheet(QString::fromUtf8("border: 4px solid;\n"
"border-radius: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(124, 17, 53, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(79, 43, 43);\n"
"border-color: rgb(238, 148, 148);\n"
""));

        gridLayout->addWidget(pushButton_10, 2, 2, 1, 1);

        pushButton_14 = new QPushButton(verticalLayoutWidget);
        pushButton_14->setObjectName("pushButton_14");
        sizePolicy.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy);
        pushButton_14->setMinimumSize(QSize(150, 150));
        pushButton_14->setFont(font3);
        pushButton_14->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_14->setStyleSheet(QString::fromUtf8("border: 4px solid;\n"
"border-radius: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(124, 17, 53, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(79, 43, 43);\n"
"border-color: rgb(238, 148, 148);\n"
""));

        gridLayout->addWidget(pushButton_14, 3, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout_2, 7, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 8, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1558, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_restart->setText(QCoreApplication::translate("MainWindow", "RESTART ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Attempts: 0 ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Memory Game", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
