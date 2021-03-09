//
// Created by plays on 3/5/2021.
//

#ifndef DESKTOPINTERFACE_QSIMULATIONCONTROLPANE_H
#define DESKTOPINTERFACE_QSIMULATIONCONTROLPANE_H
#include <QWidget>
#include <QVBoxLayout>
#include "QSimulationControls.h"
#include <QImage>
#include <QPushButton>
class QSimulationControlPane : public QWidget{
Q_OBJECT
private:
    QVBoxLayout * QVbx_mainLayout;
    QImage * QImg_unrLogo;
    QPushButton * QBtn_exportSimData;
    QSimulationControls * QSimCtrls_simulationControls;

    bool isSimActive = false;

    void connectControlSignals();
signals:
    void simActive(); //Sent to QSimCtrls_simulationControls when a matching simActive signal is received from the root window
    void simFinished(); //Sent to QSimCtrls_simulationControls when a matching simFinished signal is received from the root window.
    void ipcMessageReceived(uint16_t);
public slots:
    void lockPane(); //Receives the simActive() signal from the root window and passes it to QSimCtrls_simulationControls
    void unlockPane(); //Receives the simFinished() signal from the root window and passes it to QSimCtrls_simulationControls
public:
    QSimulationControlPane(QWidget * parent = nullptr);
};


#endif //DESKTOPINTERFACE_QSIMULATIONCONTROLPANE_H
