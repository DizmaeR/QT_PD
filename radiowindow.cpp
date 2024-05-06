#include "radiowindow.h"
//#include "widgetmusic.h"
#include "ui_radiowindow.h"

RadioWindow::RadioWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RadioWindow)
{
    ui->setupUi(this);

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

    connect(ui->jazzButton, &QPushButton::clicked, this, &RadioWindow::on_jazzButton_clicked);
    connect(ui->rockButton, &QPushButton::clicked, this, &RadioWindow::on_rockButton_clicked);
    connect(ui->popButton, &QPushButton::clicked, this, &RadioWindow::on_popButton_clicked);
    connect(ui->rRollButton, &QPushButton::clicked, this, &RadioWindow::on_rRollButton_clicked);
    connect(ui->RnbButton, &QPushButton::clicked, this, &RadioWindow::on_RnbButton_clicked);
    connect(ui->classicButton, &QPushButton::clicked, this, &RadioWindow::on_classicButton_clicked);
}

RadioWindow::~RadioWindow()
{
    delete ui;
}

void RadioWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);


    QPixmap Back("D:/Programing/Multimedia/recources/Background.png"); //D:/Programing/Multimedia/Background.png
    QPixmap Wifi("D:/Programing/Multimedia/recources/Wifi.png");
    QPixmap Autoicon("D:/Programing/Multimedia/recources/Auto icon.png");
    QPixmap Radioicon("D:/Programing/Multimedia/recources/Radio icon.png");

    QPixmap Charge("D:/Programing/Multimedia/recources/Charge.png");
    // QPixmap Car("D:/Programing/Multimedia/recources/Main car.png");
    // QPixmap Pause("D:/Programing/Multimedia/recources/Music pause.png");
    // QPixmap ArLeft("D:/Programing/Multimedia/recources/Arrows left.png");
    // QPixmap ArRight("D:/Programing/Multimedia/recources/Arrows right.png");

    //Задний фон
    painter.drawPixmap (QPoint(0, 20), Back);


    //Верхняя панель
    painter.setPen("gray");

    QBrush brush;
    brush.setStyle(Qt::SolidPattern);

    painter.setBrush(Qt::gray);
    painter.drawRect(0, 0, 1440, 40);               //Добавить время и проценты заряда
    painter.drawPixmap (QPoint(1400, 9), Wifi);


    //Нижняя панель
    brush.setStyle(Qt::SolidPattern);

    painter.setBrush(Qt::black);
    painter.drawRect(0, 820, 1440, 80);
    painter.drawPixmap (QPoint(25, 845), Autoicon);
    painter.drawPixmap (QPoint(1330, 840), Radioicon);

    painter.drawPixmap (QPoint(10, 5), Charge);

//    painter.drawPixmap(0, 0, 500, 800, Car);

    // QPixmap Charge("D:/Programing/Multimedia/recources/Charge.png");
     QPixmap Pause("D:/Programing/Multimedia/recources/Music pause.png");
    // QPixmap ArLeft("D:/Programing/Multimedia/recources/Arrows left.png");
    // QPixmap ArRight("D:/Programing/Multimedia/recources/Arrows right.png");

    painter.drawPixmap (QPoint(10, 5), Charge);


    //RadioPad
    painter.setPen("darkGray");

    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(Qt::darkGray);

    QRectF RadioPad(120, 80, 1200, 700);
    painter.drawRoundedRect(RadioPad, 20.0, 15.0);

    painter.setPen("gray");
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(Qt::gray);


    QRectF RadioPlayer(194, 111, 1053, 274);
    painter.drawRoundedRect(RadioPlayer, 20.0, 15.0);

    // painter.drawPixmap (QPoint(594, 465), ArLeft);
    painter.drawPixmap(704, 469, 40, 64, Pause); //86 painter.drawPixmap (QPoint(704, 469), Pause);
    // painter.drawPixmap (QPoint(790, 465), ArRight); //32+81

    //Radio Signal

    painter.setPen("lightGray");
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(Qt::lightGray);

    painter.drawRect(1108, 256, 6, 19);
    painter.drawRect(1121, 243, 6, 32);

    painter.setPen("darkGray");
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(Qt::darkGray);

    painter.drawRect(1134, 237, 6, 39);
    painter.drawRect(1147, 222, 6, 54);


    //Radio Station

    painter.setPen("gray");
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(Qt::gray);

    QRectF FM1(193, 624, 150, 50);
    painter.drawRoundedRect(FM1, 20.0, 15.0);

    QRectF FM2(374, 624, 150, 50);
    painter.drawRoundedRect(FM2, 20.0, 15.0);

    QRectF FM3(555, 624, 150, 50);
    painter.drawRoundedRect(FM3, 20.0, 15.0);

    QRectF FM4(736, 624, 150, 50);
    painter.drawRoundedRect(FM4, 20.0, 15.0);

    QRectF FM5(917, 624, 150, 50);
    painter.drawRoundedRect(FM5, 20.0, 15.0);

    QRectF AM(1098, 624, 150, 50);
    painter.drawRoundedRect(AM, 20.0, 15.0);
}


void RadioWindow::on_jazzButton_clicked()
{
    // connect(widget->jazzButton, &QToolButton::clicked, m_player, &QMediaPlayer::play);
    m_player->stop();
    m_player->setPlaylist(jazz_playlist);
    m_player->setVolume(70);                    // Устанавливаем громкость воспроизведения треков
    jazz_playlist->setPlaybackMode(QMediaPlaylist::Loop);
    m_player->play();

}

void RadioWindow::on_rockButton_clicked()
{
    //QMediaPlayer::stop;
    emit m_player->stop();
    m_player->setPlaylist(rock_playlist);
    m_player->setVolume(70);                    // Устанавливаем громкость воспроизведения треков
    rock_playlist->setPlaybackMode(QMediaPlaylist::Loop);
    emit  m_player->play();
}

void RadioWindow::on_popButton_clicked()
{
    m_player->stop();
    m_player->setPlaylist(pop_playlist);
    m_player->setVolume(70);                    // Устанавливаем громкость воспроизведения треков
    pop_playlist->setPlaybackMode(QMediaPlaylist::Loop);
    m_player->play();
}
void RadioWindow::on_rRollButton_clicked()
{
    m_player->stop();
    m_player->setPlaylist(rRoll_playlist);
    m_player->setVolume(70);                    // Устанавливаем громкость воспроизведения треков
    rRoll_playlist->setPlaybackMode(QMediaPlaylist::Loop);
    m_player->play();
}
void RadioWindow::on_classicButton_clicked()
{
    m_player->stop();
    m_player->setPlaylist(classic_playlist);
    m_player->setVolume(70);                    // Устанавливаем громкость воспроизведения треков
    classic_playlist->setPlaybackMode(QMediaPlaylist::Loop);
    emit m_player->play();
}
void RadioWindow::on_RnbButton_clicked()
{
    m_player->stop();
    m_player->setPlaylist(Rnb_playlist);
    m_player->setVolume(70);                    // Устанавливаем громкость воспроизведения треков
    Rnb_playlist->setPlaybackMode(QMediaPlaylist::Loop);
    m_player->play();
}
void RadioWindow::on_pauseButton_clicked()
{
    m_player->stop();
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
