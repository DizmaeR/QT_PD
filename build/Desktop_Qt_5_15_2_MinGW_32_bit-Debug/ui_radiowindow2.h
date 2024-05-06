/********************************************************************************
** Form generated from reading UI file 'radiowindow2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIOWINDOW2_H
#define UI_RADIOWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <widgetback.h>
#include "widgetradio.h"

QT_BEGIN_NAMESPACE

class Ui_RadioWindow2
{
public:
    QWidget *centralwidget;
    WidgetBack *widgetback;
    WidgetRadio *widgetradio;
    QPushButton *homeButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RadioWindow2)
    {
        if (RadioWindow2->objectName().isEmpty())
            RadioWindow2->setObjectName(QString::fromUtf8("RadioWindow2"));
        RadioWindow2->resize(1440, 800);
        centralwidget = new QWidget(RadioWindow2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widgetback = new WidgetBack(centralwidget);
        widgetback->setObjectName(QString::fromUtf8("widgetback"));
        widgetback->setGeometry(QRect(0, 0, 1440, 800));
        widgetradio = new WidgetRadio(widgetback);
        widgetradio->setObjectName(QString::fromUtf8("widgetradio"));
        widgetradio->setGeometry(QRect(0, 0, 1440, 720));
        homeButton = new QPushButton(widgetradio);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(50, 745, 62, 30));
        RadioWindow2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RadioWindow2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1440, 25));
        RadioWindow2->setMenuBar(menubar);
        statusbar = new QStatusBar(RadioWindow2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RadioWindow2->setStatusBar(statusbar);

        retranslateUi(RadioWindow2);

        QMetaObject::connectSlotsByName(RadioWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *RadioWindow2)
    {
        RadioWindow2->setWindowTitle(QCoreApplication::translate("RadioWindow2", "MainWindow", nullptr));
        homeButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RadioWindow2: public Ui_RadioWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIOWINDOW2_H
