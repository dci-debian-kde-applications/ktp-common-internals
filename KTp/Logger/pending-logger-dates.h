/*
 * Copyright (C) 2013  Daniel Vrátil <dvratil@redhat.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef KTP_PENDINGLOGGERDATES_H
#define KTP_PENDINGLOGGERDATES_H

#include <KTp/Logger/pending-logger-operation.h>
#include <KTp/ktpcommoninternals_export.h>

#include <TelepathyQt/Types>

namespace KTp {

class LogEntity;

/**
 * @brief An operation that will retrieve list of dates for which there are any
 *        logs in each backend and merges them together.
 *
 * The operation will emit finished(KTp::PendingLoggerOperation*) signal when
 * all dates were retrieved. When an error occurs in any backend hasError()
 * will be set to true. Use error() to retrieve the error message.
 *
 * @since 0.7
 * @author Daniel Vrátil <dvratil@redhat.com>
 */
class KTPCOMMONINTERNALS_EXPORT PendingLoggerDates : public KTp::PendingLoggerOperation
{
    Q_OBJECT

  public:
    /**
     * Destructor.
     */
    virtual ~PendingLoggerDates();

    /**
     * Returns account for which the dates are queried.
     */
    Tp::AccountPtr account() const;

    /**
     * Returns entity for which the dates are queried.
     */
    KTp::LogEntity entity() const;

    /**
     * Returns list of retrieved dates. The list is always sort in ascending
     * order.
     */
    QList<QDate> dates() const;

  protected:
    explicit PendingLoggerDates(const Tp::AccountPtr &account,
                                const KTp::LogEntity &entity,
                                QObject *parent = 0);

    void setDates(const QList<QDate> &dates);

    class Private;
    Private * const d;
};

} // namespace KTp

#endif // KTP_PENDINGLOGGERDATES_H
