#ifndef RADIOWINDOW_H
#define RADIOWINDOW_H

#include <QWidget>
#include <QDebug>
//#include "widgetmusic.h"

namespace Ui {
class RadioWindow;
}

class RadioWindow : public QWidget
{
    Q_OBJECT

public:
    explicit RadioWindow(QWidget *parent = 0);
    ~RadioWindow();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_homeButton_clicked();
    void jazz_button();

private:
    Ui::RadioWindow *ui;
};

#endif // RADIOWINDOW_H
