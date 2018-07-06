QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = KompisUSB
TEMPLATE = app
DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp \
        kompis.cpp \
        aboutwindow.cpp \
        settings.cpp \
        commands.cpp

HEADERS += \
        headers/kompis.h \
        headers/aboutwindow.h \
        headers/settings.h

FORMS += \
        design/kompis.ui \
        design/aboutwindow.ui \
        design/settings.ui

RESOURCES += \
        resources.qrc \
