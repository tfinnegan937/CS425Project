/** @file TempCSVLoader.h
*
*   Describes functions to load temp CSV files from Unreal.
*
*   @author Isak Ohman
*   @author Ryan Gorman
*   @author Timothy Finnegan
*   @date 2021
*/
#ifndef LOADTEMPCSV_H
#define LOADTEMPCSV_H

#include <QObject>
#include <QFile>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include "TempCSVFiles.h"
#include "EyeTestEnum.h"
#include "FullPatientData.h"


/**
 *   @brief Class used to load eye tracking data and symptom scores from Unreal when a test is completed.
 */
class TempCSVLoader : public QObject
{
    Q_OBJECT
public:
    /**
     *   @brief Simple constructor.
     */
    TempCSVLoader();

public slots:
    /**
     *   @brief Loads a CSV related to a test from the given testID into current_patient_data.
     *
     *   @pre This should not be called directly! It should be linked to a signal first.
     *
     *   @param testID Test that has just finished.
     *   @param current_patient_data FullPatientData object to store loaded data into.
     */
    void LoadTempCSV(EyeTests::Tests testID, FullPatientData& current_patient_data);
signals:

    /**
     *   @brief Emitted once LoadTempCSV finishes.
     */
    void tempCSVLoaded();

private:

    /**
     * @brief Simple function to get three elements from a CSV and save them in a float array.
     * @details Effectively uses getline three times, placing each obtained element in spots 0-2 in the array.
     *
     * @pre Array must be at least size 3.
     *
     * @param arrayBegin Pointer to start of float array to save to.
     * @param input_line_string Stringstream to read data from.
     * @param number String to temporary stored obtained values before they are converted to floats.
     */
    inline void LoadEyeFrameFloat3Value(float* arrayBegin, stringstream& input_line_string, string& number);

    /**
     * @brief Loads all frames from a given test's temp CSV and collects them into an EyeSessionData object.
     *
     * @param data_file_path CSV to load from.
     * @param current_test EyeSessionData object to load into.
     */
    void LoadEyeFrameData(string data_file_path, EyeSessionData& current_test);

    /**
     * @brief Loads all convergence scores from a given test's temp CSV and collects them into an EyeSessionData object.
     *
     * @param convergence_file_path CSV to load from.
     * @param current_test EyeSessionData object to load into.
     */
    void LoadConvergenceTemp(string convergence_file_path, EyeSessionData& current_test);

    /**
     * @brief Loads all symptom scores from a given test's temp CSV and collects them into an EyeSessionData object.
     *
     * @param symptom_file_path CSV to load from.
     * @param current_test EyeSessionData object to load into.
     */
    void LoadSymptomScoreTemp(string symptom_file_path, EyeSessionData& current_test);

    /**
     * @brief Loads all pre-testing symptom scores from a temp CSV and collects them into an EyeSessionData object.
     *
     * @param baseline_file_path CSV to load from.
     * @param current_test EyeSessionData object to load into.
     */
    void LoadBaselineScoreTemp(string baseline_file_path, FullPatientData& current_patient_data);
};

#endif // LOADTEMPCSV_H
