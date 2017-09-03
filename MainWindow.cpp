//
// Created by MNL on 7. 7. 2017.
//

#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include "MainWindow.h"
#include "Stat.h"
#include "ClickableLabel.h"
#include "QFrontaWidget.h"
#include <QDebug>
#include <Qtimer>
#include <QCheckBox>
#include <iostream>
#include <windows.h>
#include <QLineEdit>
#include <QtWidgets/QLabel>

MainWindow::MainWindow() {
    //tlacitka, layouty


    QPushButton *addbutton = new QPushButton("add");
    QPushButton *addRbutton = new QPushButton("rekt");
    QPushButton *move = new QPushButton("dalsi");
    QPushButton *editSession = new QPushButton("Edit session");
    QPushButton *beep = new QPushButton("Beep");
    QPushButton *postTema = new QPushButton("Update");
    QPushButton *remove = new QPushButton("Remove");
    QLineEdit * casBox = new QLineEdit();
    QLabel *autotimerLabel = new QLabel("autotimer");
    QLineEdit * temaBox = new QLineEdit();
    QLabel *sekundy = new QLabel("[s]");

    QVBoxLayout *hlavniLayout = new QVBoxLayout;
    QGridLayout *gridLayout = new QGridLayout;
    QHBoxLayout *timerLayout = new QHBoxLayout;
    QHBoxLayout *cudlikyLayout = new QHBoxLayout;
    QHBoxLayout *temaLayout = new QHBoxLayout;
    QLabel *tema = new QLabel("tema:");
    frontaStatu = new FrontaStatu();
    frontaWidget = new QFrontaWidget(this,frontaStatu);

    signalMapper = new QSignalMapper(this);

    setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    //icon
    QIcon icon = QIcon(":/icon.jpg");
    setWindowIcon(icon);

// radiobuttony statu

    for (int i = 0; i < POCET_STATU[0]; ++i) {
        QRadioButton *zeme = new QRadioButton("");
        ClickableLabel *image = new ClickableLabel();
        ClickableLabel *meno = new ClickableLabel();
        meno->setText(staty[i].name);
        image->setPixmap(QPixmap::fromImage(QImage(QString(":/flags-mini/%1.png").arg(staty[i].shortName))));
        gridLayout->addWidget(zeme, i / 5, (i % 5) * 3 );
        gridLayout->addWidget(image, i / 5, (i % 5) * 3 + 1);
        gridLayout->addWidget(meno, i / 5, (i % 5) * 3 + 2);

        connect(image, SIGNAL(clicked()), zeme, SLOT(click()));
        connect(meno, SIGNAL(clicked()), zeme, SLOT(click()));
        //connect(image, SIGNAL(clicked()), signalMapper, SLOT(map()));
        //connect(meno, SIGNAL(clicked()), signalMapper, SLOT(map()));
        zeme->setObjectName(QString::number(i));
        connect(zeme, SIGNAL(clicked()), this, SLOT(clicked()));
        if (i==0){
            emit zeme->clicked();
            zeme->setChecked(true);
        }
    }


    //timer
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    QCheckBox *autotimer = new QCheckBox();
    QPushButton *startTimer = new QPushButton("Start");
    //remainingTime()
    timerLayout->addWidget(startTimer);
    timerLayout->addWidget(autotimerLabel);
    timerLayout->addWidget(autotimer);
    timerLayout->addWidget(casBox);
    timerLayout->addWidget(sekundy);

    //timer->start(1000);

    // layouty
    hlavniLayout->addLayout(gridLayout);
    hlavniLayout->addLayout(cudlikyLayout);
    hlavniLayout->addLayout(timerLayout);
    hlavniLayout->addLayout(temaLayout);
    cudlikyLayout->addWidget(addbutton);
    cudlikyLayout->addWidget(addRbutton);
    cudlikyLayout->addWidget(move);
    cudlikyLayout->addWidget(remove);
    cudlikyLayout->addWidget(editSession);
    cudlikyLayout->addWidget(beep);

    temaLayout->addWidget(tema);
    temaLayout->addWidget(temaBox);
    temaLayout->addWidget(postTema);

    this->setLayout(hlavniLayout);
    sideWindow = new SideWindow(frontaStatu);
    sideWindow->show();
    editSessionWindow = new EditSessionWindow;

    this->setWindowTitle("Ovladaci panel");
    hlavniLayout->addWidget(frontaWidget);



    //connecty
    //connect(addbutton, SIGNAL(clicked()), sideWindow, SLOT(addVFlag()));
    connect(addbutton, SIGNAL(clicked()), this, SLOT(addSpeech()));
    connect(addRbutton, SIGNAL(clicked()), this, SLOT(addRSpeech()));

    //connect(addRbutton, SIGNAL(clicked()), sideWindow, SLOT(addHFlag()));
    //connect(move, SIGNAL(clicked()), sideWindow, SLOT(removeLane()));
    connect(move, SIGNAL(clicked()), frontaStatu, SLOT(next()));
   // connect(remove,SIGNAL(clicked()),frontaWidget,SLOT(remove()));
    connect(move, SIGNAL(clicked()), sideWindow->frontaWidget, SLOT(next()));
    //connect(zakliknutejStat,SIGNAL(clicked()),this,SLOT())
    connect(startTimer, SIGNAL(clicked()), this, SLOT(startTime()));
    connect(editSession,SIGNAL(clicked()),this,SLOT(openEditSessionWindow()));
    connect(beep,SIGNAL(clicked()),this,SLOT(beepnuti()));
    connect(move, SIGNAL(clicked()), this, SLOT(velikost()));
    connect(move, SIGNAL(clicked()), this, SLOT(velikost()));


    fronta = new QList<Stat *>;
    frontaR = new QList<Stat *>;
    this->adjustSize();

}


void MainWindow::addSpeech() {
    fronta->append(&staty[cudlik]);
    //qDebug()<<"pridano";
    //ClickableLabel *image = new ClickableLabel();
    //image->setPixmap(QPixmap::fromImage(QImage(QString(":/flags-mini/%1.png").arg(staty[cudlik].shortName))));
    // frontaLayout pridat image
    frontaStatu->addSpeech(cudlik);
    //sideWindow->frontaWidget->addSpeech(cudlik);
}

void MainWindow::addRSpeech() {
    frontaR->append(&staty[cudlik]);
    frontaStatu->addRSpeech(cudlik);
    //sideWindow->frontaWidget->addRSpeech(cudlik);
    //qDebug()<<"pridano";
}

void MainWindow::remove() {
    //frontaR->erase()
//    frontaStatu->remove();
}



void MainWindow::clicked() {
    cudlik = sender()->objectName().toInt();
    //qDebug()<<cudlik;
}

void MainWindow::startTime() {
    //timer->start(1000);
   // timer->start(1000);
}

void MainWindow::openEditSessionWindow() {
    //EditSessionWindow = new EditSessionWindow;
editSessionWindow->show();

}

void MainWindow::beepnuti() {
    Beep(1500,500);
}

void MainWindow::velikost() {
this->adjustSize();
}
