#include "widgetmusic.h"
//#include "ui_widgetmusic.h"
// #include "radiowindow.h"
// #include "ui_radiowindow.h"
#include <QFileDialog>
#include <QDir>

WidgetMusic::WidgetMusic(/*QPushButton *jazz2,*/ QWidget *parent) :
    QWidget(parent)/*, jazz(jazz2)*/
  //  ui(new Ui::WidgetMusic)
{

    m_player = new QMediaPlayer(this);          // Инициализируем плеер

    jazz_playlist = new QMediaPlaylist(m_player);  // Инициализируем плейлист
    jazz_playlist->QMediaPlaylist::addMedia(QMediaContent(QUrl::fromLocalFile("D:/Programing/Multimedia/recources/Jazz/jazz1.mp3"))); //QMediaContent(QUrl::fromLocalFile(filename)) //"D:/Programing/Multimedia/recources/Jazz/jazz1.mp3"
    jazz_playlist->QMediaPlaylist::addMedia(QMediaContent(QUrl::fromLocalFile("D:/Programing/Multimedia/recources/Jazz/jazz2.mp3")));
    jazz_playlist->QMediaPlaylist::addMedia(QMediaContent(QUrl::fromLocalFile("D:/Programing/Multimedia/recources/Jazz/jazz3.mp3")));

    rock_playlist = new QMediaPlaylist(m_player);  // Инициализируем плейлист
    rock_playlist->QMediaPlaylist::addMedia(QMediaContent(QUrl::fromLocalFile("D:/Programing/Multimedia/recources/Rock/rock1.mp3"))); //"D:/Programing/Multimedia/recources/Rock/rock1.mp3"
    rock_playlist->QMediaPlaylist::addMedia(QMediaContent(QUrl::fromLocalFile("D:/Programing/Multimedia/recources/Rock/rock2.mp3")));
    rock_playlist->QMediaPlaylist::addMedia(QMediaContent(QUrl::fromLocalFile("D:/Programing/Multimedia/recources/Rock/rock3.mp3")));

    pop_playlist = new QMediaPlaylist(m_player);  // Инициализируем плейлист
    pop_playlist->addMedia(QMediaContent(QUrl::fromLocalFile("D:/Programing/Multimedia/recources/Pop/Pop1.mp3"))); // "D:/Programing/Multimedia/recources/Pop/pop1.mp3"
    pop_playlist->addMedia(QMediaContent(QUrl::fromLocalFile("D:/Programing/Multimedia/recources/Pop/Pop2.mp3")));
    pop_playlist->addMedia(QMediaContent(QUrl::fromLocalFile("D:/Programing/Multimedia/recources/Pop/Pop3.mp3")));

    rRoll_playlist = new QMediaPlaylist(m_player);  // Инициализируем плейлист
    rRoll_playlist->addMedia(QMediaContent(QUrl::fromLocalFile("D:/Programing/Multimedia/recources/rRoll/rRoll1.mp3"))); //"D:/Programing/Multimedia/recources/rRoll/rRoll1.mp3"
    rRoll_playlist->addMedia(QMediaContent(QUrl::fromLocalFile("D:/Programing/Multimedia/recources/rRoll/rRoll2.mp3")));
    rRoll_playlist->addMedia(QMediaContent(QUrl::fromLocalFile("D:/Programing/Multimedia/recources/rRoll/rRoll3.mp3")));

    classic_playlist = new QMediaPlaylist(m_player);  // Инициализируем плейлист
    classic_playlist->addMedia(QMediaContent(QUrl::fromLocalFile("D:/Programing/Multimedia/recources/Classic/classic1.mp3"))); //"D:/Programing/Multimedia/recources/Classic/classic1.mp3"
    classic_playlist->addMedia(QMediaContent(QUrl::fromLocalFile("D:/Programing/Multimedia/recources/Classic/classic2.mp3")));
    classic_playlist->addMedia(QMediaContent(QUrl::fromLocalFile("D:/Programing/Multimedia/recources/Classic/classic3.mp3")));

    Rnb_playlist = new QMediaPlaylist(m_player);  // Инициализируем плейлист
    Rnb_playlist->addMedia(QMediaContent(QUrl::fromLocalFile("D:/Programing/Multimedia/recources/RnB/Rnb1.mp3")));
    Rnb_playlist->addMedia(QMediaContent(QUrl::fromLocalFile("D:/Programing/Multimedia/recources/RnB/Rnb2.mp3")));
    Rnb_playlist->addMedia(QMediaContent(QUrl::fromLocalFile("D:/Programing/Multimedia/recources/RnB/Rnb3.mp3")));    //"D:/Programing/Multimedia/recources/RnB/Rnb1.mp3"



//    m_player->setPlaylist(m_playlist);          // Устанавливаем плейлист в плеер
    // m_player->setVolume(70);                    // Устанавливаем громкость воспроизведения треков
    // m_playlist->setPlaybackMode(QMediaPlaylist::Loop);  // Устанавливаем циклический режим проигрывания плейлиста

 //   playlist = new QMediaPlaylist;

//    playlist->setCurrentIndex(1);
    // подключаем кнопки управления к слотам управления
    // Здесь отметим, что навигация по плейлисту осуществляется именно через плейлист
    // а запуск/пауза/остановка через сам плеер
   //  connect(ui->leftArrButton, &QToolButton::clicked, m_playlist, &QMediaPlaylist::previous);
   //  connect(ui->rightArrButton, &QToolButton::clicked, m_playlist, &QMediaPlaylist::next);
   // // connect(ui->playButton, &QToolButton::clicked, m_player, &QMediaPlayer::play); // 2 кнопки, одну выключать
   //  connect(ui->pauseButton, &QToolButton::clicked, m_player, &QMediaPlayer::pause);
   //  //connect(ui->btn_stop, &QToolButton::clicked, m_player, &QMediaPlayer::stop);

    // // При даблклике по треку в таблице устанавливаем трек в плейлисте
    // connect(ui->playlistView, &QTableView::doubleClicked, [this](const QModelIndex &index){
    //     m_playlist->setCurrentIndex(index.row());
    // });

    // // при изменении индекса текущего трека в плейлисте, устанавливаем название файла в специальном лейбле
    // connect(m_playlist, &QMediaPlaylist::currentIndexChanged, [this](int index){
    //     ui->currentTrack->setText(m_playListModel->data(m_playListModel->index(index, 0)).toString());

  //  QObject::connect(jazz, SIGNAL(clicked()), this, SLOT(on_jazzButton_clicked()));
}


void WidgetMusic::on_jazzButton_clicked()
{
   // connect(widget->jazzButton, &QToolButton::clicked, m_player, &QMediaPlayer::play);
    m_player->stop();
    m_player->setPlaylist(jazz_playlist);
    m_player->setVolume(70);                    // Устанавливаем громкость воспроизведения треков
    jazz_playlist->setPlaybackMode(QMediaPlaylist::Loop);
    m_player->play();

}

void WidgetMusic::on_rockButton_clicked()
{
    //QMediaPlayer::stop;
  emit m_player->stop();
    m_player->setPlaylist(rock_playlist);
    m_player->setVolume(70);                    // Устанавливаем громкость воспроизведения треков
    rock_playlist->setPlaybackMode(QMediaPlaylist::Loop);
  emit  m_player->play();
}

void WidgetMusic::on_popButton_clicked()
{
    m_player->stop();
    m_player->setPlaylist(pop_playlist);
    m_player->setVolume(70);                    // Устанавливаем громкость воспроизведения треков
    pop_playlist->setPlaybackMode(QMediaPlaylist::Loop);
    m_player->play();
}
void WidgetMusic::on_rRollButton_clicked()
{
    m_player->stop();
    m_player->setPlaylist(rRoll_playlist);
    m_player->setVolume(70);                    // Устанавливаем громкость воспроизведения треков
    rRoll_playlist->setPlaybackMode(QMediaPlaylist::Loop);
    m_player->play();
}
void WidgetMusic::on_classicButton_clicked()
{
    m_player->stop();
    m_player->setPlaylist(classic_playlist);
    m_player->setVolume(70);                    // Устанавливаем громкость воспроизведения треков
    classic_playlist->setPlaybackMode(QMediaPlaylist::Loop);
   emit m_player->play();
}
void WidgetMusic::on_RnbButton_clicked()
{
    m_player->stop();
    m_player->setPlaylist(Rnb_playlist);
    m_player->setVolume(70);                    // Устанавливаем громкость воспроизведения треков
    Rnb_playlist->setPlaybackMode(QMediaPlaylist::Loop);
    m_player->play();
}
void WidgetMusic::on_pauseButton_clicked()
{
    m_player->stop();
}



WidgetMusic::~WidgetMusic()
{
    //    delete ui;
    delete m_playListModel;
    delete jazz_playlist;
    delete rock_playlist;
    delete pop_playlist;
    delete rRoll_playlist;
    delete classic_playlist;
    delete Rnb_playlist;
    delete m_player;
}

// // С помощью диалога выбора файлов делаем множественный выбор mp3 файлов
// QStringList files = QFileDialog::getOpenFileNames(this,
//                                                   tr("Open files"),
//                                                   QString(),
//                                                   tr("Audio Files (*.mp3)"));

// Далее устанавливаем данные по именам и пути к файлам
// в плейлист и таблицу отображающую плейлист
// foreach (QString filePath, files) {
//     QList<QStandardItem *> items;
//     items.append(new QStandardItem(QDir(filePath).dirName()));
//     items.append(new QStandardItem(filePath));
//     m_playListModel->appendRow(items);
//     m_playlist->addMedia(QUrl(filePath));
