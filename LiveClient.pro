#-------------------------------------------------
#
# Project created by QtCreator 2016-06-24T09:58:57
#
#-------------------------------------------------

QT       += core gui
QT       += xml
QT       += webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LiveClient
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    halldlg.cpp \
    tinyxml2.cpp \
    XmlFile.cpp \
    qwebviewcustom.cpp

HEADERS  += mainwindow.h \
    halldlg.h \
    tinyxml2.h \
    XmlFile.h \
    qwebviewcustom.h

FORMS    += mainwindow.ui \
    halldlg.ui
