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
    QRadioButton * male;
    QRadioButton * female;
    QRadioButton * other;
    QGroupBox * groupbox;
    QHBoxLayout * layout;
    QHBoxLayout * groupbox_container;
public:
    QGenderPicker(QWidget * parent = nullptr);
    QString getGender() const;
};

class QDatePicker : public QWidget{
Q_OBJECT
private:
    QString picker_label;
    QWidget * date_picker_window;
    QPushButton * select_date;
    QPushButton * confirm;
    QLineEdit * text_input;

    QVBoxLayout * selector_layout;
    QDate * selected_date;
    QCalendarWidget * selector_calendar;

    QHBoxLayout * layout;

    QGroupBox * groupbox;
    QVBoxLayout * groupbox_container;
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

class QConcussSelector : public QWidget{
Q_OBJECT
private:
    bool concussed = false;
    QHBoxLayout * layout;
    QRadioButton * yes;
    QRadioButton * no;
    QGroupBox * groupbox;
    QHBoxLayout * groupbox_container;
public:
    QConcussSelector(QWidget * parent = nullptr);
    QString getConcussStatus() const;
};
class QPatientDataPane : public QWidget{
Q_OBJECT
private:
    QDatePicker * date_seen_picker;
    QDatePicker * dob_picker;

    QGenderPicker * gender_picker;

    QLineEdit * first_name;
    QLineEdit * last_name;

    QTextEdit * comments;

    QConcussSelector * concussion_selector;

    QGridLayout * layout;
    QGroupBox * groupbox;
    QVBoxLayout * groupbox_container;
public:
    QPatientDataPane(QWidget * parent = nullptr);
};


#endif //DESKTOPINTERFACE_QPATIENTDATAPANE_H
