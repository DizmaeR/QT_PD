#ifndef WIDGETHOME_H
#define WIDGETHOME_H

#include <QWidget>
#include <QPaintEvent>
#include <QPixmap>
#include <QPainter>

class WidgetHome : public QWidget {
    Q_OBJECT

public:
    WidgetHome(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent* e);

};

#endif // WIDGETHOME_H
