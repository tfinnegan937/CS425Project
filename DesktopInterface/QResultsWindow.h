#ifndef QRESULTSWINDOW_H
#define QRESULTSWINDOW_H

#pragma push_macro("slots")
#undef slots
#include "Python.h"
#pragma pop_macro("slots")
#include <QMainWindow>
#include <QPlainTextEdit>
#include <QThread>
#include <iostream>

namespace Ui {
class QResultsWindow;
}

class GraphWorker : public QThread{
    Q_OBJECT

    PyObject* pName;
    PyObject* pModule;
    const char* eye_tracking_code;
    const char* current_data;

    void run() override {

        QByteArray to_return;
        if(pModule) {
            PyObject* pEyeTrackingFunc = PyObject_GetAttrString(pModule, "plotEye");
            if (pEyeTrackingFunc && PyCallable_Check(pEyeTrackingFunc)) {
                PyObject* x = Py_BuildValue("s", current_data);
                PyObject* args = PyTuple_Pack(1, x);
                PyObject* res = PyObject_CallObject(pEyeTrackingFunc, args);

                PyObject* test_1 = PyObject_Repr(res);
                std::string string_with_quotes = PyUnicode_AsUTF8(test_1);
                std::string test = string_with_quotes.substr(1, string_with_quotes.size() - 2);
                to_return = QByteArray(test.c_str(), test.length());
            } else {
                PyErr_Print();
            }
        }

        emit GraphReady(to_return);
   };

signals:
    void GraphReady(const QByteArray graph_in_base_64);

public:
    void SetData(const char* new_data)
    {
        current_data = new_data;
    }

    void setup()
    {
        Py_Initialize();
        eye_tracking_code = "eye_chart";
        pName = PyUnicode_FromString(eye_tracking_code);
        pModule = PyImport_Import(pName);
    }

    void closeup()
    {
        Py_Finalize();
    }
};

class QResultsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QResultsWindow(QWidget *parent = nullptr);
    void AlternateGraph();
    ~QResultsWindow();

private:
    Ui::QResultsWindow *ui;
    QThread* chart_thread;

    static int current_graph;

    GraphWorker* workerThread;
    void DisplayGraph(const QByteArray graph_in_base_64);

    void StartGraphThread();
};

#endif // QRESULTSWINDOW_H
