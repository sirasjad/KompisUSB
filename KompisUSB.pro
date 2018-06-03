QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = KompisUSB
TEMPLATE = app
DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp \
        kompis.cpp \
        aboutwindow.cpp

HEADERS += \
        kompis.h \
        aboutwindow.h

FORMS += \
        kompis.ui \
        aboutwindow.ui

RESOURCES += \
        resources.qrc
