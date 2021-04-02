/** @file csvsaveload.h
*
*   Saving and loading uses the same format (object to save/load, and file to save/load to/from).
*   Will format CSV with no spaces and no new line on last entry.
*
*   @author Isak Ohman
*   @author Ryan Gorman
*   @author Timothy Finnegan
*   @date 2021
*   @copyright MIT License
*/

#ifndef CSVSAVELOAD_H
#define CSVSAVELOAD_H

#include "../shared_include/EyeFrameData.h"
#include "../shared_include/EyeSessionData.h"
#include "../shared_include/FullPatientData.h"
#include <QFile>
#include <QJsonDocument>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

#define Serialize3Array(a) a[0]<<','<<a[1]<<','<<a[2]
using namespace std;

/**
 *   @brief Class used to hold code for saving/loading EyeDataFrames, EyeSessionData, and FullPatientData to/from CSV.
 */
class CSVSaveLoad
{
public:
    /**
     * @brief Basic constructor, initializes all elements to 0.
     */
    CSVSaveLoad();

    /**
     * @brief Save EyeFrameData to CSV file.
     * @details Makes a two lined CSV file: one for header, one for the EyeFrameData. Returns whether successful.
     *
     * @pre Filename must refer to a valid place for a file in form of path/to/file.csv.
     *
     * @param to_save EyeFrameData class to save.
     * @param filename Path + Filename to save data to.
     *
     * @return bool
     */
    void SaveEyeSessionData(const FullPatientData& to_save, const int current_test_to_save, ofstream& output_file);

    /**
     * @brief Load EyeSessionData from CSV file.
     * @details Will ignore first line of header, then stores each following line as a new EyeFrameData. Returns whether successful.
     *
     * @pre Filename must refer to a valid file in form of path/to/file.csv.
     *
     * @param to_load EyeSessionData class to load data into.
     * @param filename Path + Filename to load data from.
     *
     * @return bool
     */
    void LoadEyeData(FullPatientData& to_load, ifstream& input_file);

    /**
     * @brief Save FullPatientData to two CSV files.
     * @details First CSV file is for patient information specifically. Second is equivalent to SaveData for EyeSessionData. Returns whether successful.
     *
     * @pre Filenames must refer to valid places for a file in form of path/to/file.csv.
     *
     * @param to_save FullPatientData class to save.
     * @param filename_patient_data Path + Filename to save patient info to.
     *
     * @return bool
     */
    bool SaveData(const FullPatientData& to_save, const char* folder_to_save_to, const char* filename_patient_data);

    /**
     * @brief Load FullPatientData from two CSV files.
     * @details First CSV file is for patient information specifically. Second is equivalent to LoadData for EyeSessionData. Returns whether successful.
     *
     * @pre Filenames must refer to valid files in form of path/to/file.csv.
     *
     * @param to_save FullPatientData class to load into.
     * @param filename_patient_data Path + Filename to load patient info from.
     * @param filename_eye_frames Path + Filename to load patient eye data from.
     *
     * @return bool
     */
    bool LoadData(FullPatientData& toLoad, const char* folder_to_load_from, const char* filename_patient_data);

private:
    /**
     * @brief Creates a formatted header in EyeFrameData CSV files to ensure human readability.
     *
     * @param output_file ofstream object which allows for stream saving into the file.
     */
    void CreateEyeFrameHeader(ofstream& output_file);

    inline void LoadEyeFrameFloat3Value(float* arrayBegin, stringstream& input_line_string, string& number);
    inline string DateToString(const int* a) const;
    inline void LoadDateFromCSV(int* arrayBegin, stringstream& input_line_string, string& date);
};

#endif // CSVSAVELOAD_H
