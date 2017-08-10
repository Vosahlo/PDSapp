//
// Created by MNL on 17. 7. 2017.
//

#ifndef PDSAPP_QFRONTALAYOUT_H
#define PDSAPP_QFRONTALAYOUT_H
#include <QtWidgets/QWidget>
#include <QtWidgets/QGridLayout>


class QFrontaWidget: public QWidget {

Q_OBJECT
public:
    explicit QFrontaWidget(QWidget *parent = 0);

public slots:
    void addSpeech(int index);
    void addRSpeech(int index);
    void next();
   // void remove();



private:
    QGridLayout *layout;
    int prvni = 0;
    int posledni= 0;
    int Rprvni = 0;
    int Rposledni = 0;


};


#endif //PDSAPP_QFRONTALAYOUT_H
