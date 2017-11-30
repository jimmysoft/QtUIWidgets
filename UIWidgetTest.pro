#-------------------------------------------------
#
# Project created by QtCreator 2017-11-29T15:45:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UIWidgetTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    loginwindow.cpp \
    timingchartwindow.cpp \
    systemlogwindow.cpp \
    errorlogwindow.cpp

HEADERS  += mainwindow.h \
    loginwindow.h \
    timingchartwindow.h \
    systemlogwindow.h \
    errorlogwindow.h

FORMS    += mainwindow.ui \
    loginwindow.ui \
    timingchartwindow.ui \
    systemlogwindow.ui \
    errorlogwindow.ui
