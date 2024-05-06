#ifndef WIDGETBACK_H
#define WIDGETBACK_H

#include <QWidget>
#include <QPaintEvent>
#include <QPixmap>
#include <QPainter>

class WidgetBack : public QWidget {
    Q_OBJECT

public:
    WidgetBack(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent* e);

};

#endif // WIDGETBACK_H
