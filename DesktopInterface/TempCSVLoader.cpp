#include "TempCSVLoader.h"

TempCSVLoader::TempCSVLoader()
{

}


void TempCSVLoader::LoadTempCSV(EyeTests::Tests testID, FullPatientData& current_patient_data)
{
    string file_path = "../temp/";

    switch(testID) {
    case EyeTests::Tests::smooth_pursuits:
        file_path += SMOOTH_PURSUITS_TEMP_CSV;
        break;
    case EyeTests::Tests::saccades_horizontal:
        file_path += SACCADES_HORIZONTAL_TEMP_CSV;
        break;
    case EyeTests::Tests::saccades_vertical:
        file_path += SACCADES_VERTICAL_TEMP_CSV;
        break;
    case EyeTests::Tests::vor_horizontal:
        file_path += VOR_HORIZONTAL_TEMP_CSV;
        break;
    case EyeTests::Tests::vor_vertical:
        file_path += VOR_VERTICAL_TEMP_CSV;
        break;
    case EyeTests::Tests::near_point_convergence:
        file_path += NEAR_POINT_CONVERGENCE_TEMP_CSV;
        break;
    case EyeTests::Tests::visual_motion_sensitivity:
        file_path += VMS_TEMP_CSV;
        break;
    }

    ifstream input_file;
    input_file.open(file_path, std::ios::binary);

    // If failed to open file or file empty, return failure.
    if (!input_file.is_open() || input_file.peek() == std::ifstream::traits_type::eof()) {
        return;
    }

    //Skip header line by jumping past first newline character.
    input_file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    string raw_line_data, value;
    //Clear data from previous test of same type.
    current_patient_data.test_data[testID].eyeFrames.clear();
    auto& current_test = current_patient_data.test_data[testID];
    //Iterates over every line and stores it in a string.
    while(getline(input_file, raw_line_data)){

        //Converts the string to a stringstream for ease of parsing.
        stringstream s(raw_line_data);
        EyeFrameData newEyeFrame;

        getline(s, value, ','); // Grabs timestamps
        newEyeFrame.timestamp = stof(value);
        getline(s, value, ','); // Grabs Test ID, can ignore

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

        current_test.eyeFrames.push_back(newEyeFrame);
    }

    input_file.close();
    emit(tempCSVLoaded());
}


inline void TempCSVLoader::LoadEyeFrameFloat3Value(float* arrayBegin, stringstream& input_line_string, string& number)
{
    getline(input_line_string, number, ',');
    arrayBegin[0] = stof(number);
    getline(input_line_string, number, ',');
    arrayBegin[1] = stof(number);
    getline(input_line_string, number, ',');
    arrayBegin[2] = stof(number);
}
