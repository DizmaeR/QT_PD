#ifndef WIDGETMUSIC_H
#define WIDGETMUSIC_H
#include <QWidget>
#include <QStandardItemModel>
#include <QMediaPlayer>
#include <QPushButton>
#include <QMediaPlaylist>





//class QMediaOlaylist;

class WidgetMusic : public QWidget
{
    Q_OBJECT


public:
    explicit WidgetMusic(/*QPushButton *jazz2,*/
                         QWidget *parent = 0);
    ~WidgetMusic();
 //   QPushButton *jazz;
private slots:
    void on_jazzButton_clicked();
    void on_popButton_clicked();
    void on_rockButton_clicked();
    void on_rRollButton_clicked();
    void on_classicButton_clicked();
    void on_RnbButton_clicked();
    void on_pauseButton_clicked();

private:
 //   QWidget::WidgetMusic *widget;
    QStandardItemModel  *m_playListModel;   // Модель данных плейлиста для отображения
    QMediaPlayer        *m_player;          // Проигрыватель треков
    QMediaPlaylist      *jazz_playlist;        // Плейлиста проигрывателя
    QMediaPlaylist      *rock_playlist;
    QMediaPlaylist      *pop_playlist;
    QMediaPlaylist      *rRoll_playlist;
    QMediaPlaylist      *classic_playlist;
    QMediaPlaylist      *Rnb_playlist;
};

#endif // WIDGETMUSIC_H
