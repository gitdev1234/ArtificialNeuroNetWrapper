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
INCLUDEPATH += ../include/

LIBS += -lcurl


SOURCES +=  \
    src/DataBuffer.cpp \
    src/ArtificialNeuroNet.cpp \
    src/ANNWrapper.cpp \
    src/LogWriter.cpp \
    src/SLevel.cpp \
    test/main.cpp \
    main_old.cpp \
    src/DBInterface.cpp \
    src/HTTPRequest.cpp

HEADERS += \
    include/DataBuffer.h \
    include/ArtificialNeuroNet.h \
    include/ANNWrapper.h \
    include/Config.h \
    include/LogWriter.h \
    include/SLevel.h \
    include/catch.hpp \
    include/DBInterface.h \
    include/HTTPRequest.h
