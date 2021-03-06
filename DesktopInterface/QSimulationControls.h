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
signals:
    void beginSignal();
public slots:
    void beginPressed();
    void cancelPressed();

    void toggleButtons();
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
    QCheckBox * select_all;

    QSimulationControlButtonWidget * control_buttons;

    QVBoxLayout * layout;

    bool isSimActive = false;
signals:
    void simActive(); //Passed to control_buttons when the matching signal is received from the parent
    void simFinished(); //Passed to control_buttons when the matching signal is received from the parent
public slots:
    void lockPane(); //Locks all checkboxes upon receiving simActive from its parent widget. Also toggles the "Begin" and "Cancel" buttons
    void unlockPane();//Locks all checkboxes upon receiving simFinished from its parent widget. Also toggles the "Begin" and "Cancel" buttons
    void selectAll(int state);
    void passBeginSignalToIPC();
public:
    QSimulationControls(QWidget * parent = nullptr);
    uint16_t getButtonStatesAsIPCBuff() const;
};


#endif //DESKTOPINTERFACE_QSIMULATIONCONTROLS_H
