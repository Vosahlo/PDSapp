//
// Created by MNL on 17. 7. 2017.
//

#include "QFrontaWidget.h"
#include "ClickableLabel.h"
#include "Stat.h"

QFrontaWidget::QFrontaWidget(QWidget *parent) {
    layout = new QGridLayout;
    this->setLayout(layout);
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    signalMapper = new QSignalMapper(this);


}

void QFrontaWidget::addSpeech(int index) {

    ClickableLabel *image = new ClickableLabel(this);
    image->setPixmap(QPixmap::fromImage(QImage(QString(":/flags-mini/%1.png").arg(staty[index].shortName))));
    layout->addWidget(image, posledni, 0);
    image->setMargin(3);

    if (posledni == 0) {
        image->setStyleSheet("background-color: yellow");
    }

    posledni++;

}

void QFrontaWidget::addRSpeech(int index) {
    if (posledni != 0) {
        ClickableLabel *image = new ClickableLabel(this);
        image->setPixmap(QPixmap::fromImage(QImage(QString(":/flags-mini/%1.png").arg(staty[index].shortName))));
        layout->addWidget(image, prvni, Rposledni + 1);
        image->setMargin(3);
        Rposledni++;


    }
}

void QFrontaWidget::next() {
    if (prvni != posledni) {
        if (Rprvni < Rposledni) {
            layout->itemAtPosition(prvni, Rprvni + 1)->widget()->setStyleSheet("background-color: yellow");
            layout->itemAtPosition(prvni, Rprvni)->widget()->setStyleSheet("");
            Rprvni++;
        } else {

            for (int i = Rposledni; i >= 0; --i) {
                ClickableLabel *pom = (ClickableLabel *) layout->itemAtPosition(prvni, i)->widget();
                layout->removeWidget(pom);
                delete (pom);

            }

            prvni++;
            Rprvni = 0;
            Rposledni = 0;

            if (prvni != posledni) {
                layout->itemAtPosition(prvni, Rprvni)->widget()->setStyleSheet("background-color: yellow");
            }
        }
    }

   // void QFrontaWidget::remove() {
//
  //  }

    }



