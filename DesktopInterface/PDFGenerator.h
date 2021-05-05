/** @file PDFGenerator.h
*
*   Describes the class which integrates and passes data to Python for PDF generation.
*
*   @author Isak Ohman
*   @author Ryan Gorman
*   @author Timothy Finnegan
*   @date 2021
*/

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

/**
 *   @brief Class used to call PDF generation in Python.
 */
class PDFGenerator : public QObject
{
    Q_OBJECT
public:
    /**
     * @brief Constructor. Initializes and stores the Python interpretor module.
     */
    explicit PDFGenerator(QObject *parent = 0);

    /**
     * @brief Destructor. Deletes the link to the Python interpretor module then closes up.
     */
    ~PDFGenerator();


    /**
     * @brief Creates a PDF with graphs of all existing information in current_patient_data.
     *
     * @param file_location C string pointer which has the filepath to the patient data CSV.
     * @param things_to_graph C string pointer, unused, pass in "" instead.
     * @param location_to_save_to C string pointer which has the desired filepath for the resulting PDF.
     *
     * @return bool
     */
    bool GeneratePDFFromData(const char* file_location, const char* things_to_graph, const char* location_to_save_to);

    /**
     * @brief Creates a PDF of comparisons between patient scores in a baseline file and current patient data.
     *
     * @param file_location C string pointer which has the filepath to the patient data CSV.
     * @param comparison_file_location C string pointer which has the filepath to the baseline data CSV.
     * @param things_to_graph C string pointer, unused, pass in "" instead.
     * @param location_to_save_to C string pointer which has the desired filepath for the resulting PDF.
     *
     * @return bool
     */
    bool GeneratePDFComparisonFromData(const char* file_location, const char* comparison_file_location, const char* things_to_graph, const char* location_to_save_to);

private:
    // Filenames for the python files used without the .py extension
    const char* python_file_name = "generatePDF";
    const char* single_pdf_function = "generatePDF";
    const char* comparison_pdf_function = "generateComparisonPDF";


    PyObject* pName;
    PyObject* pModule;

};

#endif // PDFGENERATOR_H
