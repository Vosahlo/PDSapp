//
// Created by qwerty on 3. 9. 2017.
//

#include "FrontaStatu.h"

FrontaStatu::FrontaStatu() {
    items = nullptr;
}

void FrontaStatu::addSpeech(int index) {
    FrontaItem *item = new FrontaItem();
    item -> stat = &staty[index];
    FrontaItem *pom = items;
    if (!items) {
        items = item;
        active = 0;
    } else {
        while (pom->dalsi) pom = pom->dalsi;
        pom->dalsi = item;
    }
    emit changed();
}

void FrontaStatu::addRSpeech(int index) {
    FrontaItem *item = new FrontaItem();
    item -> stat = &staty[index];
    FrontaItem *pom = items;
    if (!items) {
        items = item;
    } else {
        //while (pom->dalsi) pom = pom->dalsi;
        while (pom->reakce) pom = pom->reakce;
        pom->reakce = item;
    }

    emit changed();
}

void FrontaStatu::next() {
    if (!items)
        return;
    active++;
    FrontaItem *pom = items;
    bool smazat = false;
    for (int i = 0; i < active; ++i) {
        if (!pom->reakce) {
            smazat = true;
            break;
        }
        pom = pom->reakce;
    }
    if (smazat) {

        while (items->reakce) {
            pom = items->reakce;
            items->reakce = items->reakce->reakce;
            delete pom;
        }
        pom = items;
        items = items->dalsi;
        delete pom;
        active = (items) ? 0 : -1;
    }
    emit changed();
}
