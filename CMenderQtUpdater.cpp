/*
* SPDX-License-Identifier: LGPL-2.1
*/


#include "CMenderQtUpdater.h"

/**
 * @brief CMenderQtUpdater::CMenderQtUpdater
 */
CMenderQtUpdater::CMenderQtUpdater()
{
    /**
      * DBUS INIT
      **/
    if (!QDBusConnection::systemBus().isConnected())
    {
        qDebug() << "DBUS not started !";
    }
    if (!QDBusConnection::systemBus().registerService(SERVICE_NAME))
    {
        qDebug() << "Already Registered !";
    }

    QDBusConnection::systemBus().registerObject(PROPERTY_PATH,
                                               this,
                                               QDBusConnection::ExportAllInvokables);
}

/**
 * @brief CMenderQtUpdater::~CMenderQtUpdater
 */
CMenderQtUpdater::~CMenderQtUpdater()
{
    
}

/**
 * @brief CMenderQtUpdater::enableUpdate
 * @return
 */
quint8 CMenderQtUpdater::enableUpdate()
{
    qDebug () << " mender: new update available";

    // TODO

    return DOWNLOAD_OK;
}

/**
 * @brief CMenderQtUpdater::enableReboot
 * @return
 */
quint8 CMenderQtUpdater::enableReboot()
{
    qDebug () << " mender: Reboot is needed";

    // TODO

    return REBOOT_NOK;
}



