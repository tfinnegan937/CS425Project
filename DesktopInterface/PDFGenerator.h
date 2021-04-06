#ifndef PDFGENERATOR_H
#define PDFGENERATOR_H

#pragma push_macro("slots")
#undef slots
#include "Python.h"
#pragma pop_macro("slots")
#include <QMainWindow>
#include <QPlainTextEdit>
#include <QThread>
#include <iostream>
#include <QEventLoop>

class PDFWorker;

class PDFGenerator : public QObject
{
    Q_OBJECT
public:

    bool GeneratePDFFromData();
    bool isFinished() const;
    bool wasSuccess() const;
    void setup(const char* file_location);
    void start();

private:
    const char* python_file_name = "generatePDF";
    PyObject* pName;
    PyObject* pModule;
    bool was_last_save_successful = false;
    const char* data_file_location = nullptr;
    const char* things_to_graph = nullptr;
    bool is_finished;

    void StartPDFThread();
    void AfterPDF(const bool was_successful);

};

#endif // PDFGENERATOR_H
