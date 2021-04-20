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

class TempCSVLoader : public QObject
{
    Q_OBJECT
public:
    TempCSVLoader();

public slots:
    void LoadTempCSV(EyeTests::Tests testID, FullPatientData& current_patient_data);
signals:
    void tempCSVLoaded();

private:
    inline void LoadEyeFrameFloat3Value(float* arrayBegin, stringstream& input_line_string, string& number);

};

#endif // LOADTEMPCSV_H
