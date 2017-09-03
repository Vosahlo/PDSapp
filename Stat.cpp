//
// Created by MNL on 6. 7. 2017.
//

#include "Stat.h"

const int POCET_STATU[] = {12, 0, 17, 12};


// vybory 1 2 3 UNSC(4)

Stat staty[] = {

//        Stat("Afgánistán", "af", 1),
        Stat("Austrálie", "au", 1),
//        Stat("Brazílie", "br", 1),
        Stat("Čína", "cn", 1),
//        Stat("Egypt", "eg", 1),
//        Stat("Estonsko", "ee", 1),
        Stat("Francie", "fr", 1),
//        Stat("Indie", "in", 1),
        Stat("Izrael", "il", 1),
        Stat("Japonsko", "jp", 1),
//        Stat("Jihoafrická republika", "za", 1),
        Stat("Jižní Korea", "kr", 1),
//        Stat("Kuba", "cu", 1),
        Stat("Německo", "de", 1),
//        Stat("Pákistán", "pk", 1),
        Stat("Ruská federace", "ru", 1),
//        Stat("Spojené království", "gb", 1),
        Stat("Spojené státy", "us", 1),
        Stat("Švýcarsko", "ch", 1),
        Stat("Turecko", "tr", 1),
        Stat("Mezinárodní měnový fond", "mf", 1), //pozorovatelská organizace

//        Stat("Afghánistán", "af", 2),
//        Stat("Brazílie", "br", 2),
//        Stat("Čína", "cn", 2),
//        Stat("Estonsko", "ee", 2),
//        Stat("Francie", "fr", 2),
//        Stat("Indie", "in", 2),
//        Stat("Itálie", "it", 2),
//        Stat("Izrael", "il", 2),
//        Stat("Japonsko", "jp", 2),
//        Stat("Kuba", "cu", 2),
//        Stat("Mongolsko", "mn", 2),
//        Stat("Německo", "de", 2),
//        Stat("Pákistán", "pk", 2),
//        Stat("Ruská federace", "ru", 2),
//        Stat("Singapur", "sg", 2),
//        Stat("Spojené království", "gb", 2),
//        Stat("Spojené státy", "us", 2),
//        Stat("Švýcarsko", "ch", 2),
//        Stat("Turecko", "tr", 2),
//        Stat("Uruguay", "uy", 2),
//        Stat("ADB", "cz", 2),
//        Stat("AIIB", "cz", 2),
//        Stat("Evropská unie", "cz", 2),
//        Stat("MMF", "cz", 2),
//        Stat("Světová banka", "cz", 2),

        Stat("Austrálie", "au", 3),
        Stat("Čína", "cn", 3),
        Stat("Estonsko", "ee", 3),
        Stat("Egypt", "eg", 3),
        Stat("Francie", "fr", 3),
        Stat("Indie", "in", 3),
        Stat("Itálie", "it", 3),
//        Stat("Izrael", "il", 3),
        Stat("Japonsko", "jp", 3),
//        Stat("Jihoafrická republika", "za", 3),
        Stat("Jižní Korea", "kr", 3),
        Stat("Kuba", "cu", 3),
        Stat("Mongolsko", "mn", 3),
        Stat("Německo", "de", 3),
        Stat("Ruská federace", "cz", 3),
//        Stat("Singapur", "sg", 3),
//        Stat("Spojené království", "gb", 3),
        Stat("Spojené státy", "us", 3),
        Stat("Turecko", "tr", 3),
        Stat("Uruguay", "uy", 3),
        Stat("Mezinárodní měnový fond", "mf", 3), //pozorovatelská organizace

//        Stat("Bolivia", "bo", 4),
        Stat("China", "cn", 4), //veto right
//        Stat("Egypt", "eg", 4),
//        Stat("Ethiopia", "et", 4),
        Stat("France", "fr", 4), //veto right
//        Stat("Italy", "it", 4),
//        Stat("Japan", "jp", 4),
        Stat("Kazakhstan", "kz", 4),
        Stat("Russian Federation", "ru", 4), //veto right
//        Stat("Senegal", "sn", 4),
        Stat("Sweden", "se", 4),
        Stat("United Kingdom", "gb", 4), //veto right
        Stat("United States", "us", 4), //veto right
//        Stat("Ukraine", "ua", 4),
//        Stat("Uruguay", "uy", 4),
//        Stat("Denmark", "dk", 4), //observer
//        Stat("Germany", "de", 4), //observer
//        Stat("India", "in", 4), //observer
//        Stat("Iran", "ir", 4), //observer
//        Stat("Iraq", "iq", 4), //observer
        Stat("Israel", "il", 4), //observer
//        Stat("Saudi Arabia", "sa", 4), //observer
        Stat("Singapore", "sg", 4), //observer
        Stat("South Korea", "kr", 4), //observer
//        Stat("United Arab Emirates", "ae", 4) //observer
        Stat("International Monetary Fund", "mf", 4), //observer

};


Stat::Stat(QString name, QString shortName, int vybor, bool here) {
    this->name = name;
    this->shortName = shortName;
    this->vybor = vybor;
    this->here = here;
}