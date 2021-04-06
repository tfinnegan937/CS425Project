//
// Created by plays on 12/9/2020.
//

#include "QHomeWindow.h"
#include "QResultsWindow.h"
#include <iostream>
QResultsWindow *wdg;
QHomeWindow::QHomeWindow(QWidget *parent) : QWidget(parent) {

    QPane_simCtrlPane = new QSimulationControlPane(this);
    QPane_patientDataPane = new QPatientDataPane(this);
    QPane_simResultsPane = new QResultsPane(this);

    QHBx_panelLayout = new QHBoxLayout(this);
    setupMenuBar();

    QHBx_panelLayout->insertWidget(0, QPane_simCtrlPane);
    QHBx_panelLayout->insertWidget(1, QPane_patientDataPane);
    connect(QPane_patientDataPane->QLineEdt_firstNameField, &QLineEdit::textEdited, this,
            [=](const QString& text) { current_patient_data.first_name = text; });
    connect(QPane_patientDataPane->QLineEdt_lastNameField, &QLineEdit::textEdited, this,
            [=](const QString& text) { current_patient_data.last_name = text; });
    connect(QPane_patientDataPane->QLineEdt_firstNameField, &QLineEdit::textEdited, this,
            &QHomeWindow::setDateSeen);
    QHBx_panelLayout->insertWidget(2, QPane_simResultsPane);

    this->setLayout(QHBx_panelLayout);
    //Initialize IPC communication
    ipcController = new IPCReceiver(TEXT(BUFF_NAME));
    initializeIPC();

    connectSimPaneSignals();


}



int loop_counter = 0; //Temporary counter to increase alternating graphs to every second.
void QHomeWindow::ipcTick() {
    //Handle UnrealEngine signals
        //std::cout << std::endl << "Reached Message Loop" << std::endl;
        if (ipcController->messageReceived()) {
            try {
                UINT16 buffer_output = ipcController->receiveMessage();
                handleIPCMessages(buffer_output);
            } catch (std::exception &e) {
                //TODO: handle exception
            }
        }

    //TODO: Ryan places the code for handling the data pipeline here
    loop_counter++;
    if (loop_counter >= 10) {
        //wdg->AlternateGraph();
        loop_counter = 0;
    }
}

bool QHomeWindow::initializeIPC() {
    //Initialize the timer for communication with UnrealEngine
    QTmr_ipcCallbackTimer = new QTimer(this);
    //Connect to the appropriate signals and slots here
    connect(QTmr_ipcCallbackTimer, &QTimer::timeout, this, &QHomeWindow::ipcTick);
    QTmr_ipcCallbackTimer->setInterval(100); //Time interval between calls in milliseconds. May need to be adjusted.
    QTmr_ipcCallbackTimer->start();
    try {
       ipcController->sendMessage(IPC_INITIALIZED);
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
    connect(QPane_simCtrlPane,&QSimulationControlPane::sendMessage, this, &QHomeWindow::sendMessage);
}

void QHomeWindow::setupMenuBar() {
    QMenBar_menuBar = new QMenuBar(this);

    QMen_file = new QMenu("File", QMenBar_menuBar);

    QMenAct_fileOpen = new QAction("Open...", QMen_file);
    QMen_file->addAction(QMenAct_fileOpen);
    QMenAct_fileSave = new QAction("Save", QMen_file);
    QMen_file->addAction(QMenAct_fileSave);
    QMenAct_fileSaveAs = new QAction("Save As...", QMen_file);
    QMen_file->addAction(QMenAct_fileSaveAs);
    QMenAct_fileExportData = new QAction("Export...", QMen_file);
    QMen_file->addAction(QMenAct_fileExportData);
    QMen_file->addSeparator();
    QMenAct_fileExit = new QAction("Exit", QMen_file);
    QMen_file->addAction(QMenAct_fileExit);

    //TODO connect file actions to appropriate signals
    QMenBar_menuBar->addMenu(QMen_file);
    connect(QMenAct_fileOpen, &QAction::triggered, this, &QHomeWindow::loadFile);
    connect(QMenAct_fileSave, &QAction::triggered, this, &QHomeWindow::saveFile);
    connect(QMenAct_fileSaveAs, &QAction::triggered, this, &QHomeWindow::saveAsFile);

    QMen_help = new QMenu("Help", QMenBar_menuBar);

    QMenAct_helpAbout = new QAction("About", QMen_help);
    QMen_help->addAction(QMenAct_helpAbout);

    //TODO connect help actions to appropriate signals
    QMenBar_menuBar->addMenu(QMen_help);

    //wdg = new QResultsWindow(this);
    //wdg->show();
}

void QHomeWindow::sendMessage(UINT16 mess) {
    ipcController->sendMessage(mess);
}


void QHomeWindow::loadFile()
{
    QString fileName = QFileDialog::getOpenFileName(this,
            tr("Open Patient Data"), "",
            tr("Comma Seperated Values (*.csv);;All Files (*)"));

    CSVSaveLoad saveload;

    try {
        saveload.LoadData(current_patient_data, "", fileName.toStdString().c_str());
    } catch (const std::exception &exc) {
        QMessageBox errorBox;
        errorBox.critical(0, "Load Error", exc.what());
        errorBox.setFixedSize(500,200);
    }
}


void QHomeWindow::saveFile()
{
    if (last_file_touched == nullptr) {
        saveAsFile();
        return;
    }

    CSVSaveLoad saveload;

    try {
        saveload.SaveData(current_patient_data, "", last_file_touched);
    } catch (const std::exception &exc) {
        QMessageBox errorBox;
        errorBox.critical(0, "Save Error", exc.what());
        errorBox.setFixedSize(500,200);
    }
}


void QHomeWindow::saveAsFile()
{
    QString fileName = QFileDialog::getSaveFileName(this,
            tr("Save Patient Data"), "",
            tr("Comma Seperated Values (*.csv);;All Files (*)"));

    last_file_touched = fileName.toStdString().c_str();

    CSVSaveLoad saveload;

    try {
        saveload.SaveData(current_patient_data, "", fileName.toStdString().c_str());
    } catch (const std::exception &exc) {
        QMessageBox errorBox;
        errorBox.critical(0, "Save Error", exc.what());
        errorBox.setFixedSize(500,200);
    }
}


void QHomeWindow::setDateOfBirth(const QString& text)
{
    int piece = 0;
    string number;
    while (getline(stringstream(text.toStdString()), number, '/'))
    {
        current_patient_data.date_of_birth[piece] = stoi(number);
        piece++;
    }
}


void QHomeWindow::setDateSeen(const QString& text)
{
    int piece = 0;
    string number;
    while (getline(stringstream(text.toStdString()), number, '/'))
    {
        current_patient_data.date_of_visit[piece] = stoi(number);
        piece++;
    }
}


