//
// Created by MNL on 6. 7. 2017.
//

#ifndef PDSAPP_SIDEWINDOW_H
#define PDSAPP_SIDEWINDOW_H
#include <QDialog>
#include "QFrontaWidget.h"


class SideWindow : public QDialog {
    Q_OBJECT
public:
    SideWindow();
    QFrontaWidget * frontaWidget;
private:


public slots:
    void addVFlag();
    void addHFlag();
    void removeLane();
    void updateTopic();
};


#endif //PDSAPP_SIDEWINDOW_H