//
// Created by mwiner on 12/13/24.
//

#include "smbm.h"
smbm::smbm() {
    settings = new QSettings("SantaAnalog","PS2SMBM");
    //default values
    if (!settings->contains("game_folder_path")){
        settings->setValue("game_folder_path","./gamefolder");
    }
    if (!settings->contains("db_path")){
        settings->setValue("db_path","./resources/db/smbm.db");
    }
}

smbm::~smbm() {
    delete settings;
}

QString smbm::getGameFolderPath() {
    return settings->value("game_folder_path").toString();
}
void smbm::setGameFolderPath(const QString &path) {
    settings->setValue("game_folder_path",path);
}
QString smbm::getDBPath() {
    return settings->value("db_path").toString();
}
void smbm::setDBPath(const QString &path) {
    settings->setValue("db_path",path);
}