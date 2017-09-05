//
// Created by MNL on 9. 7. 2017.
//

#include <QtWidgets/QGridLayout>
#include "EditSessionWindow.h"
#include <QtWidgets/QPushButton>
#include <QComboBox>
#include <QtWidgets/QLabel>


EditSessionWindow::EditSessionWindow() {
    QGridLayout *gridLayout = new QGridLayout;
    QPushButton *saveButton = new QPushButton("save");
    QPushButton *loadButton = new QPushButton("load");
    QComboBox * comboBox = new QComboBox();
    QLabel *vybor = new QLabel("Vybor:");

    gridLayout->addWidget(saveButton);
    gridLayout->addWidget(loadButton);
    gridLayout->addWidget(vybor);
    gridLayout->addWidget(comboBox);




    this->setLayout(gridLayout);
    //if vybor=vzbranyVybor
}