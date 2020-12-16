//
// Created by plays on 12/9/2020.
//

#include "QVRControlWidget.h"

QVRControlWidget::QVRControlWidget(QWidget *parent) {
    frame = new QFrame(this);
    frame->setFrameStyle(QFrame::Panel | QFrame::Raised);
    frame->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);

    button_layout = new QVBoxLayout(frame);
    button_layout->setSpacing(0);

    widget_label = new QLabel(frame);
    widget_label->setText("VR Controls");
    widget_label->setAlignment(Qt::AlignCenter | Qt::AlignCenter);
    button_layout->addWidget(widget_label);

    but_setup_vr = new QPushButton("Setup VR", frame);
    but_setup_vr->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    //Connect slots and signals here
    button_layout->addWidget(but_setup_vr);

    but_begin_test = new QPushButton("Begin Tests", frame);
    but_begin_test->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    //Connect slots and signals here
    button_layout->addWidget(but_begin_test);

    but_select_test = new QPushButton("Select Tests", frame);
    but_select_test->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    //Connect slots and signals here
    button_layout->addWidget(but_select_test);

    setLayout(button_layout);
}
