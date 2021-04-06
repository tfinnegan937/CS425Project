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

    bool GeneratePDFFromData(const char* file_location, const char* things_to_graph, const char* location_to_save_to);

private:
    const char* python_file_name = "generatePDF";

};

#endif // PDFGENERATOR_H
