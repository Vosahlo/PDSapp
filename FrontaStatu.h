//
// Created by qwerty on 3. 9. 2017.
//

#ifndef PDSAPP_FRONTASTATU_H
#define PDSAPP_FRONTASTATU_H


#include <QObject>
#include "Stat.h"

class FrontaStatu : public QObject {
    Q_OBJECT
public:
    explicit FrontaStatu();
    int get_active() {return this->active; };


    struct FrontaItem {
        FrontaItem *dalsi = nullptr;
        FrontaItem *reakce = nullptr;
        Stat *stat = nullptr;
    };

    FrontaItem *get_items() { return this->items; };
public slots:
    void addSpeech(int index);
    void addRSpeech(int index);
    void next();

private:

    FrontaItem *items;
    int active = -1;
};


#endif //PDSAPP_FRONTASTATU_H
