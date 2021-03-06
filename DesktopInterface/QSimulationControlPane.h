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
public:
    QSimulationControlPane(QWidget * parent = nullptr);
};


#endif //DESKTOPINTERFACE_QSIMULATIONCONTROLPANE_H
