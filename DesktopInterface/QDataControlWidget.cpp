//
// Created by plays on 12/9/2020.
//

#include "QDataControlWidget.h"

QDataControlWidget::QDataControlWidget(QWidget *parent) {


    main_layout = new QVBoxLayout(this);
    main_layout->setSpacing(0);

    button_col_layout = new QHBoxLayout(this);

    button_col_1 = new QVBoxLayout(this);
    button_col_2 = new QVBoxLayout(this);

    widget_label = new QLabel(this);
    widget_label = new QLabel(this);
    widget_label->setText("Data Controls");
    widget_label->setAlignment(Qt::AlignCenter);

    main_layout->addWidget(widget_label);

    //Establish the layout for column 1
    but_view_results = new QPushButton("View Results", this);
    but_view_results->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    button_col_1->addWidget(but_view_results);

    but_load_results = new QPushButton("Load Results", this);
    but_load_results->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    button_col_1->addWidget(but_load_results);

    but_save_results = new QPushButton("Save Results", this);
    but_save_results->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    button_col_1->addWidget(but_save_results);

    //Store the layout in a grouping widget
    but_col_1_box = new QGroupBox(this);
    but_col_1_box->setLayout(button_col_1);

    //Add columns to the layout
    button_col_layout->addWidget(but_col_1_box);

    //Establish the layout for column 2
    but_display_data = new QPushButton("Display Data", this);
    but_display_data->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    button_col_2->addWidget(but_display_data);

    but_export_data = new QPushButton("Export Data", this);
    but_export_data->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    button_col_2->addWidget(but_export_data);

    but_calculate = new QPushButton("Calculate...", this);
    but_calculate->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    button_col_2->addWidget(but_calculate);

    //Store the layout in a grouping widget
    but_col_2_box = new QGroupBox(this);
    but_col_2_box->setLayout(button_col_2);

    //Add columns to the layout
    button_col_layout->addWidget(but_col_2_box);

    but_box = new QGroupBox(this);
    but_box->setLayout(button_col_layout);

    main_layout->addWidget(but_box);

    setLayout(main_layout);
}
