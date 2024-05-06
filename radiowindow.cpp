#include "radiowindow.h"
//#include "widgetmusic.h"
#include "ui_radiowindow.h"

RadioWindow::RadioWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RadioWindow)
{
    ui->setupUi(this);
 //  WidgetMusic Mus(ui->jazzButton, this);
    connect(ui->jazzButton, &QPushButton::clicked, this, &RadioWindow::jazz_button);
}

RadioWindow::~RadioWindow()
{
    delete ui;
}

void RadioWindow::on_homeButton_clicked()
{
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}

void RadioWindow::jazz_button()
{
    qDebug() << "Работает";
}
