#-------------------------------------------------
#
# Project created by QtCreator 2013-09-19T16:36:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ControllersAutotestQt
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ../../math/AutotestController/autotestcontroller.cpp

HEADERS  += mainwindow.h \
    ../../math/AutotestController/autotestcontroller.h

FORMS    += mainwindow.ui
