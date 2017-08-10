//
// Created by MNL on 9. 7. 2017.
//

#include <QtWidgets/QGridLayout>
#include "EditSessionWindow.h"
#include <QtWidgets/QPushButton>


EditSessionWindow::EditSessionWindow() {
    QGridLayout *gridLayout = new QGridLayout;
    QPushButton *saveButton = new QPushButton("save");
    QPushButton *loadButton = new QPushButton("load");

    gridLayout->addWidget(saveButton);
    gridLayout->addWidget(loadButton);




    this->setLayout(gridLayout);
    //if vybor=vzbranyVybor
}