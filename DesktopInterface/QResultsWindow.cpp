#include "QResultsWindow.h"
#include "ui_QResultsWindow.h"
#include <iostream>

QResultsWindow::QResultsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QResultsWindow)
{
    ui->setupUi(this);
    eye_tracking_code = "eye_chart.py";
    GetEyeTrackingGraph();
}

QResultsWindow::~QResultsWindow()
{
    delete ui;
}

void QResultsWindow::GetEyeTrackingGraph()
{
   // Py_Initialize();
    /*
    PyObject* pName = PyUnicode_FromString(eye_tracking_code);
    PyObject* pModule = PyImport_Import(pName);
    if(pModule) {
        PyObject* pEyeTrackingFunc = PyObject_GetAttrString(pModule, "plotEye");
        if (pEyeTrackingFunc && PyCallable_Check(pEyeTrackingFunc)) {
            PyObject* res = PyObject_CallFunctionObjArgs(pEyeTrackingFunc);
            PyObject* resRep = PyObject_Repr(res);
            std::cout << "test" << std::endl;
            const char* s = PyBytes_AsString(resRep);
            //patientNameText->insertPlainText(s);
            std::cout << "test" << std::endl;
        }
    }*/
    //Py_Finalize();
}
