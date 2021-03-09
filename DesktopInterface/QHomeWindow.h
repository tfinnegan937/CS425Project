//
// Created by plays on 12/9/2020.
//

#ifndef DESKTOPINTERFACE_QHOMEWINDOW_H
#define DESKTOPINTERFACE_QHOMEWINDOW_H
#include <QWidget>
#include <QHBoxLayout>
#include <QPushButton>
#include <QTimer>
#include <QString>
#include "QVRControlWidget.h"
#include "QSimulationControlPane.h"
#include "QPatientDataPane.h"
#include "QResultsPane.h"
class QHomeWindow : public QWidget {
Q_OBJECT
private:
    QHBoxLayout * QHBx_panelLayout;
    QSimulationControlPane * QPane_simCtrlPane; //The third of the UI containing the simulation controls, a logo, and misc. buttons.
    QPatientDataPane * QPane_patientDataPane; //The third of the UI containing the fields for patient information input
    QResultsPane * QPane_simResultsPane; //The third of the UI containing charts and data

    QTimer * QTmr_ipcCallbackTimer; //This timer provides a callback ever 100 ms that checks the ipc buffer

    bool initializeIPC(const QString& shared_mem_name); //initialize IPC communication

    bool handleIPCMessages(uint16_t message_buffer); //Take received message buffer and handle each received

    void connectSimPaneSignals(); //Connects all of the appropriate ipc signals to the simulator control pane
    bool shared_mem_initialized = false;

public slots:
    void ipcTick(); //One tick of the IPC communication loop. Executed when a timeout() signal is called from QTmr_ipcCallbackTimer
signals:
    //TODO
    void simActive(); //This signal is called any time a VOMS test begins, and is passed down to the sim control UI to indicate that it should be locked
    void simFinished(); //This signal is called when all tests are completed and is passed down to the sim control UI to indicate that it should be unlocked
public:
    explicit QHomeWindow(QWidget * parent = nullptr);
};


#endif //DESKTOPINTERFACE_QHOMEWINDOW_H
