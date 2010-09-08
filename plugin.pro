# -------------------------------------------------
# Project created by QtCreator 2010-09-08T11:57:35
# -------------------------------------------------
TEMPLATE = lib
CONFIG += plugin
QT+= core gui
INCLUDEPATH += ../platforma
TARGET = ../platforma/$$qtLibraryTarget(plugin)
SOURCES += plugin.cxx
HEADERS += plugin.hxx
