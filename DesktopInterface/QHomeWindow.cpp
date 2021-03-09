//
// Created by plays on 12/9/2020.
//

#include "QHomeWindow.h"
#include "UnrealIPCController.h"
#include <iostream>
QHomeWindow::QHomeWindow(QWidget *parent) : QWidget(parent) {

    QPane_simCtrlPane = new QSimulationControlPane(this);
    QPane_patientDataPane = new QPatientDataPane(this);
    QPane_simResultsPane = new QResultsPane(this);

    QHBx_panelLayout = new QHBoxLayout();

    QHBx_panelLayout->insertWidget(0, QPane_simCtrlPane);
    QHBx_panelLayout->insertWidget(1, QPane_patientDataPane);
    QHBx_panelLayout->insertWidget(2, QPane_simResultsPane);

    this->setLayout(QHBx_panelLayout);
    //Initialize IPC communication
    initializeIPC("unreal_memory_buff");

    connectSimPaneSignals();
    //Generate all QRadBtn_other windows here
}


//The below contains an IPC communication loop for the program.
//The list of steps that it takes are as such:
// 1. Send Queued Messaged (Implicit)
// 2. Check to see if a message has been received (message_received())
// 3. If a message has been received, handle that message and send the appropriate signals to UI elements.
//
//Step 1 is implicit as QRadBtn_no actual message queue exists. The messages are implemented as an unsigned integer buffer.
//Messages are single-bit Macros that are anded to that buffer. When read from, the buffer is zeroed.
//The buffer is global in scope, but can only be accessed by send_message(). A message can be queued from various UI
//elements anywhere in the program.
//
//Step 2 is handled by message_received() which returns true if the inbound buffer is non-zero.
//Step 3 is handled by QHomeWindow::handleMessages() which calls the appropriate signals to change the state
//of the rest of the UI. These signals are defined in QHomeWindow::initializeIPC();
void QHomeWindow::ipcTick() {
    //Handle UnrealEngine signals

    if(isSharedMemInitialized) { //Error handling seems to fail when the shared memory isn't initialized
        //std::cout << std::endl << "Reached Message Loop" << std::endl;
        if (message_received()) {
            try {
                uint16_t buffer_output = receive_message();
                handleIPCMessages(buffer_output);
            } catch (std::exception &e) {
                //TODO: handle exception
            }
        }
        std::cout << "here" << std::endl;
    }
    //TODO: Ryan places the code for handling the data pipeline here
}

bool QHomeWindow::initializeIPC(const QString& shared_mem_name) {
    //Initialize the timer for communication with UnrealEngine
    QTmr_ipcCallbackTimer = new QTimer(this);
    //Connect to the appropriate signals and slots here
    connect(QTmr_ipcCallbackTimer, &QTimer::timeout, this, &QHomeWindow::ipcTick);
    QTmr_ipcCallbackTimer->setInterval(100); //Time interval between calls in milliseconds. May need to be adjusted.
    QTmr_ipcCallbackTimer->start();
    try {
        isSharedMemInitialized = access_shared_mem(shared_mem_name.toStdString());
        if (isSharedMemInitialized) {
            send_message(IPC_INITIALIZED);
        }
        else{
            //TODO: Replace with permanent error type
            isSharedMemInitialized = false;
            throw(std::runtime_error("PLACEHOLDER_ERROR_IPC_INIT"));
        }
    } catch(std::runtime_error& generic_error){
        //TODO: Handle errors

        return false;
    }
    //TODO: Ryan places pipeline initialization code here
    return true;
}

bool QHomeWindow::handleIPCMessages(uint16_t message_buffer) {
    //TODO: Handle Received Messages
    if(message_buffer & SP_STARTED){
        simActive();
    }
    if(message_buffer & SH_STARTED){
        simActive();
    }
    if(message_buffer & SV_STARTED){
        simActive();
    }
    if(message_buffer & CON_STARTED){
        simActive();
    }
    if(message_buffer & VORH_STARTED){
        simActive();
    }
    if(message_buffer & VORV_STARTED){
        simActive();
    }
    if(message_buffer & VMS_STARTED){
        simActive();
    }
    if(message_buffer & SP_COMPLETED){

    }
    if(message_buffer & SH_COMPLETED){

    }
    if(message_buffer & SV_COMPLETED){

    }
    if(message_buffer & CON_COMPLETED){

    }
    if(message_buffer & VORH_COMPLETED){

    }
    if(message_buffer & VORV_COMPLETED){

    }
    if(message_buffer & VMS_COMPLETED){

    }
    if(message_buffer & TESTS_COMPLETED){
        simFinished();
    }
    if(message_buffer & CONF_SHUTDOWN){
        exit(EXIT_SUCCESS);
    }

    if(message_buffer){
        return true;
    }
    return false;
}

void QHomeWindow::connectSimPaneSignals() {
    connect(this, &QHomeWindow::simActive, QPane_simCtrlPane, &QSimulationControlPane::lockPane);
    connect(this, &QHomeWindow::simFinished, QPane_simCtrlPane, &QSimulationControlPane::unlockPane);
}



