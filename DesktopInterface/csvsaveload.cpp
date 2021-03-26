/** @file csvsaveload.cpp
*
*   Implements csvsaveload.h. Functions to save and load from CSV files.
*
*   @author Isak Ohman
*   @author Ryan Gorman
*   @author Timothy Finnegan
*   @date 2021
*   @copyright MIT License
*/

#include "csvsaveload.h"

CSVSaveLoad::CSVSaveLoad()
{

}

void CSVSaveLoad::CreateEyeFrameHeader(ofstream& output_file)
{
    output_file << "Timestamp,"
                   "FixationX,FixationY,FixationZ,"
                   "LeftEyeDirectionX,LeftEyeDirectionY,LeftEyeDirectionZ,"
                   "RightEyeDirectionX,RightEyeDirectionY,RightEyeDirectionZ,"
                   "LeftEyeOriginX,LeftEyeOriginY,LeftEyeOriginZ,"
                   "RightEyeOriginX,RightEyeOriginY,RightEyeOriginZ" << std::endl;
}


void CSVSaveLoad::SaveEyeFrameData(const EyeFrameData& to_save, ofstream& output_file, bool last_record)
{
    output_file << to_save.timestamp << ','
                << to_save.fixation[0] << ','
                << to_save.fixation[1] << ','
                << to_save.fixation[2] << ','
                << to_save.leftEyeDirection[0] << ','
                << to_save.leftEyeDirection[1] << ','
                << to_save.leftEyeDirection[2] << ','
                << to_save.rightEyeDirection[0] << ','
                << to_save.rightEyeDirection[1] << ','
                << to_save.rightEyeDirection[2] << ','
                << to_save.leftEyeOrigin[0] << ','
                << to_save.leftEyeOrigin[1] << ','
                << to_save.leftEyeOrigin[2] << ','
                << to_save.rightEyeOrigin[0] << ','
                << to_save.rightEyeOrigin[1] << ','
                << to_save.rightEyeOrigin[2];
    if (!last_record) output_file << '\n';
}


void CSVSaveLoad::LoadEyeFrameData(EyeFrameData& to_load, stringstream& input_line_string)
{
    string number;
    //Loads data from stream up to a ',' character.
    getline(input_line_string, number, ',');
    to_load.timestamp = stoi(number);
    getline(input_line_string, number, ',');
    to_load.fixation[0] = stof(number);
    getline(input_line_string, number, ',');
    to_load.fixation[1] = stof(number);
    getline(input_line_string, number, ',');
    to_load.fixation[2] = stof(number);
    getline(input_line_string, number, ',');
    to_load.leftEyeDirection[0] = stof(number);
    getline(input_line_string, number, ',');
    to_load.leftEyeDirection[1] = stof(number);
    getline(input_line_string, number, ',');
    to_load.leftEyeDirection[2] = stof(number);
    getline(input_line_string, number, ',');
    to_load.rightEyeDirection[0] = stof(number);
    getline(input_line_string, number, ',');
    to_load.rightEyeDirection[1] = stof(number);
    getline(input_line_string, number, ',');
    to_load.rightEyeDirection[2] = stof(number);
    getline(input_line_string, number, ',');
    to_load.leftEyeOrigin[0] = stof(number);
    getline(input_line_string, number, ',');
    to_load.leftEyeOrigin[1] = stof(number);
    getline(input_line_string, number, ',');
    to_load.leftEyeOrigin[2] = stof(number);
    getline(input_line_string, number, ',');
    to_load.rightEyeOrigin[0] = stof(number);
    getline(input_line_string, number, ',');
    to_load.rightEyeOrigin[1] = stof(number);
    getline(input_line_string, number, ',');
    to_load.rightEyeOrigin[2] = stof(number);
}

bool CSVSaveLoad::SaveData(const EyeFrameData& to_save, const char* filename)
{
    ofstream output_file;
    output_file.open(filename, ios::out);

    if (output_file.is_open()) {
        CreateEyeFrameHeader(output_file);
        try {
            SaveEyeFrameData(to_save, output_file, true);
        }
        // If file is malformed, will catch it here.
        catch (...) {
            return false;
        }
        output_file.close();
        return true;
    } else {
        return false;
    }
}


bool CSVSaveLoad::LoadData(EyeFrameData& to_load, const char* filename)
{
    fstream input_file;
    input_file.open(filename, ios::in);

    if (input_file.is_open()) {
        //Skip header line by jumping past first newline character.
        input_file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        string raw_line_data;

        //Extract a line from the file.
        input_file >> raw_line_data;
        //Convert it into a stringstream for easy parsing.
        stringstream s(raw_line_data);
        LoadEyeFrameData(to_load, s);

        input_file.close();
        return true;

    } else {
        return false;
    }
}


bool CSVSaveLoad::SaveData(const EyeSessionData& to_save, const char* filename)
{
    ofstream output_file;
    output_file.open(filename, ios::out);

    if (output_file.is_open()) {
        CreateEyeFrameHeader(output_file);

        //For every entry of EyeFrameData, insert that class's data into a new line.
        //If last entry, do not inlude newline character.
        for(auto it = to_save.eyeFrames.begin(); it !=to_save.eyeFrames.end(); it++) {
            if (it == to_save.eyeFrames.end()) {
                SaveEyeFrameData(*it, output_file, false);
            } else {
                SaveEyeFrameData(*it, output_file, true);
            }
        }
        output_file.close();
        return true;
    } else {
        return false;
    }
}


bool CSVSaveLoad::LoadData(EyeSessionData& to_load, const char* filename)
{
    to_load.eyeFrames.clear();

    fstream input_file;
    input_file.open(filename, ios::in);

    if (input_file.is_open()) {  
        //Skip header line by jumping past first newline character.
        input_file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        string raw_line_data;
        //Iterates over every line and stores it in a string.
        while(std::getline(input_file, raw_line_data)){
            //Converts the string to a stringstream for ease of parsing.
            stringstream s(raw_line_data);
            EyeFrameData newEyeFrame;
            LoadEyeFrameData(newEyeFrame, s);
            to_load.eyeFrames.push_back(newEyeFrame);
        }
        input_file.close();
        return true;

    } else {
        return false;
    }

}
//bool CSVSaveLoad::SaveData(const FullPatientData& to_save, const char* filename_patient_data, const char* filename_eye_frames);
//bool CSVSaveLoad::LoadData(FullPatientData& to_load, const char* filename_patient_data, const char* filename_eye_frames);
