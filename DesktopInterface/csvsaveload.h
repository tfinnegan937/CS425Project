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
    bool SaveData(const EyeFrameData& to_save, const char* filename);

    /**
     * @brief Load EyeFrameData from CSV file.
     * @details Will only load first two lines of the file: the header as first and the EyeFrameData as second. Returns whether successful.
     *
     * @pre Filename must refer to a valid file in form of path/to/file.csv.
     *
     * @param to_load EyeFrameData class to load data into.
     * @param filename Path + Filename to load data from.
     *
     * @return bool
     */
    bool LoadData(EyeFrameData& to_load, const char* filename);

    /**
     * @brief Save EyeSessionData to CSV file.
     * @details Makes a multi lined CSV file: one for header, rest for each EyeFrameData. Returns whether successful.
     *
     * @pre Filename must refer to a valid place for a file in form of path/to/file.csv.
     *
     * @param to_save EyeSessionData class to save.
     * @param filename Path + Filename to save data to.
     *
     * @return bool
     */
    bool SaveData(const EyeSessionData& to_save, const char* filename);

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
    bool LoadData(EyeSessionData& to_load, const char* filename);

    /**
     * @brief Save FullPatientData to two CSV files.
     * @details First CSV file is for patient information specifically. Second is equivalent to SaveData for EyeSessionData. Returns whether successful.
     *
     * @pre Filenames must refer to valid places for a file in form of path/to/file.csv.
     *
     * @param to_save FullPatientData class to save.
     * @param filename_patient_data Path + Filename to save patient info to.
     * @param filename_eye_frames Path + Filename to save patient eye data to.
     *
     * @return bool
     */
    bool SaveData(const FullPatientData& to_save, const char* folder_to_save_to, const char* filename_patient_data, const char* filename_eye_frames);

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
    bool LoadData(FullPatientData& toLoad, const char* folder_to_load_from, const char* filename_patient_data, const char* filename_eye_frames);

private:
    /**
     * @brief Actual function which saves EyeFrameData.
     * @details This function exists to allow for storing 1 or multiple EyeFrameData in one CSV file.
     *
     * @param to_save EyeFrameData class to save.
     * @param output_file ofstream object which allows for stream saving into the file.
     * @param last_record Whether this will be the last entry in the CSV. If so, omits new line.
     */
    void SaveEyeFrameData(const EyeFrameData& to_save, ofstream& output_file, bool last_record = true);

    /**
     * @brief Actual function which loads EyeFrameData.
     * @details This function exists to allow for loading 1 or multiple EyeFrameData from one CSV file.
     *
     * @param to_load EyeFrameData class to load into.
     * @param input_line_string stringstream holding a line from an EyeFrameData CSV file. Function parses this.
     */
    void LoadEyeFrameData(EyeFrameData& to_load, stringstream& input_line_string);

    /**
     * @brief Creates a formatted header in EyeFrameData CSV files to ensure human readability.
     *
     * @param output_file ofstream object which allows for stream saving into the file.
     */
    void CreateEyeFrameHeader(ofstream& output_file);
};

#endif // CSVSAVELOAD_H
