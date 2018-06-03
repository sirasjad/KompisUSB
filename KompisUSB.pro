QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = KompisUSB
TEMPLATE = app
DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp \
        kompis.cpp

HEADERS += \
        kompis.h

FORMS += \
        kompis.ui

RESOURCES += \
    resources.qrc
