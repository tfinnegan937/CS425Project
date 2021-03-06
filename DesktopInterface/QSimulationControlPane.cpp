//
// Created by plays on 3/5/2021.
//

#include "QSimulationControlPane.h"
#include <iostream>
QSimulationControlPane::QSimulationControlPane(QWidget *parent) : QWidget(parent){
    sim_controls = new QSimulationControls(this);
    export_data_butt = new QPushButton("Export Data...", this);
    layout = new QVBoxLayout(this);

    layout->insertWidget(0, sim_controls);
    layout->insertWidget(1, export_data_butt);
    this->setLayout(layout);
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
    connect(this, &QSimulationControlPane::simActive, sim_controls, &QSimulationControls::lockPane);
    connect(this, &QSimulationControlPane::simFinished, sim_controls, &QSimulationControls::unlockPane);
}


