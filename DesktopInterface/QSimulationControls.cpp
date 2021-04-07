//
// Created by plays on 3/5/2021.
//

#include "QSimulationControls.h"
#include <iostream>
#include "WindowsIPCControls.h"
#include "QHomeWindow.h"
QSimulationControlButtonWidget::QSimulationControlButtonWidget(QWidget *parent) : QWidget(parent) {
    begin_button = new QPushButton("Begin", this);
    cancel_button = new QPushButton("Cancel", this);
    cancel_button->setEnabled(false);
    layout = new QHBoxLayout(this);
    layout->insertWidget(0, begin_button);
    layout->insertWidget(1, cancel_button);
    this->setLayout(layout);

    connect(cancel_button, &QPushButton::released, this, &QSimulationControlButtonWidget::cancelPressed);
    connect(begin_button, &QPushButton::released, this, &QSimulationControlButtonWidget::beginPressed);
    connect(begin_button, &QPushButton::released, this, &QSimulationControlButtonWidget::toggleButtons);
    connect(cancel_button, &QPushButton::released, this, &QSimulationControlButtonWidget::toggleButtons);





}

void QSimulationControlButtonWidget::toggleButtons() {
    begin_button->setEnabled(!begin_button->isEnabled());
    cancel_button->setEnabled(!cancel_button->isEnabled());
}

void QSimulationControlButtonWidget::beginPressed() {
    beginSignal();
}

void QSimulationControlButtonWidget::cancelPressed() {
    cancelSignal();
    sendMessage(STOP_ALL);
}

QSimulationControls::QSimulationControls(QWidget *parent) : QWidget(parent){
    sp_check = new QCheckBox("Smooth Pursuits", this);
    sh_check = new QCheckBox("Saccades - Horizontal", this);
    sv_check = new QCheckBox("Saccades - Vertical", this);
    vorh_check = new QCheckBox("VOR - Horizontal", this);
    vorv_check = new QCheckBox("VOR - Vertical", this);
    con_check = new QCheckBox("Near Point Convergence", this);
    vms_check = new QCheckBox("Visual Motion Sensitivity Test", this);
    select_all = new QCheckBox("Select All", this);
    control_buttons = new QSimulationControlButtonWidget(this);
    status_message = new QLabel("Status: Ready", this);

    layout = new QVBoxLayout(this);
    layout->insertWidget(0, sp_check);
    layout->insertWidget(1, sh_check);
    layout->insertWidget(2, sv_check);
    layout->insertWidget(3, vorh_check);
    layout->insertWidget(4, vorv_check);
    layout->insertWidget(5, con_check);
    layout->insertWidget(6, vms_check);
    layout->insertWidget(7, select_all);
    layout->insertWidget(9, control_buttons);
    layout->insertWidget(8, status_message);



    group_box = new QGroupBox("Simulation Controls");
    group_box->setLayout(layout);

    groupbox_container = new QVBoxLayout(this);
    groupbox_container->insertWidget(0, group_box);
    this->setLayout(groupbox_container);

    connect(this, &QSimulationControls::simActive, control_buttons, &QSimulationControlButtonWidget::toggleButtons);
    connect(this, &QSimulationControls::simFinished, control_buttons, &QSimulationControlButtonWidget::toggleButtons);

    connect(select_all, &QCheckBox::stateChanged, this, &QSimulationControls::selectAll);

    connect(control_buttons, &QSimulationControlButtonWidget::beginSignal, this,
            &QSimulationControls::passBeginSignalToIPC);

    connect(control_buttons, &QSimulationControlButtonWidget::beginSignal, this,
            &QSimulationControls::lockPane);
    connect(control_buttons, &QSimulationControlButtonWidget::cancelSignal, this,
            &QSimulationControls::unlockPane);

    connect(control_buttons, &QSimulationControlButtonWidget::sendMessage, this, &QSimulationControls::passSendMessage);


}

void QSimulationControls::lockPane() {
    sp_check->setEnabled(false);
    sh_check->setEnabled(false);
    sv_check->setEnabled(false);
    vorh_check->setEnabled(false);
    vorv_check->setEnabled(false);
    con_check->setEnabled(false);
    vms_check->setEnabled(false);
    select_all->setEnabled(false);

    //if(!isSimActive) {
        //isSimActive = true;
        //simActive();
    //}
}

void QSimulationControls::unlockPane() {
    sp_check->setEnabled(true);
    sh_check->setEnabled(true);
    sv_check->setEnabled(true);
    vorh_check->setEnabled(true);
    vorv_check->setEnabled(true);
    con_check->setEnabled(true);
    vms_check->setEnabled(true);
    select_all->setEnabled(true);
    //simFinished();
    //isSimActive = false;
}

void QSimulationControls::selectAll(int state) {
        sp_check->setChecked(state);
        sh_check->setChecked(state);
        sv_check->setChecked(state);
        vorh_check->setChecked(state);
        vorv_check->setChecked(state);
        con_check->setChecked(state);
        vms_check->setChecked(state);
}

uint16_t QSimulationControls::getButtonStatesAsIPCBuff() const {
    uint16_t set_flags = 0x00;

    if(sp_check->isChecked()){
        set_flags |= QUEUE_SP;
    }
    if(sh_check->isChecked()){
        set_flags |= QUEUE_SH;
    }
    if(sv_check->isChecked()){
        set_flags |= QUEUE_SV;
    }
    if(vorh_check->isChecked()){
        set_flags |= QUEUE_VORH;
    }
    if(vorv_check->isChecked()){
        set_flags |= QUEUE_VORV;
    }
    if(con_check->isChecked()){
        set_flags |= QUEUE_CON;
    }
    if(vms_check->isChecked()){
        set_flags |= QUEUE_VMS;
    }
    return set_flags;
}

void QSimulationControls::passBeginSignalToIPC() {
    uint16_t sim_flags = getButtonStatesAsIPCBuff();
    std::cout << std::endl << 2 << std::endl;

    if(sim_flags){
        std::cout << std::endl << 2.5 << std::endl;
        sim_flags |= BEGIN_ALL;
        //ipcMessageReceived(sim_flags);
        sendMessage(sim_flags);
    }

}

void QSimulationControls::passSendMessage(UINT16 mess) {
    sendMessage(mess);
}


