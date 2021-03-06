//
// Created by plays on 3/5/2021.
//

#include "QSimulationControlPane.h"

QSimulationControlPane::QSimulationControlPane(QWidget *parent) : QWidget(parent){
    sim_controls = new QSimulationControls(this);
    export_data_butt = new QPushButton("Export Data...", this);
    layout = new QVBoxLayout(this);

    layout->insertWidget(0, sim_controls);
    layout->insertWidget(1, export_data_butt);
    this->setLayout(layout);
}
