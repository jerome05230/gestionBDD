#-------------------------------------------------
#
# Project created by QtCreator 2017-02-27T08:37:29
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gestionBDD
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialoglogin.cpp \
    dialogabout.cpp

HEADERS  += mainwindow.h \
    dialoglogin.h \
    dialogabout.h

FORMS    += mainwindow.ui \
    dialoglogin.ui \
    dialogabout.ui


TRANSLATIONS += gestionBDD_fr_FR.ts\
            gestionBDD_es.ts\
            gestionDBB_it.ts\
            gestionBDD_jp.ts

RESOURCES += \
    Ressources.qrc
