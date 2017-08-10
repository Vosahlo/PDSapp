//
// Created by MNL on 6. 7. 2017.
//

#ifndef PDSAPP_STAT_H
#define PDSAPP_STAT_H
#include <QtCore/QString>
#include <QtCore/QList>



class Stat {



public:
    QString name;
    QString shortName;
    int vybor;
    bool here;
    Stat(QString name, QString shortName, int vybor, bool here= true);
};

extern  Stat staty[];
extern  const int POCET_STATU[];





#endif //PDSAPP_STAT_H
