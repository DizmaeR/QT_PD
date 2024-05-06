#ifndef RADIOWINDOW_H
#define RADIOWINDOW_H

#include <QWidget>
#include <QStandardItemModel>
#include <QMediaPlayer>
#include <QPushButton>
#include <QMediaPlaylist>
#include <QPushButton>
#include <QPaintEvent>
#include <QPixmap>
#include <QPainter>


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

    void on_jazzButton_clicked();
    void on_popButton_clicked();
    void on_rockButton_clicked();
    void on_rRollButton_clicked();
    void on_classicButton_clicked();
    void on_RnbButton_clicked();
    void on_pauseButton_clicked();


protected:
    void paintEvent(QPaintEvent* e);

private:
    Ui::RadioWindow *ui;
    //  QStandardItemModel  *m_playListModel;   // Модель данных плейлиста для отображения
    QMediaPlayer        *m_player;          // Проигрыватель треков
    QMediaPlaylist      *jazz_playlist;        // Плейлиста проигрывателя
    QMediaPlaylist      *rock_playlist;
    QMediaPlaylist      *pop_playlist;
    QMediaPlaylist      *rRoll_playlist;
    QMediaPlaylist      *classic_playlist;
    QMediaPlaylist      *Rnb_playlist;

};

#endif // RADIOWINDOW_H
