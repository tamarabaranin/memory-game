/********************************************************************************
** Form generated from reading UI file 'popup.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUP_H
#define UI_POPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_popUp
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *popUp)
    {
        if (popUp->objectName().isEmpty())
            popUp->setObjectName("popUp");
        popUp->resize(910, 535);
        verticalLayoutWidget = new QWidget(popUp);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(150, 50, 691, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Condensed")});
        font.setPointSize(30);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(238, 148, 148)"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(260, 80));
        QFont font1;
        font1.setPointSize(25);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("border: 4px solid;\n"
"border-radius: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(124, 17, 53, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(79, 43, 43);\n"
"border-color: rgb(238, 148, 148);"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(260, 80));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("border: 4px solid;\n"
"border-radius: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(124, 17, 53, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(79, 43, 43);\n"
"border-color: rgb(238, 148, 148);"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(popUp);

        QMetaObject::connectSlotsByName(popUp);
    } // setupUi

    void retranslateUi(QDialog *popUp)
    {
        popUp->setWindowTitle(QCoreApplication::translate("popUp", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("popUp", "CONGRATULATIONS!", nullptr));
        pushButton->setText(QCoreApplication::translate("popUp", "RESTART", nullptr));
        pushButton_2->setText(QCoreApplication::translate("popUp", "FINISH", nullptr));
    } // retranslateUi

};

namespace Ui {
    class popUp: public Ui_popUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUP_H
