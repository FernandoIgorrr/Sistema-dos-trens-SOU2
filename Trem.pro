#-------------------------------------------------
#
# Project created by QtCreator 2015-04-16T11:14:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Trem
TEMPLATE = app


SOURCES += main.cpp\
    coordenada.cpp \
        mainwindow.cpp \
    trem.cpp \
    trilho.cpp \

HEADERS  += mainwindow.h \
    coordenada.h \
    direcao.h \
    tipo.h \
    trem.h \
    trilho.h \

FORMS    += mainwindow.ui
