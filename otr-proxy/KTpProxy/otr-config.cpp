/***************************************************************************
 *   Copyright (C) 2014 by Marcin Ziemiński <zieminn@gmail.com>            *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2.1 of the License, or   *
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
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA            *
 ***************************************************************************/

#include "otr-config.h"
#include "ktp-proxy-config.h"

#include <KGlobal>
#include <KStandardDirs>

#include <QLatin1String>

namespace OTR
{
    QString Config::saveLocation()
    {
        return KGlobal::dirs()->saveLocation("data", QLatin1String("ktp_proxy/"), true);
    }

    OtrlPolicy Config::getPolicy() const
    {
        KTpProxyConfig::EnumOTRPolicy policy =
            static_cast<KTpProxyConfig::EnumOTRPolicy>(KTpProxyConfig::oTRPolicy());

        switch(policy) {
            case KTpProxyConfig::Always:
                return OTRL_POLICY_ALWAYS;
            case KTpProxyConfig::Opportunistic:
                return OTRL_POLICY_OPPORTUNISTIC;
            case KTpProxyConfig::Manual:
                return OTRL_POLICY_MANUAL;
            case KTpProxyConfig::Never:
                return OTRL_POLICY_NEVER;
        }
        return OTRL_POLICY_MANUAL;
    }

    void Config::setPolicy(OtrlPolicy policy)
    {
        switch(policy) {
            case OTRL_POLICY_ALWAYS:
                KTpProxyConfig::setOTRPolicy(KTpProxyConfig::Always);
                return;
            case OTRL_POLICY_OPPORTUNISTIC:
                KTpProxyConfig::setOTRPolicy(KTpProxyConfig::Opportunistic);
                return;
            case OTRL_POLICY_MANUAL:
                KTpProxyConfig::setOTRPolicy(KTpProxyConfig::Manual);
                return;
            case OTRL_POLICY_NEVER:
                KTpProxyConfig::setOTRPolicy(KTpProxyConfig::Never);
                return;
        }
    }
}
