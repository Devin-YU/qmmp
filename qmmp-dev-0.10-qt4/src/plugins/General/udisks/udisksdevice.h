/***************************************************************************
 *   Copyright (C) 2010 by Ilya Kotov                                      *
 *   forkotov02@hotmail.ru                                                 *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.         *
 ***************************************************************************/
#ifndef UDISKSDEVICE_H
#define UDISKSDEVICE_H

#include <QObject>
#include <QDBusObjectPath>
#include <QDBusMetaType>
#include <QList>
#include <QVariant>

class QDBusInterface;

/**
    @author Ilya Kotov <forkotov02@hotmail.ru>
*/
class UDisksDevice : public QObject
{
    Q_OBJECT
public:
    UDisksDevice(QDBusObjectPath o, QObject *parent = 0);

    ~UDisksDevice();

    QVariant property (const QString &key);
    QDBusObjectPath objectPath() const;

signals:
    void changed();


private:
    QDBusInterface *m_interface;
    QDBusObjectPath m_path;
};

#endif
