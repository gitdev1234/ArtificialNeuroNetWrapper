#-------------------------------------------------
#
# Project created by QtCreator 2016-08-11T13:21:21
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = ArtificialNeuroNet_Wrapper
CONFIG   += console
CONFIG   -= app_bundle
CONFIG   += c++11

TEMPLATE = app

INCLUDEPATH += include/


SOURCES += main.cpp \
    src/DataBuffer.cpp \
    src/logwriter.cpp \
    src/slevel.cpp \
    src/ArtificialNeuroNet.cpp \
    src/ANNWrapper.cpp

HEADERS += \
    include/DataBuffer.h \
    include/logwriter.h \
    include/slevel.h \
    include/config.h \
    include/ArtificialNeuroNet.h \
    include/ANNWrapper.h
