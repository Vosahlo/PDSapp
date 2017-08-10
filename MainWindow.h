//
// Created by MNL on 7. 7. 2017.
//

#ifndef PDSAPP_MAINWINDOW_H
#define PDSAPP_MAINWINDOW_H


#include <QtCore/QArgument>
#include <QtWidgets/QDialog>
#include "SideWindow.h"
#include "EditSessionWindow.h"
#include "Stat.h"
#include "EditSessionWindow.h"
#include "QFrontaWidget.h"

class MainWindow : public QDialog {
Q_OBJECT
public:
    MainWindow();




private:
    SideWindow *sideWindow;
    QList<Stat *> *fronta;
    QList<Stat *> *frontaR;
    int cudlik = -1;
    QFrontaWidget * frontaWidget;

private slots:
    void addSpeech();
    void clicked();

    void startTime();

    void openEditSessionWindow();

    void beepnuti();

    void addRSpeech();

    void remove();
};




#endif //PDSAPP_MAINWINDOW_H