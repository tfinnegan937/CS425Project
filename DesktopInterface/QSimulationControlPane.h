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
    QVBoxLayout * layout;
    QImage * unr_logo;
    QPushButton * export_data_butt;
    QSimulationControls * sim_controls;

    bool isSimActive = false;

    void connectControlSignals();
signals:
    void simActive(); //Sent to sim_controls when a matching simActive signal is received from the root window
    void simFinished(); //Sent to sim_controls when a matching simFinished signal is received from the root window.
    void ipcMessageReceived(uint16_t);
public slots:
    void lockPane(); //Receives the simActive() signal from the root window and passes it to sim_controls
    void unlockPane(); //Receives the simFinished() signal from the root window and passes it to sim_controls
public:
    QSimulationControlPane(QWidget * parent = nullptr);
};


#endif //DESKTOPINTERFACE_QSIMULATIONCONTROLPANE_H
