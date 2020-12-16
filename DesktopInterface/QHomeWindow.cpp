//
// Created by plays on 12/9/2020.
//

#include "QHomeWindow.h"

QHomeWindow::QHomeWindow(QWidget *parent) {
    home_page_layout = new QHBoxLayout();
    home_page_layout->setSpacing(1);
    //Add VR controls
    vr_controls = new QVRControlWidget();
    home_page_layout->addWidget(vr_controls);

    //Add Data Controls
    data_controls = new QDataControlWidget();
    home_page_layout->addWidget(data_controls);
    setLayout(home_page_layout);


    //Generate all other windows here
}
