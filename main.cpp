/*
* SPDX-License-Identifier: LGPL-2.1
*/

#include <QCoreApplication>
#include <QDebug>
#include "CMenderQtUpdater.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    new CMenderQtUpdater;

    return a.exec();
}
