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

#define DOWNLOAD_OK         0
#define REBOOT_NOK          1

class CMenderQtUpdater: public QObject
{
    Q_OBJECT
public:
    CMenderQtUpdater();
    ~CMenderQtUpdater();

    Q_INVOKABLE quint8 enableUpdate();
    Q_INVOKABLE quint8 enableReboot();

protected:

private:

protected slots:
};

#endif // CMENDERQTUPDATER_H
