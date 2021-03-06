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
class QGenderPicker : public QWidget{
Q_OBJECT
private:
    QRadioButton * male;
    QRadioButton * female;
    QRadioButton * other;
    QGroupBox * group_box;
    QHBoxLayout * layout;
    QHBoxLayout * groupbox_container;
public:
    QGenderPicker(QWidget * parent = nullptr);
};

class QDatePicker : public QWidget{
Q_OBJECT
};

class QPatientDataPane : public QWidget{
Q_OBJECT
private:

public:
    QPatientDataPane(QWidget * parent = nullptr);
};


#endif //DESKTOPINTERFACE_QPATIENTDATAPANE_H
