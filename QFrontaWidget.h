//
// Created by MNL on 17. 7. 2017.
//

#ifndef PDSAPP_QFRONTALAYOUT_H
#define PDSAPP_QFRONTALAYOUT_H
#include <QtWidgets/QWidget>
#include <QtWidgets/QGridLayout>
#include <QtCore/QSignalMapper>
#include "FrontaStatu.h"


class QFrontaWidget: public QWidget {

Q_OBJECT
public:
    explicit QFrontaWidget(QWidget *parent = 0, FrontaStatu *frontaStatu = nullptr);
    void clear();
public slots:
    void refresh();
signals:
    void double_click(int i);
    void double_click_r(int i);
private:
    QGridLayout *layout;
    QSignalMapper * signal_mapper,*signal_mapper_r;
    FrontaStatu *frontaStatu = nullptr;
private slots:

};


#endif //PDSAPP_QFRONTALAYOUT_H
