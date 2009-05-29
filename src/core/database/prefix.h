/***************************************************************************
 *   Copyright (C) 2008, 2009 by Malakhov Alexey                           *
 *   brezerk@gmail.com                                                     *
 *                                                                         *
 *   This program is free software: you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation, either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 *                                                                         *
 *   In addition, as a special exception, the copyright holders give       *
 *   permission to link the code of this program with any edition of       *
 *   the Qt library by Trolltech AS, Norway (or with modified versions     *
 *   of Qt that use the same license as Qt), and distribute linked         *
 *   combinations including the two.  You must obey the GNU General        *
 *   Public License in all respects for all of the code used other than    *
 *   Qt.  If you modify this file, you may extend this exception to        *
 *   your version of the file, but you are not obligated to do so.  If     *
 *   you do not wish to do so, delete this exception statement from        *
 *   your version.                                                         *
 ***************************************************************************/

#ifndef PREFIX_H
#define PREFIX_H

#include <config.h>

#include <QList>
#include <QString>
#include <QStringList>
#include <QSqlQuery>
#include <QDebug>
#include <QVariant>


/*!
 * \class Prefix
 * \ingroup database
 * \brief This class provide database functions for prefix table.
 *
 */
class Prefix
{
public:
    //! Class constructor.
    Prefix();

   /*! \brief This function gets requested table fields from prefix table.
    *
    * \param  fields  List of table fields names.
    * \return Return QList of QStringList with selected value or -1 on error.
    */
    QList<QStringList> getFields(const QStringList fields) const;

   /*! \brief This function get requested table field from prefix table.
    *
    * \param  fields  A table field names.
    * \return Return a table field value or -1 on error.
    */
    QString getField(const QString field) const;
};

#endif // PREFIX_H