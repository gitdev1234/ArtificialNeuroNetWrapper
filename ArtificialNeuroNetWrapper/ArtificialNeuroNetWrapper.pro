#-------------------------------------------------
#
# Project created by QtCreator 2016-08-11T13:21:21
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = ArtificialNeuroNetWrapper
CONFIG   += console
CONFIG   -= app_bundle
CONFIG   += c++11

TEMPLATE = app

INCLUDEPATH += include/


SOURCES += main.cpp \
    src/ArtificialNeuroNetWrapper.cpp \
    src/DataBuffer.cpp \
    src/logwriter.cpp \
    src/slevel.cpp

HEADERS += \
    include/ArtificialNeuronetWrapper.h \
    include/DataBuffer.h \
    include/logwriter.h \
    include/slevel.h \
    include/config.h
