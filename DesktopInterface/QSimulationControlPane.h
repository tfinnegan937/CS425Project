//
// Created by plays on 3/5/2021.
//

#ifndef DESKTOPINTERFACE_QSIMULATIONCONTROLPANE_H
#define DESKTOPINTERFACE_QSIMULATIONCONTROLPANE_H
#include <QWidget>
#include <QVBoxLayout>
#include "QSimulationControls.h"
#include "QHomeWindow.h"
#include <QImage>
#include <QPushButton>
class QSimulationControlPane : public QWidget{
Q_OBJECT
private:
    QVBoxLayout * QVbx_mainLayout;
    QImage * QImg_unrLogo;
    QSimulationControls * QSimCtrls_simulationControls; //This widget contains all of the controls for selecting and starting tests.

    bool isSimActive = false;

    void connectControlSignals();
signals:
    void simActive(); //Sent to QSimCtrls_simulationControls when a matching simActive signal is received from the root window
    void simFinished(); //Sent to QSimCtrls_simulationControls when a matching simFinished signal is received from the root window.
    void ipcMessageReceived(uint16_t);
    void sendMessage(UINT16);
    void passStatusUpdate(QString mess);
public slots:
    void lockPane(); //Receives the simActive() signal from the root window and passes it to QSimCtrls_simulationControls
    void unlockPane(); //Receives the simFinished() signal from the root window and passes it to QSimCtrls_simulationControls
    void passSendMessage(UINT16 mess);
    void receiveStatusUpdate(QString mess);
public:
    QSimulationControlPane(QWidget * parent = nullptr);
    QPushButton * QBtn_exportSimData; //This button exports the collected eye tracking data to the collected dataset
};


#endif //DESKTOPINTERFACE_QSIMULATIONCONTROLPANE_H
