#include "csvsaveload.h"

CSVSaveLoad::CSVSaveLoad()
{

}


void CSVSaveLoad::SaveEyeFrameData(const EyeFrameData& toSave, ofstream& output_file)
{
    output_file << toSave.timestamp << ','
                << toSave.fixation << ','
                << toSave.leftEyeDirection << ','
                << toSave.rightEyeDirection << ','
                << toSave.leftEyeOrigin << ','
                << toSave.rightEyeOrigin << "\n";
}


void CSVSaveLoad::LoadEyeFrameData(EyeFrameData& toLoad, stringstream& input_line_string)
{
    string number;
    getline(input_line_string, number, ',');
    toLoad.timestamp = stoi(number);
    getline(input_line_string, number, ',');
    toLoad.fixation = stof(number);
    getline(input_line_string, number, ',');
    toLoad.leftEyeDirection = stof(number);
    getline(input_line_string, number, ',');
    toLoad.rightEyeDirection = stof(number);
    getline(input_line_string, number, ',');
    toLoad.leftEyeOrigin = stof(number);
    getline(input_line_string, number, ',');
    toLoad.rightEyeOrigin = stof(number);
}

bool CSVSaveLoad::SaveData(const EyeFrameData& toSave, const char* filename)
{
    ofstream output_file;
    output_file.open(filename, ios::out);

    if (output_file.is_open()) {
        SaveEyeFrameData(toSave, output_file);
        output_file.close();
        return true;
    } else {
        return false;
    }
}


bool CSVSaveLoad::LoadData(EyeFrameData& toLoad, const char* filename)
{
    fstream input_file;
    input_file.open(filename, ios::in);

    if (input_file.is_open()) {
        string raw_line_data;

        input_file >> raw_line_data;
        stringstream s(raw_line_data);
        LoadEyeFrameData(toLoad, s);

        input_file.close();
        return true;

    } else {
        return false;
    }
}


bool CSVSaveLoad::SaveData(const EyeSessionData& toSave, const char* filename)
{
    ofstream output_file;
    output_file.open(filename, ios::out);

    if (output_file.is_open()) {
        for(auto& x : toSave.eyeFrames) {
            SaveEyeFrameData(x, output_file);
        }
        output_file.close();
        return true;
    } else {
        return false;
    }
}


bool CSVSaveLoad::LoadData(EyeSessionData& toLoad, const char* filename)
{
    toLoad.eyeFrames.clear();

    fstream input_file;
    input_file.open(filename, ios::in);

    if (input_file.is_open()) {
        string raw_line_data;
        while(std::getline(input_file, raw_line_data)){
            stringstream s(raw_line_data);
            EyeFrameData newEyeFrame;
            LoadEyeFrameData(newEyeFrame, s);
            toLoad.eyeFrames.push_back(newEyeFrame);
        }
        input_file.close();
        return true;

    } else {
        return false;
    }

}
//bool CSVSaveLoad::SaveData(const FullPatientData& toSave);
//bool CSVSaveLoad::LoadData(FullPatientData& toLoad);
