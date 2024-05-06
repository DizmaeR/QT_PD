#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QPainter>
#include <QPixmap>
#include <QPaintEvent>
#include <radiowindow.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_radioButton_clicked();

protected:
    void paintEvent(QPaintEvent* e);

private:
    Ui::MainWindow *ui;
    RadioWindow *sWindow;
};
#endif // MAINWINDOW_H
