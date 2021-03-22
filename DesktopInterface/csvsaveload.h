#ifndef CSVSAVELOAD_H
#define CSVSAVELOAD_H

#include "../shared_include/EyeFrameData.h"
#include "../shared_include/EyeSessionData.h"
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


class CSVSaveLoad
{
public:
    CSVSaveLoad();

    bool SaveData(const EyeFrameData& toSave, const char* filename);
    bool LoadData(EyeFrameData& toLoad, const char* filename);
    bool SaveData(const EyeSessionData& toSave, const char* filename);
    bool LoadData(EyeSessionData& toLoad, const char* filename);
    //bool SaveData(const FullPatientData& toSave, const char* filename);
    //bool LoadData(FullPatientData& toLoad, const char* filename);

private:
    void SaveEyeFrameData(const EyeFrameData& toSave, ofstream& output_file);
    void LoadEyeFrameData(EyeFrameData& toLoad, stringstream& input_line_string);
};

#endif // CSVSAVELOAD_H
