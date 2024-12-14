//
// Created by mwiner on 12/13/24.
//

#ifndef PS2SMBM_SMBM_H
#define PS2SMBM_SMBM_H
#include <QString>
#include <QSettings>

class smbm {
public:
    smbm();
    ~smbm();

    QString getGameFolderPath();
    void setGameFolderPath(const QString &path);

    QString getDBPath();
    void setDBPath(const QString &path);

private:
    QSettings *settings;

};


#endif //PS2SMBM_SMBM_H
