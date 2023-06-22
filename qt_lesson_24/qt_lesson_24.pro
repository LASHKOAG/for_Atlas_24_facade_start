TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    car.cpp \
    cleaning.cpp \
    fix.cpp \
    seller.cpp

HEADERS += \
    car.h \
    cleaning.h \
    fix.h \
    seller.h
