#include "PDFGenerator.h"


bool PDFGenerator::GeneratePDFFromData(const char* file_location, const char* things_to_graph, const char* location_to_save_to)
{
    if (file_location == nullptr) return false;

    Py_Initialize();
    PyObject* pName = PyUnicode_FromString(python_file_name);
    PyObject* pModule = PyImport_Import(pName);

    bool is_successful = false;
    if (pModule) {
        PyObject* pPDFGeneratingFunction = PyObject_GetAttrString(pModule, python_file_name);
        if (pPDFGeneratingFunction && PyCallable_Check(pPDFGeneratingFunction)) {
            PyObject* python_data_file_location = Py_BuildValue("s", file_location);
            PyObject* python_things_to_graph = Py_BuildValue("s", things_to_graph);
            PyObject* python_location_to_save_to = Py_BuildValue("s", location_to_save_to);
            PyObject* args = PyTuple_Pack(3, python_data_file_location, python_things_to_graph, python_location_to_save_to);
            PyObject* return_result = PyObject_CallObject(pPDFGeneratingFunction, args);
            is_successful = PyObject_IsTrue(return_result);
        } else {
            PyErr_Print();
        }
    }
    //std::system("generatePDF.bat");
    Py_Finalize();
    return is_successful;
}
