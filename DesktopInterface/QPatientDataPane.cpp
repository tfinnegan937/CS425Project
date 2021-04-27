//
// Created by plays on 3/5/2021.
//

#include "QPatientDataPane.h"
#include <iostream>
QPatientDataPane::QPatientDataPane(QWidget *parent) : QWidget(parent) {
    QLineEdt_firstNameField = new QLineEdit("First Name", this);
    QLineEdt_lastNameField = new QLineEdit("Last Name", this);

    QGenPckr_genderPicker = new QGenderPicker(this);

    QDatePckr_daySeenPicker = new QDatePicker(this, "Date Seen");
    QDatePckr_dobPicker = new QDatePicker(this, "DOB");
    QDatePckr_dateOfInjury = new QDatePicker(this, "Date of Injury");

    QCssPckr_concussionSelector = new QConcussionPicker(this);
    QSprtPcker_sportPicker = new QSportPicker(this);
    QGrd_mainLayout = new QGridLayout();

    QGrd_mainLayout->addWidget(QLineEdt_firstNameField, 0, 0);
    QGrd_mainLayout->addWidget(QLineEdt_lastNameField, 0, 1);
    QGrd_mainLayout->addWidget(QGenPckr_genderPicker, 1, 0);
    QGrd_mainLayout->addWidget(QDatePckr_daySeenPicker, 1, 1);
    QGrd_mainLayout->addWidget(QDatePckr_dobPicker, 2, 0);
    QGrd_mainLayout->addWidget(QDatePckr_dateOfInjury, 2, 1);
    QGrd_mainLayout->addWidget(QSprtPcker_sportPicker, 3,0);
    QGrd_mainLayout->addWidget(QCssPckr_concussionSelector, 4, 0);

    QGrpBx_paneBox = new QGroupBox("Patient Information", this);
    QGrpBx_paneBox->setLayout(QGrd_mainLayout);

    QVbx_paneBoxContainer = new QVBoxLayout(this);
    QVbx_paneBoxContainer->addWidget(QGrpBx_paneBox);

    this->setLayout(QVbx_paneBoxContainer);

}

PatientData QPatientDataPane::getPatientData() {
    QString dateOfBirth = QDatePckr_dobPicker->getDate();
    QString dateSeen = QDatePckr_daySeenPicker->getDate();
    QString dateOfInjury = QDatePckr_dateOfInjury->getDate();
    QString firstName = QLineEdt_firstNameField->text();
    QString lastName = QLineEdt_lastNameField->text();
    QString gender = QGenPckr_genderPicker->getGender();
    bool concussed = QCssPckr_concussionSelector->getConcussStatus();
    QString sport = QSprtPcker_sportPicker->getSport();
    PatientData out(dateOfBirth, dateSeen, dateOfInjury, firstName, lastName, sport, gender, concussed);
    return out;
}


QGenderPicker::QGenderPicker(QWidget *parent) : QWidget(parent){
    QRadBtn_male = new QRadioButton("M", this);
    QRadBtn_female = new QRadioButton("F", this);
    QRadBtn_male->setChecked(true);
    QHbx_mainLayout = new QHBoxLayout(this);
    QHbx_mainLayout->insertWidget(0, QRadBtn_male);
    QHbx_mainLayout->insertWidget(1, QRadBtn_female);

    QGrpBx_widgetBox = new QGroupBox("Gender", this);
    QGrpBx_widgetBox->setLayout(QHbx_mainLayout);

    QHbx_widgetBoxContainer = new QHBoxLayout(this);
    QHbx_widgetBoxContainer->insertWidget(0, QGrpBx_widgetBox);
    this->setLayout(QHbx_widgetBoxContainer);
}

QString QGenderPicker::getGender() const {
    if(QRadBtn_male->isChecked()){
        return "Male";
    }else if (QRadBtn_female->isChecked()){
        return "Female";
    }else{
        return "Other";
    }
}

void QGenderPicker::setGender(QString gender)
{
    if (gender == QString("Male")) {
        QRadBtn_male->setChecked(true);
        QRadBtn_female->setChecked(false);
    } else if (gender == QString("Female")) {
        QRadBtn_male->setChecked(false);
        QRadBtn_female->setChecked(true);
    } else {
        QRadBtn_male->setChecked(false);
        QRadBtn_female->setChecked(false);
    }
}

QDatePicker::QDatePicker(QWidget *parent, const QString& label) : QWidget(parent) {
    QLbl_pickerLabel = label;
    QLineEdt_dateField = new QLineEdit("mm/dd/yyyy", this);
    QLineEdt_dateField->setReadOnly(true);

    QBtn_selectDate = new QPushButton("Select", this);

    QHbx_mainLayout = new QHBoxLayout(this);

    QHbx_mainLayout->insertWidget(0, QLineEdt_dateField);
    QHbx_mainLayout->insertWidget(1, QBtn_selectDate);

    QWin_datePickerWindow = new QWidget();

    QWin_datePickerWindow->hide();
    QWin_datePickerWindow->setWindowTitle(label);
    QCalendar_selectorCalendar = new QCalendarWidget(QWin_datePickerWindow);

    QVBx_selectorLayout = new QVBoxLayout(QWin_datePickerWindow);

    QWin_datePickerWindow->setLayout(QVBx_selectorLayout);
    QBtn_confirm = new QPushButton("Confirm", QWin_datePickerWindow);
    QDate_selectedDate = new QDate();
    *QDate_selectedDate = QCalendar_selectorCalendar->selectedDate();
    QVBx_selectorLayout->addWidget(QCalendar_selectorCalendar);
    QVBx_selectorLayout->addWidget(QBtn_confirm);
    QGrpBx_widgetBox = new QGroupBox(label, this);
    QGrpBx_widgetBox->setLayout(QHbx_mainLayout);
    QVbx_widgetBoxContainer = new QVBoxLayout(this);

    QVbx_widgetBoxContainer->insertWidget(0, QGrpBx_widgetBox);
    this->setLayout(QVbx_widgetBoxContainer);

    connect(this, &QDatePicker::confirmDate, this, &QDatePicker::updateDate);
    connect(QBtn_confirm, &QPushButton::clicked, this, &QDatePicker::passDateSignal);
    connect(QBtn_selectDate, &QPushButton::clicked, this, &QDatePicker::openSelector);

}

void QDatePicker::passDateSignal() {
    QDate selectedTime = QCalendar_selectorCalendar->selectedDate();
    confirmDate(selectedTime);
    QWin_datePickerWindow->hide();
}

void QDatePicker::updateDate(QDate date) {
    *QDate_selectedDate = date;
    QLineEdt_dateField->setText(getDate());
}

void QDatePicker::openSelector() {
    if(!selectorOpen) {
        std::cout << std::endl << "Here" << std::endl;
        QWin_datePickerWindow->show();
        selectorOpen = true;
    }else{
        if(!(QWin_datePickerWindow->isVisible())){
            selectorOpen = false;
        }
    }
}

QString QDatePicker::getDate() const {
    QString date = (std::to_string(QDate_selectedDate->month()) + "/" + std::to_string(QDate_selectedDate->day()) +
                    "/" + std::to_string(QDate_selectedDate->year())).c_str();
    return date;
}


QConcussionPicker::QConcussionPicker(QWidget *parent) : QWidget(parent) {
    QRadBtn_yes = new QRadioButton("Yes", this);
    QRadBtn_no = new QRadioButton("No", this);
    QRadBtn_no->setChecked(true);
    QHbx_mainLayout = new QHBoxLayout(this);

    QHbx_mainLayout->insertWidget(0, QRadBtn_yes);
    QHbx_mainLayout->insertWidget(1, QRadBtn_no);
    QGrbBx_widgetBox = new QGroupBox("Concussed?", this);
    QGrbBx_widgetBox->setLayout(QHbx_mainLayout);
    QHbx_widgetBoxContainer = new QHBoxLayout(this);

    QHbx_widgetBoxContainer->insertWidget(0, QGrbBx_widgetBox);

    this->setLayout(QHbx_widgetBoxContainer);

}

bool QConcussionPicker::getConcussStatus() const {
    if(QRadBtn_yes->isChecked()){
        return true;
    }
    return false;
}

QSportPicker::QSportPicker(QWidget *parent) : QWidget(parent){
    QCmbBox_SportPicker = new QComboBox(this);
    QCmbBox_SportPicker->addItem("Basketball");
    QCmbBox_SportPicker->addItem("Baseball");
    QCmbBox_SportPicker->addItem("Football");
    QCmbBox_SportPicker->addItem("Volleyball");
    QCmbBox_SportPicker->addItem("Softball");
    QCmbBox_SportPicker->addItem("Tennis");
    QHbx_mainLayout = new QHBoxLayout(this);
    QHbx_mainLayout->addWidget(QCmbBox_SportPicker);

    QGrpBx_widgetBox = new QGroupBox("Sport", this);
    QGrpBx_widgetBox->setLayout(QHbx_mainLayout);

    QVbx_widgetBoxContainer = new QVBoxLayout(this);
    QVbx_widgetBoxContainer->addWidget(QGrpBx_widgetBox);
    setLayout(QVbx_widgetBoxContainer);
}

QString QSportPicker::getSport() const {
    return QCmbBox_SportPicker->currentText();
}

void QSportPicker::setSport(QString sport) {
    QCmbBox_SportPicker->setCurrentText(sport);
}

void QPatientDataPane::UpdatePatientDataPanes(PatientData current)
{
    QDatePckr_daySeenPicker->updateDate(QDate::fromString(current.getDateSeen(), "dd/MM/yyyy"));
    QDatePckr_dobPicker->updateDate(QDate().fromString(current.getDateOfBirth()));
    QDatePckr_dateOfInjury->updateDate(QDate().fromString(current.getDateOfInjury()));

    QGenPckr_genderPicker->setGender(current.getGender());

    QLineEdt_firstNameField->setText(current.getFirstName());
    QLineEdt_lastNameField->setText(current.getLastName());

    QSprtPcker_sportPicker->setSport(current.getSport());
}
