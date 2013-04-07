/*
 * This file is part of telepathy-kde-models-test-ui
 *
 * Copyright (C) 2011 Collabora Ltd. <info@collabora.co.uk>
 *   @Author George Goldberg <george.goldberg@collabora.co.uk>
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
 */

#include "model-view.h"

#include <KAboutData>
#include <KCmdLineArgs>
#include <KDebug>
#include <KApplication>

#include <TelepathyQt/Types>
#include <TelepathyQt/Debug>

#include "KTp/Declarative/telepathy-text-observer.h"
#include "KTp/Declarative/conversations-model.h"
#include "KTp/Declarative/pinned-contacts-model.h"

int main(int argc, char *argv[])
{
    KAboutData aboutData("telepathy-kde-models-test-ui",
                         0,
                         ki18n("Telepathy KDE Models Test UI"),
                         "0.1",
                         ki18n("Telepathy KDE Models Test UI"),
                         KAboutData::License_LGPL,
                         ki18n("(C) 2011 Collabora Ltd"));

    KCmdLineArgs::init(argc, argv, &aboutData);

    KApplication app;

    Tp::registerTypes();
    Tp::enableDebug(false);
    Tp::enableWarnings(true);

    
    PinnedContactsModel *model = new PinnedContactsModel(&app);
    
    TelepathyTextObserver *observer = new TelepathyTextObserver(&app);
    model->setAccountManager(observer->accountManager());
    model->setConversationsModel(observer->conversationModel());
    
    // Set up and show the main widget
    ModelView *mainWidget = new ModelView(model, 0);
    mainWidget->show();

    // Start event loop.
    app.exec();
}

