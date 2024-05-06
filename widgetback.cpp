#include "widgetback.h"

WidgetBack::WidgetBack(QWidget *parent): QWidget(parent) { }

void WidgetBack::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);


    QPixmap Back("D:/Programing/Multimedia/recources/Background.png"); //D:/Programing/Multimedia/Background.png
    QPixmap Wifi("D:/Programing/Multimedia/recources/Wifi.png");
    QPixmap Autoicon("D:/Programing/Multimedia/recources/Auto icon.png");
    QPixmap Radioicon("D:/Programing/Multimedia/recources/Radio icon.png");

    //Задний фон
    painter.drawPixmap (QPoint(0, 20), Back);


    //Верхняя панель
    painter.setPen("gray");

    QBrush brush;
    brush.setStyle(Qt::SolidPattern);

    painter.setBrush(Qt::gray);
    painter.drawRect(0, 0, 1440, 40);               //Добавить время и проценты заряда
    painter.drawPixmap (QPoint(1400, 9), Wifi);


    //Нижняя панель
    brush.setStyle(Qt::SolidPattern);

    painter.setBrush(Qt::black);
    painter.drawRect(0, 820, 1440, 80);
    painter.drawPixmap (QPoint(50, 845), Autoicon);
    painter.drawPixmap (QPoint(1330, 840), Radioicon);





}
