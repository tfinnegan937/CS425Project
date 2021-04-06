//
// Created by plays on 3/5/2021.
//

#include "QSimulationControlPane.h"
#include <iostream>
QSimulationControlPane::QSimulationControlPane(QWidget *parent) : QWidget(parent){
    QSimCtrls_simulationControls = new QSimulationControls(this);
    QBtn_exportSimData = new QPushButton("Export Data...", this);
    QVbx_mainLayout = new QVBoxLayout(this);

    QVbx_mainLayout->insertWidget(0, QSimCtrls_simulationControls);
    QVbx_mainLayout->insertWidget(1, QBtn_exportSimData);
    this->setLayout(QVbx_mainLayout);
    connectControlSignals();
    isSimActive = false;
}

void QSimulationControlPane::lockPane() {
    //std::cout << std::endl;
    //std::cout << "paneLocked()" << std::endl;
    if(!isSimActive) {
        simActive();
        isSimActive = true;
    }
}

void QSimulationControlPane::unlockPane() {
    //std::cout << std::endl;
    //std::cout << "paneUnlocked()" << std::endl;
    simFinished();
    isSimActive = false;
}

void QSimulationControlPane::connectControlSignals() {
    connect(this, &QSimulationControlPane::simActive, QSimCtrls_simulationControls, &QSimulationControls::lockPane);
    connect(this, &QSimulationControlPane::simFinished, QSimCtrls_simulationControls, &QSimulationControls::unlockPane);
    connect(QSimCtrls_simulationControls, &QSimulationControls::sendMessage, this, &QSimulationControlPane::passSendMessage);
}

void QSimulationControlPane::passSendMessage(UINT16 mess) {
    sendMessage(mess);
}


