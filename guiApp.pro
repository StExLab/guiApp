#-------------------------------------------------
#
# Project created by QtCreator 2017-08-14T07:54:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = guiApp
TEMPLATE = app


SOURCES +=  main.cpp\
            mainwindow.cpp \
            mydialog.cpp \
            ohlc.cpp \
            ../../chartLib/QCustomPlot/qcustomplot.cpp

HEADERS  += mainwindow.h \
            mydialog.h \
            ohlc.h \
            ../../chartLib/QCustomPlot/qcustomplot.h

FORMS    += mainwindow.ui \
            mydialog.ui \
            ohlc.ui
