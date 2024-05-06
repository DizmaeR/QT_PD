#include "widgethome.h"

WidgetHome::WidgetHome(QWidget *parent): QWidget(parent) { }

void WidgetHome::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);

    QPixmap Charge("D:/Programing/Multimedia/recources/Charge.png");
    QPixmap Car("D:/Programing/Multimedia/recources/Main car.png");
    QPixmap Pause("D:/Programing/Multimedia/recources/Music pause.png");
    QPixmap ArLeft("D:/Programing/Multimedia/recources/Arrows left.png");
    QPixmap ArRight("D:/Programing/Multimedia/recources/Arrows right.png");

    painter.drawPixmap (QPoint(510, 5), Charge);

    painter.drawPixmap(0, 0, 500, 800, Car);

    //MusicPad
    painter.setPen("darkGray");
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(Qt::darkGray);

    QRectF MusicPad(620, 125, 700, 140);
    painter.drawRoundedRect(MusicPad, 20.0, 15.0);
    painter.drawPixmap (QPoint(1085, 175), ArLeft);
    painter.drawPixmap (QPoint(1171, 179), Pause); //86
    painter.drawPixmap (QPoint(1237, 175), ArRight); //152

    //Music icon
    painter.setPen("gray");
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(Qt::gray);

    QRectF MusicIcon(707, 160, 70, 70);
    painter.drawRoundedRect(MusicIcon, 20.0, 15.0);
}
