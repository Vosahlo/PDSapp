//
// Created by MNL on 17. 7. 2017.
//

#include "QFrontaWidget.h"
#include "ClickableLabel.h"
#include "Stat.h"

QFrontaWidget::QFrontaWidget(QWidget *parent, FrontaStatu *frontaStatu) {
    this->frontaStatu = frontaStatu;
    if (frontaStatu) connect(frontaStatu,SIGNAL(changed()),this,SLOT(refresh()));
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

void QFrontaWidget::refresh() {
    clear();
    FrontaStatu::FrontaItem *pom = frontaStatu->get_items();
    if (!pom) return;
    ClickableLabel *image = new ClickableLabel(this);
    image->setPixmap(QPixmap::fromImage(QImage(QString(":/flags-mini/%1.png").arg(pom->stat->shortName))));
    image->setMargin(3);
    layout->addWidget(image, 0, 0);
    int i = 1;
    pom = pom->reakce;
    while (pom) {
        ClickableLabel *image = new ClickableLabel(this);
        image->setPixmap(QPixmap::fromImage(QImage(QString(":/flags-mini/%1.png").arg(pom->stat->shortName))));
        image->setMargin(3);
        layout->addWidget(image, 0, i);
        pom = pom->reakce;
        i++;
    }
    pom = frontaStatu->get_items();
    i = 1;
    pom = pom->dalsi;
    while (pom) {
        ClickableLabel *image = new ClickableLabel(this);
        image->setPixmap(QPixmap::fromImage(QImage(QString(":/flags-mini/%1.png").arg(pom->stat->shortName))));
        image->setMargin(3);
        layout->addWidget(image, i, 0);
        pom = pom->dalsi;
        i++;
    }
    int active = frontaStatu->get_active();
    if (active!=-1) {
        layout->itemAtPosition(0,active)->widget()->setStyleSheet("background-color: yellow");
    }
}

void QFrontaWidget::clear() {
    for (int u =0; u < layout->rowCount(); ++u) {
        for (int i = 0; i < layout->columnCount(); ++i) {
            QLayoutItem *item = layout->itemAtPosition(u, i);
            if (!item) continue;
            ClickableLabel *image = (ClickableLabel *)(item->widget());
            layout->removeWidget(image);
            delete image;
        }
    }
}



