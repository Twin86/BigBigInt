QT += core
QT -= gui

CONFIG += c++11

TARGET = BigBig
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    interface.cpp \
    algorithm.cpp

HEADERS += \
    interface.h \
    algorithm.h
