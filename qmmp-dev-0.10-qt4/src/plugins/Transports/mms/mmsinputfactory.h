/***************************************************************************
 *   Copyright (C) 2010-2013 by Ilya Kotov                                 *
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

#ifndef HTTPINPUTFACTORY_H
#define HTTPINPUTFACTORY_H

#include <QObject>
#include <QStringList>
#include <qmmp/inputsourcefactory.h>

class QTranslator;

/*!
 * @author Ilya Kotov <forkotov02@hotmail.ru>
 */
class MMSInputFactory : public QObject, InputSourceFactory
{
Q_OBJECT
Q_INTERFACES(InputSourceFactory)
public:
    const InputSourceProperties properties() const;
    InputSource *create(const QString &url, QObject *parent = 0);
    void showSettings(QWidget *parent);
    void showAbout(QWidget *parent);
    QTranslator *createTranslator(QObject *parent);
};

#endif // HTTPINPUTFACTORY_H
