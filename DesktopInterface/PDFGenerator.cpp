#include "PDFGenerator.h"


bool PDFGenerator::isFinished() const
{
    return is_finished;
}


bool PDFGenerator::wasSuccess() const
{
    return was_last_save_successful;
}


void PDFGenerator::setup(const char* file_location)
{
    was_last_save_successful = false;
    data_file_location = file_location;
    Py_Initialize();
    pName = PyUnicode_FromString(python_file_name);
    pModule = PyImport_Import(pName);
}


void PDFGenerator::start()
{
    if (data_file_location == nullptr) return;
    bool is_successful = false;
    if (pModule) {
        PyObject* pPDFGeneratingFunction = PyObject_GetAttrString(pModule, python_file_name);
        if (pPDFGeneratingFunction && PyCallable_Check(pPDFGeneratingFunction)) {
            PyObject* python_data_file_location = Py_BuildValue("s", data_file_location);
            PyObject* python_things_to_graph = Py_BuildValue("s", things_to_graph);
            PyObject* args = PyTuple_Pack(2, python_data_file_location, python_things_to_graph);
            PyObject* return_result = PyObject_CallObject(pPDFGeneratingFunction, args);
            is_successful = PyObject_IsTrue(return_result);
        } else {
            PyErr_Print();
        }
    }
    //std::system("generatePDF.bat");
    was_last_save_successful = is_successful;
    Py_Finalize();
}
