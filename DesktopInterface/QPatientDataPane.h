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
class QGenderPicker : public QWidget{
Q_OBJECT
private:
    QRadioButton * QRadBtn_male;
    QRadioButton * QRadBtn_female;
    QRadioButton * QRadBtn_other;
    QGroupBox * QGrpBx_widgetBox;
    QHBoxLayout * QHbx_mainLayout;
    QHBoxLayout * QHbx_widgetBoxContainer;
public:
    QGenderPicker(QWidget * parent = nullptr);
    QString getGender() const;
};

class QDatePicker : public QWidget{
Q_OBJECT
private:
    QString QLbl_pickerLabel;
    QWidget * QWin_datePickerWindow;
    QPushButton * QBtn_selectDate;
    QPushButton * QBtn_confirm;
    QLineEdit * QLineEdt_dateField;

    QVBoxLayout * QVBx_selectorLayout;
    QDate * QDate_selectedDate;
    QCalendarWidget * QCalendar_selectorCalendar;

    QHBoxLayout * QHbx_mainLayout;

    QGroupBox * QGrpBx_widgetBox;
    QVBoxLayout * QVbx_widgetBoxContainer;
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

class QConcussionPicker : public QWidget{
Q_OBJECT
private:
    bool concussed = false;
    QHBoxLayout * QHbx_mainLayout;
    QRadioButton * QRadBtn_yes;
    QRadioButton * QRadBtn_no;
    QGroupBox * QGrbBx_widgetBox;
    QHBoxLayout * QHbx_widgetBoxContainer;
public:
    QConcussionPicker(QWidget * parent = nullptr);
    QString getConcussStatus() const;
};

class QPatientDataPane : public QWidget{
Q_OBJECT
private:
    QDatePicker * QDatePckr_daySeenPicker;
    QDatePicker * QDatePckr_dobPicker;

    QGenderPicker * QGenPckr_genderPicker;

    QLineEdit * QLineEdt_firstNameField;
    QLineEdit * QLineEdt_lastNameField;

    QTextEdit * QTxtEdt_commentsField;

    QConcussionPicker * QCssPckr_concussionSelector;

    QGridLayout * QGrd_mainLayout;
    QGroupBox * QGrpBx_paneBox;
    QVBoxLayout * QVbx_paneBoxContainer;
public:
    QPatientDataPane(QWidget * parent = nullptr);
};


#endif //DESKTOPINTERFACE_QPATIENTDATAPANE_H
