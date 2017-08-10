TEMPLATE = app

win32:TARGET = PlotWidget
!win32:TARGET = plotwidget

DESTDIR = bin
INCLUDEPATH += source

CONFIG += release warn_on embed_manifest_dll c++11 qt
CONFIG -= debug
QT += widgets

!win32:MOC_DIR = release
!win32:OBJECTS_DIR = release
!win32:RCC_DIR = release

# --------------------------------------------------------------------------------------------------

SOURCES += \
    source/PlotChartWidget.cpp \
    source/PlotGraphWidget.cpp \
    source/MainWindow.cpp \
    source/main.cpp

HEADERS += \
    source/PlotChartWidget.h \
    source/PlotGraphWidget.h \
    source/MainWindow.h
