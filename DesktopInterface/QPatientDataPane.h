//
// Created by plays on 3/5/2021.
//

#ifndef DESKTOPINTERFACE_QPATIENTDATAPANE_H
#define DESKTOPINTERFACE_QPATIENTDATAPANE_H
#include <QWidget>
#include <QRadioButton>
#include <QComboBox>
#include <QLabel>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QWindow>
#include <QPushButton>
#include <QTextEdit>
#include <QLineEdit>
#include <QDateTime>
#include <QCalendarWidget>
#include "QHomeWindow.h"
#include "PatientData.h"

//All of the additional classes in this header are components of QPatientDataPane and will not be used elsewhere.

//This widget contains the radio buttons for selecting the patient's gender
class QGenderPicker : public QWidget{
Q_OBJECT
private:
    QRadioButton * QRadBtn_male;
    QRadioButton * QRadBtn_female;
    QRadioButton * QRadBtn_other;
    QGroupBox * QGrpBx_widgetBox;
    QHBoxLayout * QHbx_mainLayout;
    QHBoxLayout * QHbx_widgetBoxContainer;//This is required to display the group box and its contents. A group box cannot
                                            //Be a layout, and it cannot be displayed on its own. As such, it needs to be
                                            //added to another layout, which is then set as the outermost layout for the widget
public:
    QGenderPicker(QWidget * parent = nullptr);
    QString getGender() const;
    void setGender(QString gender);
};

class QSportPicker : public QWidget{
private:
    QComboBox * QCmbBox_SportPicker;
    QHBoxLayout * QHbx_mainLayout;

    QGroupBox * QGrpBx_widgetBox;
    QVBoxLayout * QVbx_widgetBoxContainer;
public:
    QSportPicker(QWidget * parent);
    QString getSport() const;
    void setSport(QString sport);

};

//This is a fancy date selection widget class. A QCalendarWidget pops up in a new window and allows one to select the appropriate date
class QDatePicker : public QWidget{
Q_OBJECT
protected:
    QString QLbl_pickerLabel;
    QWidget * QWin_datePickerWindow;
    QPushButton * QBtn_selectDate;
    QPushButton * QBtn_confirm;
    QLineEdit * QLineEdt_dateField;

    QVBoxLayout * QVBx_selectorLayout;
    QDate  QDate_selectedDate;
    QCalendarWidget * QCalendar_selectorCalendar;

    QHBoxLayout * QHbx_mainLayout;

    QGroupBox * QGrpBx_widgetBox;
    QVBoxLayout * QVbx_widgetBoxContainer;//This is required to display the group box and its contents. A group box cannot
                                            //Be a layout, and it cannot be displayed on its own. As such, it needs to be
                                            //added to another layout, which is then set as the outermost layout for the widget
    bool selectorOpen = false;
signals:
    void confirmDate(QDate);
public slots:
    void updateDate(QDate date);
    void openSelector();
    void passDateSignal();
public:
    QDatePicker(QWidget * parent = nullptr, const QString& label = "");
    QString getDate() const;
};

//This widget simply contains the two radio buttons that are used to make a concussion diagnosis
class QConcussionPicker : public QWidget{
Q_OBJECT
private:
    bool concussed = false;
    QHBoxLayout * QHbx_mainLayout;
    QRadioButton * QRadBtn_yes;
    QRadioButton * QRadBtn_no;
    QGroupBox * QGrbBx_widgetBox;
    QHBoxLayout * QHbx_widgetBoxContainer;//This is required to display the group box and its contents. A group box cannot
                                            //Be a layout, and it cannot be displayed on its own. As such, it needs to be
                                            //added to another layout, which is then set as the outermost layout for the widget
public:
    QConcussionPicker(QWidget * parent = nullptr);
    bool getConcussStatus() const;
};

//This is the outermost widget containing all of the above widgets, and all input fields for the patient UI.
class QPatientDataPane : public QWidget{
Q_OBJECT
protected:
    QDatePicker * QDatePckr_daySeenPicker;
    QDatePicker * QDatePckr_dobPicker;
    QDatePicker * QDatePckr_dateOfInjury;

    QGenderPicker * QGenPckr_genderPicker;

    QLineEdit * QLineEdt_firstNameField;
    QLineEdit * QLineEdt_lastNameField;
    QSportPicker * QSprtPcker_sportPicker;
    QConcussionPicker * QCssPckr_concussionSelector;

    QGridLayout * QGrd_mainLayout;
    QGroupBox * QGrpBx_paneBox;
    QVBoxLayout * QVbx_paneBoxContainer; //This is required to display the group box and its contents. A group box cannot
                                         //Be a layout, and it cannot be displayed on its own. As such, it needs to be
                                         //added to another layout, which is then set as the outermost layout for the widget
public:
    QPatientDataPane(QWidget * parent = nullptr);
    PatientData getPatientData();

public slots:
    void UpdatePatientDataPanes(PatientData current);
};


#endif //DESKTOPINTERFACE_QPATIENTDATAPANE_H
