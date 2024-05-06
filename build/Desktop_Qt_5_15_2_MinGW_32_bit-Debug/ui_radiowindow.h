/********************************************************************************
** Form generated from reading UI file 'radiowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIOWINDOW_H
#define UI_RADIOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RadioWindow
{
public:
    QPushButton *homeButton;
    QPushButton *pauseButton;
    QPushButton *jazzButton;
    QPushButton *popButton;
    QPushButton *classicButton;
    QPushButton *rockButton;
    QPushButton *rRollButton;
    QPushButton *RnbButton;

    void setupUi(QWidget *RadioWindow)
    {
        if (RadioWindow->objectName().isEmpty())
            RadioWindow->setObjectName(QString::fromUtf8("RadioWindow"));
        RadioWindow->resize(1440, 920);
        homeButton = new QPushButton(RadioWindow);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(10, 820, 100, 80));
        homeButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);\n"
"border: none;\n"
""));
        pauseButton = new QPushButton(RadioWindow);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));
        pauseButton->setGeometry(QRect(698, 469, 50, 64));
        pauseButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);\n"
"border: none;\n"
""));
        jazzButton = new QPushButton(RadioWindow);
        jazzButton->setObjectName(QString::fromUtf8("jazzButton"));
        jazzButton->setGeometry(QRect(193, 624, 150, 50));
        jazzButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);\n"
"border: none;\n"
""));
        popButton = new QPushButton(RadioWindow);
        popButton->setObjectName(QString::fromUtf8("popButton"));
        popButton->setGeometry(QRect(374, 624, 150, 50));
        popButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);\n"
"border: none;\n"
""));
        classicButton = new QPushButton(RadioWindow);
        classicButton->setObjectName(QString::fromUtf8("classicButton"));
        classicButton->setGeometry(QRect(1098, 624, 150, 50));
        classicButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);\n"
"border: none;\n"
""));
        rockButton = new QPushButton(RadioWindow);
        rockButton->setObjectName(QString::fromUtf8("rockButton"));
        rockButton->setGeometry(QRect(555, 624, 150, 50));
        rockButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);\n"
"border: none;\n"
""));
        rRollButton = new QPushButton(RadioWindow);
        rRollButton->setObjectName(QString::fromUtf8("rRollButton"));
        rRollButton->setGeometry(QRect(736, 624, 150, 50));
        rRollButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);\n"
"border: none;\n"
""));
        RnbButton = new QPushButton(RadioWindow);
        RnbButton->setObjectName(QString::fromUtf8("RnbButton"));
        RnbButton->setGeometry(QRect(917, 624, 150, 50));
        RnbButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,0);\n"
"border: none;\n"
""));

        retranslateUi(RadioWindow);

        QMetaObject::connectSlotsByName(RadioWindow);
    } // setupUi

    void retranslateUi(QWidget *RadioWindow)
    {
        RadioWindow->setWindowTitle(QCoreApplication::translate("RadioWindow", "Form", nullptr));
        homeButton->setText(QString());
        pauseButton->setText(QString());
        jazzButton->setText(QCoreApplication::translate("RadioWindow", "Jazz", nullptr));
        popButton->setText(QCoreApplication::translate("RadioWindow", "Pop", nullptr));
        classicButton->setText(QCoreApplication::translate("RadioWindow", "Classic", nullptr));
        rockButton->setText(QCoreApplication::translate("RadioWindow", "Rock", nullptr));
        rRollButton->setText(QCoreApplication::translate("RadioWindow", "Rock n Roll", nullptr));
        RnbButton->setText(QCoreApplication::translate("RadioWindow", "RnB", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RadioWindow: public Ui_RadioWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIOWINDOW_H
