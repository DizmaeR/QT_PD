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
#include <widgetback.h>
#include "widgetradio.h"

QT_BEGIN_NAMESPACE

class Ui_RadioWindow
{
public:
    WidgetBack *widgetback;
    WidgetRadio *widgetradio;
    QPushButton *homeButton;
    QPushButton *pauseButton;
    QPushButton *rightArrButton;
    QPushButton *jazzButton;
    QPushButton *rockButton;
    QPushButton *popButton;
    QPushButton *rRollButton;
    QPushButton *classicButton;
    QPushButton *RnbButton;
    QPushButton *leftArrButton;

    void setupUi(QWidget *RadioWindow)
    {
        if (RadioWindow->objectName().isEmpty())
            RadioWindow->setObjectName(QString::fromUtf8("RadioWindow"));
        RadioWindow->resize(1440, 920);
        widgetback = new WidgetBack(RadioWindow);
        widgetback->setObjectName(QString::fromUtf8("widgetback"));
        widgetback->setGeometry(QRect(0, 0, 1440, 920));
        widgetradio = new WidgetRadio(widgetback);
        widgetradio->setObjectName(QString::fromUtf8("widgetradio"));
        widgetradio->setGeometry(QRect(0, 0, 1440, 920));
        homeButton = new QPushButton(widgetradio);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 820, 150, 100));
        homeButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border: none;"));
        pauseButton = new QPushButton(widgetradio);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));
        pauseButton->setGeometry(QRect(20, 230, 83, 29));
        rightArrButton = new QPushButton(widgetradio);
        rightArrButton->setObjectName(QString::fromUtf8("rightArrButton"));
        rightArrButton->setGeometry(QRect(210, 230, 83, 29));
        jazzButton = new QPushButton(widgetradio);
        jazzButton->setObjectName(QString::fromUtf8("jazzButton"));
        jazzButton->setGeometry(QRect(110, 340, 83, 29));
        rockButton = new QPushButton(widgetradio);
        rockButton->setObjectName(QString::fromUtf8("rockButton"));
        rockButton->setGeometry(QRect(210, 340, 83, 29));
        popButton = new QPushButton(widgetradio);
        popButton->setObjectName(QString::fromUtf8("popButton"));
        popButton->setGeometry(QRect(310, 340, 83, 29));
        rRollButton = new QPushButton(widgetradio);
        rRollButton->setObjectName(QString::fromUtf8("rRollButton"));
        rRollButton->setGeometry(QRect(400, 340, 83, 29));
        classicButton = new QPushButton(widgetradio);
        classicButton->setObjectName(QString::fromUtf8("classicButton"));
        classicButton->setGeometry(QRect(500, 340, 83, 29));
        RnbButton = new QPushButton(widgetradio);
        RnbButton->setObjectName(QString::fromUtf8("RnbButton"));
        RnbButton->setGeometry(QRect(590, 340, 83, 29));
        leftArrButton = new QPushButton(widgetradio);
        leftArrButton->setObjectName(QString::fromUtf8("leftArrButton"));
        leftArrButton->setGeometry(QRect(110, 230, 83, 29));

        retranslateUi(RadioWindow);

        QMetaObject::connectSlotsByName(RadioWindow);
    } // setupUi

    void retranslateUi(QWidget *RadioWindow)
    {
        RadioWindow->setWindowTitle(QCoreApplication::translate("RadioWindow", "Form", nullptr));
        homeButton->setText(QString());
        pauseButton->setText(QCoreApplication::translate("RadioWindow", "PushButton", nullptr));
        rightArrButton->setText(QCoreApplication::translate("RadioWindow", "PushButton", nullptr));
        jazzButton->setText(QCoreApplication::translate("RadioWindow", "PushButton", nullptr));
        rockButton->setText(QCoreApplication::translate("RadioWindow", "PushButton", nullptr));
        popButton->setText(QCoreApplication::translate("RadioWindow", "PushButton", nullptr));
        rRollButton->setText(QCoreApplication::translate("RadioWindow", "PushButton", nullptr));
        classicButton->setText(QCoreApplication::translate("RadioWindow", "PushButton", nullptr));
        RnbButton->setText(QCoreApplication::translate("RadioWindow", "PushButton", nullptr));
        leftArrButton->setText(QCoreApplication::translate("RadioWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RadioWindow: public Ui_RadioWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIOWINDOW_H
