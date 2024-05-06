#ifndef WIDGETRADIO_H
#define WIDGETRADIO_H

#include <QWidget>
#include <QPaintEvent>
#include <QPixmap>
#include <QPainter>

class WidgetRadio : public QWidget {
    Q_OBJECT

public:
    WidgetRadio(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent* e);
};

#endif // WIDGETRADIO_H
