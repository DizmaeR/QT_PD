#include "widgetradio.h"

WidgetRadio::WidgetRadio(QWidget *parent): QWidget(parent) { }

void WidgetRadio::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);

    QPixmap Charge("D:/Programing/Multimedia/recources/Charge.png");
    QPixmap Pause("D:/Programing/Multimedia/recources/Music pause.png");
    QPixmap ArLeft("D:/Programing/Multimedia/recources/Arrows left.png");
    QPixmap ArRight("D:/Programing/Multimedia/recources/Arrows right.png");

    painter.drawPixmap (QPoint(10, 5), Charge);


    //RadioPad
    painter.setPen("darkGray");
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(Qt::darkGray);

    QRectF RadioPad(120, 80, 1200, 700);
    painter.drawRoundedRect(RadioPad, 20.0, 15.0);

    painter.setPen("gray");
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(Qt::gray);


    QRectF RadioPlayer(194, 111, 1053, 274);
    painter.drawRoundedRect(RadioPlayer, 20.0, 15.0);

    painter.drawPixmap (QPoint(594, 465), ArLeft);
    painter.drawPixmap (QPoint(704, 469), Pause); //86
    painter.drawPixmap (QPoint(790, 465), ArRight); //32+81

    //Radio Signal

    painter.setPen("lightGray");
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(Qt::lightGray);

    painter.drawRect(1108, 256, 6, 19);
    painter.drawRect(1121, 243, 6, 32);

    painter.setPen("darkGray");
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(Qt::darkGray);

    painter.drawRect(1134, 237, 6, 39);
    painter.drawRect(1147, 222, 6, 54);


    //Radio Station

    painter.setPen("gray");
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(Qt::gray);

    QRectF FM1(193, 624, 150, 50);
    painter.drawRoundedRect(FM1, 20.0, 15.0);

    QRectF FM2(374, 624, 150, 50);
    painter.drawRoundedRect(FM2, 20.0, 15.0);

    QRectF FM3(555, 624, 150, 50);
    painter.drawRoundedRect(FM3, 20.0, 15.0);

    QRectF FM4(736, 624, 150, 50);
    painter.drawRoundedRect(FM4, 20.0, 15.0);

    QRectF FM5(917, 624, 150, 50);
    painter.drawRoundedRect(FM5, 20.0, 15.0);

    QRectF AM(1098, 624, 150, 50);
    painter.drawRoundedRect(AM, 20.0, 15.0);
}
