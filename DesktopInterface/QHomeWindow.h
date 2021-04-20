//
// Created by plays on 12/9/2020.
//

#ifndef DESKTOPINTERFACE_QHOMEWINDOW_H
#define DESKTOPINTERFACE_QHOMEWINDOW_H
#include <QWidget>
#include <QCoreApplication>
#include <QHBoxLayout>
#include <QPushButton>
#include <QTimer>
#include <QString>
#include <QMenuBar>
#include <QFileDialog>
#include <QMessageBox>
#include <QAction>
#include <QDateTimeEdit>
#include "QVRControlWidget.h"
#include "QSimulationControlPane.h"
#include "QPatientDataPane.h"
#include "QResultsPane.h"
#include "csvsaveload.h"
#include "PatientData.h"
#include "TempCSVLoader.h"
#include "../shared_include/EyeFrameData.h"
#include "../shared_include/EyeSessionData.h"
#include "../shared_include/FullPatientData.h"
#include "../shared_include/EyeTestEnum.h"
#include "PDFGenerator.h"
#include "WindowsIPCControls.h"

class QSimulationControlPane;
class QPatientDataPane;

class QHomeWindow : public QWidget {
Q_OBJECT
private:
    //Data Files
    FullPatientData current_patient_data;
    FullPatientData comparison_data;
    QString last_file_touched = "None";
    FullPatientData::Tests current_test;
    TempCSVLoader tempCSVLoader;

    //UI panels
    QHBoxLayout * QHBx_panelLayout;
    QSimulationControlPane * QPane_simCtrlPane; //The third of the UI containing the simulation controls, a logo, and misc. buttons.
    QPatientDataPane * QPane_patientDataPane; //The third of the UI containing the fields for patient information input
    QResultsPane * QPane_simResultsPane; //The third of the UI containing charts and data

    //IPC Loop Items
    QTimer * QTmr_ipcCallbackTimer; //This timer provides a callback ever 100 ms that checks the ipc buffer

    //Debug Label
    QLabel * debug_label;
    QLabel * debug_label2;

    //Menu Items
    QMenuBar * QMenBar_menuBar;
    QMenu * QMen_file;
    QAction * QMenAct_fileOpen;
    QAction * QMenAct_fileSave;
    QAction * QMenAct_fileSaveAs;
    QAction * QMenAct_fileExit;
    QAction * QMenAct_fileExportData;

    //Menu Action Functions
    void loadFile();
    void saveFile();
    void saveAsFile();


    QMenu * QMen_help;
    QAction * QMenAct_helpAbout;
    IPCReceiver * ipcController;

    void setupMenuBar();

    bool initializeIPC(); //initialize IPC communication

    bool handleIPCMessages(uint16_t message_buffer); //Take received message buffer and handle each received

    void connectSimPaneSignals(); //Connects all of the appropriate ipc signals to the simulator control pane
    bool isSharedMemInitialized = false;
    void closeEvent(QCloseEvent *bar); //Override the close event in QWidget
public slots:
    void ipcTick(); //One tick of the IPC communication loop. Executed when a timeout() signal is called from QTmr_ipcCallbackTimer
    void sendMessage(UINT16 mess);
signals:
    //TODO
    void simActive(); //This signal is called any time a VOMS test begins, and is passed down to the sim control UI to indicate that it should be locked
    void simFinished(); //This signal is called when all tests are completed and is passed down to the sim control UI to indicate that it should be unlocked
    void testFinished(EyeTests::Tests testID, FullPatientData& current_patient_data);
    void updateVRStatus(QString mess);
    void patientDataLoaded(PatientData object);
public:
    explicit QHomeWindow(QWidget * parent = nullptr);
    ~QHomeWindow();
    void updateCurrentPatientData();
    void exportDataToPDF();
};


#endif //DESKTOPINTERFACE_QHOMEWINDOW_H
