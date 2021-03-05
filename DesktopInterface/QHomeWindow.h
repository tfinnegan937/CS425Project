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
#include "QDataControlWidget.h"
class QHomeWindow : public QWidget {
Q_OBJECT
private:
    QVRControlWidget * vr_controls; //Widget containing the VR controls
    QDataControlWidget * data_controls; //Widget containing the Data controls

    QHBoxLayout * home_page_layout; //Horizontal Box Layout for the main window

    QTimer * ipc_callback_timer;

    bool initializeIPC(const QString& shared_mem_name); //initialize IPC communication

    bool handleIPCMessages(uint16_t message_buffer); //Take received message buffer and handle each received
    bool shared_mem_initialized = false;

public slots:
    void ipcTick(); //One tick of the IPC communication loop;
signals:
    //TODO
public:
    explicit QHomeWindow(QWidget * parent = nullptr);
};


#endif //DESKTOPINTERFACE_QHOMEWINDOW_H
