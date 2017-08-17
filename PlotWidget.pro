TEMPLATE = app

win32:TARGET = PlotWidget
!win32:TARGET = plotwidget

DESTDIR = bin
INCLUDEPATH += source

CONFIG += release warn_on embed_manifest_dll c++11 qt
CONFIG -= debug

QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

!win32:MOC_DIR = release
!win32:OBJECTS_DIR = release
!win32:RCC_DIR = release

# --------------------------------------------------------------------------------------------------

SOURCES += \
    source/PlotAxis.cpp \
    source/PlotLegend.cpp \
    source/PlotChartWidget.cpp \
    source/PlotGraphWidget.cpp \
    source/PlotSeries.cpp \
    source/PlotWidget.cpp \
    source/MainWindow.cpp \
    source/main.cpp

HEADERS += \
    source/PlotAxis.h \
    source/PlotLegend.h \
    source/PlotChartWidget.h \
    source/PlotGraphWidget.h \
    source/PlotSeries.h \
    source/PlotWidget.h \
    source/MainWindow.h
