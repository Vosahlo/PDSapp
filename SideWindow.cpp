//
// Created by MNL on 6. 7. 2017.
//

#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QPushButton>
#include "SideWindow.h"
#include <QtWidgets/QLabel>
#include "ClickableLabel.h"
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include <QDebug>
#include "Stat.h"


SideWindow::SideWindow(FrontaStatu *frontaStatu) {
    QIcon icon = QIcon(":/icon.jpg");
    setWindowIcon(icon);
    QVBoxLayout *layout= new QVBoxLayout;
    QLabel *tema = new QLabel("topic");
    layout->addWidget(tema);
    this->setLayout(layout);
    frontaWidget = new QFrontaWidget(this,frontaStatu);
    layout->addWidget(frontaWidget);




}

void SideWindow::addVFlag() {
//qDebug()<<"Funguje";

    ClickableLabel *image = new ClickableLabel();
    //image->setPixmap(QPixmap::fromImage(QImage(QString(":/flags-mini/%1.png").arg(staty[cudlik].shortName))));




}

void SideWindow::addHFlag() {

}

void SideWindow::removeLane() {

}

void SideWindow::updateTopic() {

}


