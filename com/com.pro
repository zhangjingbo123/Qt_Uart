#-------------------------------------------------
#
# Project created by QtCreator 2020-05-02T12:59:02
#
#-------------------------------------------------

QT       += core gui
QT       += serialport
RC_ICONS = haochuang.ico
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = com
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    advanced.cpp \
    database.cpp

HEADERS  += mainwindow.h \
    advanced.h \
    database.h

FORMS    += mainwindow.ui \
    advanced.ui

RESOURCES += \
    haochuang.qrc

QT += sql

