//
// Created by plays on 3/5/2021.
//

#include "QPatientDataPane.h"
#include <iostream>
QPatientDataPane::QPatientDataPane(QWidget *parent) : QWidget(parent) {
    first_name = new QLineEdit("First Name", this);
    last_name = new QLineEdit("Last Name", this);

    gender_picker = new QGenderPicker(this);

    date_seen_picker = new QDatePicker(this, "Date Seen");
    dob_picker = new QDatePicker(this, "DOB");

    comments = new QTextEdit("Description of Incident", this);

    concussion_selector = new QConcussSelector(this);

    layout = new QGridLayout();

    layout->addWidget(first_name, 0, 0);
    layout->addWidget(last_name, 0, 1);
    layout->addWidget(gender_picker, 1, 0);
    layout->addWidget(date_seen_picker, 1, 1);
    layout->addWidget(dob_picker, 2, 0);
    layout->addWidget(comments, 3, 0);
    layout->addWidget(concussion_selector, 4, 0);

    groupbox = new QGroupBox("Patient Information", this);
    groupbox->setLayout(layout);

    groupbox_container = new QVBoxLayout(this);
    groupbox_container->addWidget(groupbox);

    this->setLayout(groupbox_container);

}


QGenderPicker::QGenderPicker(QWidget *parent) : QWidget(parent){
    male = new QRadioButton("M", this);
    female = new QRadioButton("F", this);
    other = new QRadioButton("Other", this);
    male->setChecked(true);
    layout = new QHBoxLayout(this);
    layout->insertWidget(0, male);
    layout->insertWidget(1, female);
    layout->insertWidget(2, other);

    groupbox = new QGroupBox("Gender", this);
    groupbox->setLayout(layout);

    groupbox_container = new QHBoxLayout(this);
    groupbox_container->insertWidget(0, groupbox);
    this->setLayout(groupbox_container);
}

QDatePicker::QDatePicker(QWidget *parent, const QString& label) : QWidget(parent) {
    picker_label = label;
    text_input = new QLineEdit("mm/dd/yyyy", this);
    text_input->setReadOnly(true);

    select_date = new QPushButton("Select", this);

    layout = new QHBoxLayout(this);

    layout->insertWidget(0, text_input);
    layout->insertWidget(1, select_date);

    date_picker_window = new QWidget();

    date_picker_window->hide();

    selector_calendar = new QCalendarWidget(date_picker_window);

    selector_layout = new QVBoxLayout(date_picker_window);

    date_picker_window->setLayout(selector_layout);
    confirm = new QPushButton("Confirm", date_picker_window);
    selected_date = new QDate();
    *selected_date = selector_calendar->selectedDate();
    selector_layout->addWidget(selector_calendar);
    selector_layout->addWidget(confirm);
    groupbox = new QGroupBox(label, this);
    groupbox->setLayout(layout);
    groupbox_container = new QVBoxLayout(this);

    groupbox_container->insertWidget(0, groupbox);
    this->setLayout(groupbox_container);

    connect(this, &QDatePicker::confirmDate, this, &QDatePicker::updateDate);
    connect(confirm, &QPushButton::clicked, this, &QDatePicker::passDateSignal);
    connect(select_date, &QPushButton::clicked, this, &QDatePicker::openSelector);

}

void QDatePicker::passDateSignal() {
    QDate selectedTime = selector_calendar->selectedDate();
    confirmDate(selectedTime);
    date_picker_window->hide();
}

void QDatePicker::updateDate(QDate date) {
    *selected_date = date;
    text_input->setText(getDate());
}

void QDatePicker::openSelector() {
    if(!selectorOpen) {
        std::cout << std::endl << "Here" << std::endl;
        date_picker_window->show();
        selectorOpen = true;
    }else{
        if(!(date_picker_window->isVisible())){
            selectorOpen = false;
        }
    }
}

QString QDatePicker::getDate() const {
    QString date = (std::to_string(selected_date->month()) +  "/" + std::to_string(selected_date->day()) +
            "/" + std::to_string(selected_date->year())).c_str();
    return date;
}


QConcussSelector::QConcussSelector(QWidget *parent) : QWidget(parent) {
    yes = new QRadioButton("Yes", this);
    no = new QRadioButton("No", this);
    no->setChecked(true);
    layout = new QHBoxLayout(this);

    layout->insertWidget(0, yes);
    layout->insertWidget(1, no);
    groupbox = new QGroupBox("Concussed?", this);
    groupbox->setLayout(layout);
    groupbox_container = new QHBoxLayout(this);

    groupbox_container->insertWidget(0, groupbox);

    this->setLayout(groupbox_container);

}
