#include "QResultsWindow.h"
#include "ui_QResultsWindow.h"
#include <iostream>

QResultsWindow::QResultsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QResultsWindow)
{
    ui->setupUi(this);
    eye_tracking_code = "eye_chart";
    GetEyeTrackingGraph();
}

QResultsWindow::~QResultsWindow()
{
    delete ui;
}

typedef struct{
    PyObject_HEAD
    int (*ptr)(int, int);
} MyFuncPtr;

void QResultsWindow::GetEyeTrackingGraph()
{
    Py_Initialize();

    PyObject* pName = PyUnicode_FromString(eye_tracking_code);
    PyObject* pModule = PyImport_Import(pName);
    if(pModule) {
        PyObject* pEyeTrackingFunc = PyObject_GetAttrString(pModule, "plotEye");
        if (pEyeTrackingFunc && PyCallable_Check(pEyeTrackingFunc)) {
            PyObject* args = PyTuple_Pack(0);
            PyObject* res = PyObject_CallObject(pEyeTrackingFunc, args);

            PyObject* test_1 = PyObject_Str(res);
            PyObject* test_2 = PyUnicode_AsUTF8String(test_1);
            std::string test = PyBytes_AsString(test_2);
            char* x = &test[0];


            QByteArray ba(x);
            std::cout << ba[1];


            QPixmap image;

            if (!image.loadFromData(ba, "PNG")) {
                std::cout << "Help";
            }
            //ui->EyeTrackingFrame->findChild<QLabel*>("EyeGraph")->setPixmap(QPixmap::(*image));
            //PyObject* resRep = PyObject_Repr(res);
            //const char* s = PyUnicode_AsUTF8(resRep);
            //ui->patientNameText->setPlainText(s);
        }
    } else {
        PyErr_Print();
    }
    Py_Finalize();
}
