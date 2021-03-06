//
// Created by plays on 3/5/2021.
//

#ifndef DESKTOPINTERFACE_QSIMULATIONCONTROLS_H
#define DESKTOPINTERFACE_QSIMULATIONCONTROLS_H
#include <QWidget>
#include <QCheckBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QGroupBox>
class QSimulationControlButtonWidget : public QWidget{
    Q_OBJECT
private:
    QHBoxLayout * layout;
    QPushButton * begin_button;
    QPushButton * cancel_button;
public:
    QSimulationControlButtonWidget(QWidget * parent);
};

class QSimulationControls : public QWidget{
Q_OBJECT
private:
    QVBoxLayout * groupbox_container;
    QGroupBox * group_box;
    QCheckBox * sp_check;
    QCheckBox * sh_check;
    QCheckBox * sv_check;
    QCheckBox * vorh_check;
    QCheckBox * vorv_check;
    QCheckBox * con_check;
    QCheckBox * vms_check;

    QSimulationControlButtonWidget * control_buttons;

    QVBoxLayout * layout;

public:
    QSimulationControls(QWidget * parent = nullptr);
};


#endif //DESKTOPINTERFACE_QSIMULATIONCONTROLS_H
