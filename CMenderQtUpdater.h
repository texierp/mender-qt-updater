/*
* SPDX-License-Identifier: LGPL-2.1
*/

#ifndef CMENDERQTUPDATER_H
#define CMENDERQTUPDATER_H

#include <QFile>
#include <QDebug>
#include <QTimer>
#include <QtDBus/QDBusConnection>

#define SERVICE_NAME        "org.mender.updater"
#define PROPERTY_PATH       "/"

#define STATUS_OK       0
#define STATUS_ERROR    1
#define LATER           21

class CMenderQtUpdater: public QObject
{
    Q_OBJECT
public:
    CMenderQtUpdater();
    ~CMenderQtUpdater();

    Q_INVOKABLE quint8 syncEnterState();
    Q_INVOKABLE quint8 enableUpdate();
    Q_INVOKABLE quint8 enableReboot();
    Q_INVOKABLE quint8 enableRollback();

protected:

private:

protected slots:
};

#endif // CMENDERQTUPDATER_H
