QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    radiowindow.cpp \
    widgetback.cpp \
    widgethome.cpp \
    widgetmusic.cpp \
    widgetradio.cpp

HEADERS += \
    mainwindow.h \
    radiowindow.h \
    widgetback.h \
    widgethome.h \
    widgetmusic.h \
    widgetradio.h

FORMS += \
    mainwindow.ui \
    radiowindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    recource.qrc \
   # recources.qrc \

