//
// Created by plays on 3/5/2021.
//

#include "QSimulationControls.h"

QSimulationControlButtonWidget::QSimulationControlButtonWidget(QWidget *parent) : QWidget(parent) {
    begin_button = new QPushButton("Begin", this);
    cancel_button = new QPushButton("Cancel", this);
    cancel_button->setEnabled(false);
    layout = new QHBoxLayout(this);
    layout->insertWidget(0, begin_button);
    layout->insertWidget(1, cancel_button);
    this->setLayout(layout);
}

QSimulationControls::QSimulationControls(QWidget *parent) : QWidget(parent){
    sp_check = new QCheckBox("Smooth Pursuits", this);
    sh_check = new QCheckBox("Saccades - Horizontal", this);
    sv_check = new QCheckBox("Saccades - Vertical", this);
    vorh_check = new QCheckBox("VOR - Horizontal", this);
    vorv_check = new QCheckBox("VOR - Vertical", this);
    con_check = new QCheckBox("Near Point Convergence", this);
    vms_check = new QCheckBox("Visual Motion Sensitivity Test", this);

    control_buttons = new QSimulationControlButtonWidget(this);

    layout = new QVBoxLayout(this);
    layout->insertWidget(0, sp_check);
    layout->insertWidget(1, sh_check);
    layout->insertWidget(2, sv_check);
    layout->insertWidget(3, vorh_check);
    layout->insertWidget(4, vorv_check);
    layout->insertWidget(5, con_check);
    layout->insertWidget(6, vms_check);
    layout->insertWidget(7, control_buttons);

    group_box = new QGroupBox("Simulation Controls");
    group_box->setLayout(layout);

    groupbox_container = new QVBoxLayout(this);
    groupbox_container->insertWidget(0, group_box);
    this->setLayout(groupbox_container);
}
