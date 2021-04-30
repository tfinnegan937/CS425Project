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
    output_file << "ParticipantID,Experiment,"
                   "ChangeOfHeadache,ChangeOfDizziness,ChangeOfNausea,ChangeOfFogginess,"
                   "HeadacheScore,DizzinessScore,NauseaScore,FogginessScore,"
                   "Timestamp,"
                   "LocalDotPositionX,LocalDotPositionY,LocalDotPositionZ,"
                   "WorldDotPositionX,WorldDotPositionY,WorldDotPositionZ,"
                   "HeadPositionX,HeadPositionY,HeadPositionZ,"
                   "HeadOrientationX,HeadOrientationY,HeadOrientationZ,"
                   "LeftEyeOriginX,LeftEyeOriginY,LeftEyeOriginZ,"
                   "LeftEyeDirectionX,LeftEyeDirectionY,LeftEyeDirectionZ,"
                   "RightEyeOriginX,RightEyeOriginY,RightEyeOriginZ,"
                   "RightEyeDirectionX,RightEyeDirectionY,RightEyeDirectionZ,"
                   "CombinedEyeOriginX,CombinedEyeOriginY,CombinedEyeOriginZ,"
                   "CombinedEyeDirectionX,CombinedEyeDirectionY,CombinedEyeDirectionZ,"
                   "FixationX,FixationY,FixationZ,"
                   "FirstConvergence,SecondConvergence,ThirdConvergence,"
                   "ChangeOfHeadache,ChangeOfDizziness,ChangeOfNausea,ChangeOfFogginess,"
                   "HeadacheScore,DizzinessScore,NauseaScore,FogginessScore,"
                   "FirstName,LastName,DataOfBirth,DateOfInjury,DateSeen,Sport,Age,Gender" << std::endl;
}


inline void CSVSaveLoad::LoadEyeFrameFloat3Value(float* arrayBegin, stringstream& input_line_string, string& number)
{
    getline(input_line_string, number, ',');
    arrayBegin[0] = stof(number);
    getline(input_line_string, number, ',');
    arrayBegin[1] = stof(number);
    getline(input_line_string, number, ',');
    arrayBegin[2] = stof(number);
}


inline void CSVSaveLoad::LoadDateFromCSV(int* arrayBegin, stringstream& input_line_string, string& number)
{
    getline(input_line_string, number, '/');
    arrayBegin[0] = stof(number);
    getline(input_line_string, number, '/');
    arrayBegin[1] = stof(number);
    getline(input_line_string, number, ',');
    arrayBegin[2] = stof(number);
}


inline string CSVSaveLoad::DateToString(const int* a) const
{
    return to_string(a[0]) + "/" + to_string(a[1]) + "/" + to_string(a[2]);
}

void CSVSaveLoad::SaveEyeSessionData(const FullPatientData& to_save, const int current_test_to_save, ofstream& output_file)
{
    auto& current_test = to_save.test_data[current_test_to_save];
    for(auto it = current_test.eyeFrames.begin(); it != current_test.eyeFrames.end(); it++) {
        output_file << to_save.participantID.toStdString() << ','
                    << FullPatientData::test_names[current_test_to_save] << ','
                    << (current_test.symptomHeadache - to_save.symptomHeadacheBaseline) << ','
                    << (current_test.symptomDizziness - to_save.symptomDizzinessBaseline) << ','
                    << (current_test.symptomNausea - to_save.symptomNauseaBaseline) << ','
                    << (current_test.symptomFogginess - to_save.symptomFogginessBaseline) << ','
                    << current_test.symptomHeadache << ','
                    << current_test.symptomDizziness << ','
                    << current_test.symptomNausea << ','
                    << current_test.symptomFogginess << ','
                    << it->timestamp << ','
                    << Serialize3Array(it->localDotPosition) << ','
                    << Serialize3Array(it->worldDotPosition) << ','
                    << Serialize3Array(it->headPosition) << ','
                    << Serialize3Array(it->headOrientation) << ','
                    << Serialize3Array(it->leftEyeOrigin) << ','
                    << Serialize3Array(it->leftEyeDirection) << ','
                    << Serialize3Array(it->rightEyeOrigin) << ','
                    << Serialize3Array(it->rightEyeDirection) << ','
                    << Serialize3Array(it->combinedEyeOrigin) << ','
                    << Serialize3Array(it->combinedEyeDirection) << ','
                    << Serialize3Array(it->fixation) << ','
                    << (current_test.symptomHeadache - to_save.symptomHeadacheBaseline) << ','
                    << (current_test.symptomDizziness - to_save.symptomDizzinessBaseline) << ','
                    << (current_test.symptomNausea - to_save.symptomNauseaBaseline) << ','
                    << (current_test.symptomFogginess - to_save.symptomFogginessBaseline) << ','
                    << current_test.symptomHeadache << ','
                    << current_test.symptomDizziness << ','
                    << current_test.symptomNausea << ','
                    << current_test.symptomFogginess << ','
                    << Serialize3Array(current_test.convergence_measurements) << ','
                    << to_save.first_name.toStdString() << ','
                    << to_save.last_name.toStdString() << ','
                    << DateToString(to_save.date_of_birth) << ','
                    << DateToString(to_save.date_of_injury) << ','
                    << DateToString(to_save.date_of_visit) << ','
                    << to_save.sport_played.toStdString() << ','
                    << to_save.age << ','
                    << to_save.gender.toStdString();

        if (current_test_to_save < NumOfTests - 1
                || it + 1 != current_test.eyeFrames.end()) {
            output_file << '\n';
        }
    }
}


void CSVSaveLoad::LoadEyeData(FullPatientData& to_load, ifstream& input_file)
{
    bool first_data_line = true;

    //Skip header line by jumping past first newline character.
    input_file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    string raw_line_data, value;
    for (size_t i = 0; i < NumOfTests; i++) {
        to_load.test_data[i].eyeFrames.clear();
    }
    //Iterates over every line and stores it in a string.
    while(getline(input_file, raw_line_data)){

        //Converts the string to a stringstream for ease of parsing.
        stringstream s(raw_line_data);
        EyeFrameData newEyeFrame;

        getline(s, value, ','); // Skips ParticipantID
        if (first_data_line) {
            to_load.participantID = QString(value.c_str());
        }

        getline(s, value, ','); // Grabs Experiment Name'
        //Finds which test to sort the current EyeFrame into based on experiment name.
        auto& current_test = to_load.test_data[FullPatientData::test_name_to_id.at(value)];

        //Only use this for the first data line to extrapolate baseline symptom scores
        float change[4];
        getline(s, value, ',');
        change[0] = stof(value);
        getline(s, value, ',');
        change[1] = stof(value);
        getline(s, value, ',');
        change[2] = stof(value);
        getline(s, value, ',');
        change[3] = stof(value);



        //Symptom scores
        getline(s, value, ',');
        current_test.symptomHeadache = stof(value);
        getline(s, value, ',');
        current_test.symptomDizziness = stof(value);
        getline(s, value, ',');
        current_test.symptomNausea = stof(value);
        getline(s, value, ',');
        current_test.symptomFogginess = stof(value);

        //If first data line, extrapolate baseline symptom scores
        if (first_data_line) {
            to_load.baseline_loaded = true;
            to_load.symptomHeadacheBaseline = current_test.symptomHeadache - change[0];
            to_load.symptomDizzinessBaseline = current_test.symptomDizziness - change[1];
            to_load.symptomNauseaBaseline =  current_test.symptomNausea - change[2];
            to_load.symptomFogginessBaseline = current_test.symptomFogginess - change[3];
        }

        getline(s, value, ','); // Timestamp
        newEyeFrame.timestamp = stoi(value);

        LoadEyeFrameFloat3Value(newEyeFrame.localDotPosition, s, value);
        LoadEyeFrameFloat3Value(newEyeFrame.worldDotPosition, s, value);
        LoadEyeFrameFloat3Value(newEyeFrame.headPosition, s, value);
        LoadEyeFrameFloat3Value(newEyeFrame.headOrientation, s, value);
        LoadEyeFrameFloat3Value(newEyeFrame.leftEyeOrigin, s, value);
        LoadEyeFrameFloat3Value(newEyeFrame.leftEyeDirection, s, value);
        LoadEyeFrameFloat3Value(newEyeFrame.rightEyeOrigin, s, value);
        LoadEyeFrameFloat3Value(newEyeFrame.rightEyeDirection, s, value);
        LoadEyeFrameFloat3Value(newEyeFrame.combinedEyeOrigin, s, value);
        LoadEyeFrameFloat3Value(newEyeFrame.combinedEyeDirection, s, value);
        LoadEyeFrameFloat3Value(newEyeFrame.fixation, s, value);

        //Load convergence measurements, should load a 0 unless it is a convergence test.
        getline(s, value, ',');
        current_test.convergence_measurements[0] = stof(value);
        getline(s, value, ',');
        current_test.convergence_measurements[1] = stof(value);
        getline(s, value, ',');
        current_test.convergence_measurements[2] = stof(value);

        if (first_data_line) {
            getline(s, value, ','); // Ignore 2nd Change Of Symptom Scores
            getline(s, value, ',');
            getline(s, value, ',');
            getline(s, value, ',');
            getline(s, value, ','); // Ignore 2nd Symptom Scores
            getline(s, value, ',');
            getline(s, value, ',');
            getline(s, value, ',');

            getline(s, value, ',');
            to_load.first_name = QString(value.c_str());
            getline(s, value, ',');
            to_load.last_name = QString(value.c_str());

            LoadDateFromCSV(to_load.date_of_birth, s, value);
            LoadDateFromCSV(to_load.date_of_injury, s, value);
            LoadDateFromCSV(to_load.date_of_visit, s, value);

            getline(s, value, ',');
            to_load.sport_played = QString(value.c_str());
            getline(s, value, ',');
            to_load.age = stoi(value);
            getline(s, value, ',');
            to_load.gender = QString(value.c_str());

            first_data_line = false;
        }

        current_test.eyeFrames.push_back(newEyeFrame);
    }
    std::cout << 4 << std::endl;
}


bool CSVSaveLoad::SaveData(const FullPatientData& to_save, const char* folder_to_save_to, const char* filename_patient_data)
{

    string filepath_patient_data = string(folder_to_save_to) + string(filename_patient_data);
    ofstream output_file;
    output_file.open(filepath_patient_data, ios::out | ios::trunc);


    if (!output_file.is_open())
        return false;

    CreateEyeFrameHeader(output_file);


    for (size_t i = 0; i < NumOfTests; i++) {
        SaveEyeSessionData(to_save, i, output_file);
    }
    output_file.close();

    return true;

}

bool CSVSaveLoad::LoadData(FullPatientData& to_load, const char* folder_to_load_from, const char* filename_patient_data)
{
    string filepath_patient_data = string(folder_to_load_from) + string(filename_patient_data);
    ifstream input_file;

    input_file.open(filename_patient_data, std::ios::binary);

    // If failed to open file or file empty, return failure.
    if (!input_file.is_open() || input_file.peek() == std::ifstream::traits_type::eof()) {
        return false;
    }


    LoadEyeData(to_load, input_file);
    input_file.close();

    return true;
}
