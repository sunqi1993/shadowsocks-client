//
// Created by pikachu on 17-8-18.
//

#ifndef SHADOWSOCKS_CLIENT_UPDATESERVICEIMPL_OLD_IMPL_H
#define SHADOWSOCKS_CLIENT_UPDATESERVICEIMPL_OLD_IMPL_H

#include <service/UpdateService.h>
#include <util/UpdateChecker.h>
#include "common/QCore.h"
#include "common/QGui.h"
#include "common/QWidgets.h"
#include "common/dtk.h"

class UpdateServiceImpl_old_impl : public UpdateService {
Q_OBJECT
public:
    UpdateServiceImpl_old_impl(QObject *parent);

    void checkUpdate() override;

    void setCheckForUpdatesAtStartup(bool b) override;

    void setCheckPrereleaseVersion(bool b) override;

    bool isCheckForUpdatesAtStartup() override;

    bool isCheckPrereleaseVersion() override;

    void updateLocalPacFromGFWList() override;

private:
    UpdateChecker updateChecker;
};


#endif //SHADOWSOCKS_CLIENT_UPDATESERVICEIMPL_OLD_IMPL_H
