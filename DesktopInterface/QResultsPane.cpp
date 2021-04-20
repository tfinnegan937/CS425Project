//
// Created by plays on 3/5/2021.
//

#include "QResultsPane.h"

QResultsPane::QResultsPane(QWidget *parent) : QWidget(parent){
    placeholder = new QLabel("Placeholder", this);

    layout = new QVBoxLayout(this);

    layout->addWidget(placeholder);

    groupbox = new QGroupBox("Data", this);
    groupbox->setLayout(layout);

    groupbox_container = new QVBoxLayout(this);

    groupbox_container->addWidget(groupbox);

    this->setLayout(groupbox_container);
}
