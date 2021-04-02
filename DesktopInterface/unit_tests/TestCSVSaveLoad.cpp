#include <UnitTestMain.h>
#include <stdio.h>
#include "../csvsaveload.h"
using namespace std;



void TestCSVSaveLoad::init()
{
    cleanFile(testFileName);
}

void TestCSVSaveLoad::cleanup()
{
    cleanFile(testFileName);
}

void TestCSVSaveLoad::cleanFile(const char* filename)
{
   //std::remove(filename);
}

void TestCSVSaveLoad::populateTestPatientData(FullPatientData& test)
{
    EyeFrameData test_frame;
    test.participantID = QString("testID");
    test.first_name = QString("first_test");
    test.last_name = QString("last_test");
    test.sport_played = QString("Sportsball");
    test.gender = QString("N/A");
    test.date_of_visit[0] = 2;
    test.date_of_visit[1] = 5;
    test.date_of_visit[2] = 2020;
    test.date_of_injury[0] = 5;
    test.date_of_injury[1] = 2;
    test.date_of_injury[2] = 48;
    test.age = 18;
    test_frame.timestamp = 1;
    test_frame.fixation[0] = -2.2;
    test_frame.leftEyeDirection[1] = 3.3;
    test_frame.rightEyeDirection[2] = -4.4;
    test_frame.leftEyeOrigin[0] = 5.5;
    test_frame.rightEyeOrigin[1] = -6.6;

    for (size_t i = 0; i < NumOfTests; i++) {
        test.test_data[i].eyeFrames.push_back(test_frame);
        test.tests_with_data[i] = true;
        test.test_data[i].changeOfSymptoms = 100;
        test.test_data[i].symptomScore = -100;
    }
}

bool TestCSVSaveLoad::areEyeFramesEqual(const EyeFrameData& a, const EyeFrameData& b)
{
    if (
            a.timestamp != b.timestamp ||
            memcmp(a.localDotPosition, b.localDotPosition, sizeof(a.localDotPosition)) != 0 ||
            memcmp(a.worldDotPosition, b.worldDotPosition, sizeof(a.worldDotPosition)) != 0 ||
            memcmp(a.headPosition, b.headPosition, sizeof(a.headPosition)) != 0 ||
            memcmp(a.headOrientation, b.headOrientation, sizeof(a.headOrientation)) != 0 ||
            memcmp(a.leftEyeDirection, b.leftEyeDirection, sizeof(a.leftEyeDirection)) != 0 ||
            memcmp(a.rightEyeDirection, b.rightEyeDirection, sizeof(a.rightEyeDirection)) != 0 ||
            memcmp(a.leftEyeOrigin, b.leftEyeOrigin, sizeof(a.leftEyeOrigin)) != 0 ||
            memcmp(a.rightEyeOrigin, b.rightEyeOrigin, sizeof(a.rightEyeOrigin)) != 0 ||
            memcmp(a.combinedEyeDirection, b.combinedEyeDirection, sizeof(a.combinedEyeDirection)) != 0 ||
            memcmp(a.combinedEyeOrigin, b.combinedEyeOrigin, sizeof(a.combinedEyeOrigin)) != 0 ||
            memcmp(a.fixation, b.fixation, sizeof(a.fixation)) != 0
        ) {
        return false;
    }
    return true;
}


bool TestCSVSaveLoad::areEyeSessionsEqual(const EyeSessionData& a, const EyeSessionData& b)
{
    if (a.eyeFrames.size() != b.eyeFrames.size() ||
            a.changeOfSymptoms != b.changeOfSymptoms ||
            a.symptomScore != b.symptomScore) {
        return false;
    }
    for (size_t i = 0; i < a.eyeFrames.size(); i++) {
        if (!areEyeFramesEqual(a.eyeFrames[i], b.eyeFrames[i])) {
            cout << "test2" << endl;
            return false;
        }
    }
    return true;
}


bool TestCSVSaveLoad::arePatientDataEqual(const FullPatientData& a, const FullPatientData& b)
{
    if (
            a.first_name != b.first_name ||
            a.last_name != b.last_name ||
            a.participantID != b.participantID ||
            a.age != b.age ||
            a.sport_played != b.sport_played ||
            a.gender != b.gender ||
            memcmp(a.date_of_injury, b.date_of_injury, sizeof(a.date_of_injury)) != 0 ||
            memcmp(a.date_of_visit, b.date_of_visit, sizeof(a.date_of_visit)) != 0
            ) {
        return false;
    }

    for (size_t i = 0; i < NumOfTests; i++) {
        if (!areEyeSessionsEqual(a.test_data[i], b.test_data[i])) return false;
    }

    return true;
}


void TestCSVSaveLoad::testSaveLoadFullPatientDataEmpty()
{
    CSVSaveLoad testCSV;
    FullPatientData test;
    QVERIFY(testCSV.SaveData(test, "./", testFileName));
}

void TestCSVSaveLoad::testSaveLoadFullPatientDataNormal()
{
    CSVSaveLoad testCSV;
    FullPatientData test;
    FullPatientData load;

    populateTestPatientData(test);

    testCSV.SaveData(test, "", testFileName);
    testCSV.LoadData(load, "", testFileName);

    QVERIFY(arePatientDataEqual(test, load));
}

void TestCSVSaveLoad::testSaveFullPatientDataFileAlreadyExists()
{
    CSVSaveLoad testCSV;
    FullPatientData test;
    FullPatientData load;

    populateTestPatientData(test);

    testCSV.SaveData(test, "./", testFileName);
    testCSV.SaveData(test, "./", testFileName);
    testCSV.LoadData(load, "./", testFileName);

    QVERIFY(arePatientDataEqual(test, load));
}


void TestCSVSaveLoad::testLoadFullPatientDataNoFileExists()
{
    CSVSaveLoad testCSV;
    FullPatientData test;


    QVERIFY(!testCSV.LoadData(test, "./", testFileName));
}

void TestCSVSaveLoad::testLoadFullPatientDataAlreadyFilled()
{
    CSVSaveLoad testCSV;
    FullPatientData test;
    FullPatientData load;

    populateTestPatientData(test);

    EyeFrameData test_frame;
    load.test_data[0].eyeFrames.push_back(test_frame);
    load.tests_with_data[0] = true;

    testCSV.SaveData(test, "./", testFileName);
    testCSV.LoadData(load, "./", testFileName);

    QVERIFY(arePatientDataEqual(test, load));
}

QTEST_MAIN(TestCSVSaveLoad)
#include "TestCSVSaveLoad.moc"
