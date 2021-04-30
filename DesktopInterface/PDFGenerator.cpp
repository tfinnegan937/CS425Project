#include "PDFGenerator.h"

PDFGenerator::PDFGenerator(QObject *parent):
QObject(parent)
{
    std::cout << "Initializing python...\n";
    Py_Initialize();
    pName = PyUnicode_FromString(python_file_name);
    pModule = PyImport_Import(pName);
}

PDFGenerator::~PDFGenerator()
{
    std::cout << "Closing up python...\n";
    Py_XDECREF(pName);
    Py_XDECREF(pModule);
    Py_Finalize();
}


bool PDFGenerator::GeneratePDFFromData(const char* file_location, const char* things_to_graph, const char* location_to_save_to)
{
    if (file_location == nullptr) return false;

    PyObject* python_data_file_location = nullptr;
    PyObject* python_things_to_graph = nullptr;
    PyObject* python_location_to_save_to = nullptr;
    PyObject* args = nullptr;
    PyObject* return_result = nullptr;
    PyObject* pPDFGeneratingFunction = nullptr;

    bool is_successful = false;
    if (pModule) {
        pPDFGeneratingFunction = PyObject_GetAttrString(pModule, single_pdf_function);
        if (pPDFGeneratingFunction && PyCallable_Check(pPDFGeneratingFunction)) {
            python_data_file_location = Py_BuildValue("s", file_location);
            python_things_to_graph = Py_BuildValue("s", things_to_graph);
            python_location_to_save_to = Py_BuildValue("s", location_to_save_to);
            args = PyTuple_Pack(3, python_data_file_location, python_things_to_graph, python_location_to_save_to);
            return_result = PyObject_CallObject(pPDFGeneratingFunction, args);
            is_successful = PyObject_IsTrue(return_result);
        } else {
            PyErr_Print();
        }
    }

    Py_XDECREF(pPDFGeneratingFunction);
    Py_XDECREF(python_data_file_location);
    Py_XDECREF(python_things_to_graph);
    Py_XDECREF(python_location_to_save_to);
    Py_XDECREF(args);
    Py_XDECREF(return_result);

    return is_successful;
}


bool PDFGenerator::GeneratePDFComparisonFromData(const char* file_location, const char* comparison_file_location, const char* things_to_graph, const char* location_to_save_to)
{
    if (file_location == nullptr || comparison_file_location == nullptr || things_to_graph == nullptr || location_to_save_to == nullptr) return false;

    std::cout << file_location << std::endl;
    std::cout << comparison_file_location << std::endl;

    PyObject* python_data_file_location = nullptr;
    PyObject* python_data_comparison_location = nullptr;
    PyObject* python_things_to_graph = nullptr;
    PyObject* python_location_to_save_to = nullptr;
    PyObject* args = nullptr;
    PyObject* return_result = nullptr;
    PyObject* pPDFGeneratingFunction = nullptr;

    bool is_successful = false;
    if (pModule) {
        pPDFGeneratingFunction = PyObject_GetAttrString(pModule, comparison_pdf_function);
        if (pPDFGeneratingFunction && PyCallable_Check(pPDFGeneratingFunction)) {
            python_data_file_location = Py_BuildValue("s", file_location);
            python_data_comparison_location = Py_BuildValue("s", comparison_file_location);
            python_things_to_graph = Py_BuildValue("s", things_to_graph);
            python_location_to_save_to = Py_BuildValue("s", location_to_save_to);
            args = PyTuple_Pack(4, python_data_file_location, python_data_comparison_location, python_things_to_graph, python_location_to_save_to);
            return_result = PyObject_CallObject(pPDFGeneratingFunction, args);
            is_successful = PyObject_IsTrue(return_result);
        } else {
            PyErr_Print();
        }
    }

    Py_XDECREF(pPDFGeneratingFunction);
    Py_XDECREF(python_data_file_location);
    Py_XDECREF(python_data_comparison_location);
    Py_XDECREF(python_things_to_graph);
    Py_XDECREF(python_location_to_save_to);
    Py_XDECREF(args);
    Py_XDECREF(return_result);

    return is_successful;
}
