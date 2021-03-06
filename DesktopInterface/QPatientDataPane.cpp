//
// Created by plays on 3/5/2021.
//

#include "QPatientDataPane.h"

QPatientDataPane::QPatientDataPane(QWidget *parent) : QWidget(parent) {
}


QGenderPicker::QGenderPicker(QWidget *parent) : QWidget(parent){
    male = new QRadioButton("M", this);
    female = new QRadioButton("F", this);
    other = new QRadioButton("Other", this);

    layout = new QHBoxLayout(this);
    layout->insertWidget(0, male);
    layout->insertWidget(1, female);
    layout->insertWidget(2, other);

    group_box = new QGroupBox("Gender", this);
    group_box->setStyleSheet("border:none");
    group_box->setLayout(layout);

    groupbox_container = new QHBoxLayout(this);
    groupbox_container->insertWidget(0, group_box);
    this->setLayout(groupbox_container);
}
