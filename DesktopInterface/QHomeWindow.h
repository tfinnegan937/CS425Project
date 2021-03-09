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
    QSimulationControlPane * QPane_simCtrlPane;
    QPatientDataPane * QPane_patientDataPane;
    QResultsPane * QPane_simResultsPane;

    QTimer * QTmr_ipcCallbackTimer;

    bool initializeIPC(const QString& shared_mem_name); //initialize IPC communication

    bool handleIPCMessages(uint16_t message_buffer); //Take received message buffer and handle each received

    void connectSimPaneSignals();
    bool shared_mem_initialized = false;

public slots:
    void ipcTick(); //One tick of the IPC communication loop;
signals:
    //TODO
    void simActive();
    void simFinished();
public:
    explicit QHomeWindow(QWidget * parent = nullptr);
};


#endif //DESKTOPINTERFACE_QHOMEWINDOW_H
