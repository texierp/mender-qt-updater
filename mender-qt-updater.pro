QT -= gui
QT += core dbus

CONFIG += c++11 console
CONFIG -= app_bundle

SOURCES += main.cpp \
    CMenderQtUpdater.cpp

TARGET = ServiceQtUpdater

target.path = /usr/bin/
INSTALLS += target dbus-etc dbus-usr

dbus-etc.files = DBUS/org.mender.updater.conf
dbus-etc.path = /etc/dbus-1/system.d/

dbus-usr.files = DBUS/org.mender.updater
dbus-usr.path = /usr/share/dbus-1/system-services/

HEADERS += \
    CMenderQtUpdater.h
