#include <UnitTestMain.h>
#include <stdio.h>
#include "../csvsaveload.h"
using namespace std;



void TestCSVSaveLoad::init()
{
    cleanFile(testFileName);

    for (size_t i = 0; i < NumOfTests; i++) {
        cleanFile((testFileName + FullPatientData::test_names[i] + ".csv").c_str());
    }
    string temp = string(testFileName) + ".dat";
    cleanFile(temp.c_str());
}

void TestCSVSaveLoad::cleanup()
{
    cleanFile(testFileName);

    for (size_t i = 0; i < NumOfTests; i++) {
        cleanFile((testFileName + FullPatientData::test_names[i] + ".csv").c_str());
    }
    string temp = string(testFileName) + ".dat";
    cleanFile(temp.c_str());
}

void TestCSVSaveLoad::cleanFile(const char* filename)
{
   std::remove(filename);
}


bool TestCSVSaveLoad::areEyeFramesEqual(const EyeFrameData& a, const EyeFrameData& b)
{
    if (
            a.timestamp != b.timestamp ||
            memcmp(a.fixation, b.fixation, sizeof(a.fixation)) != 0 ||
            memcmp(a.leftEyeDirection, b.leftEyeDirection, sizeof(a.leftEyeDirection)) != 0 ||
            memcmp(a.rightEyeDirection, b.rightEyeDirection, sizeof(a.rightEyeDirection)) != 0 ||
            memcmp(a.leftEyeOrigin, b.leftEyeOrigin, sizeof(a.leftEyeOrigin)) != 0 ||
            memcmp(a.rightEyeOrigin, b.rightEyeOrigin, sizeof(a.rightEyeOrigin)) != 0
        ) {
        return false;
    }
    return true;
}


bool TestCSVSaveLoad::areEyeSessionsEqual(const EyeSessionData& a, const EyeSessionData& b)
{
    if (a.eyeFrames.size() != b.eyeFrames.size()) {
        return false;
    }
    for (size_t i = 0; i < a.eyeFrames.size(); i++) {
        if (!areEyeFramesEqual(a.eyeFrames[i], b.eyeFrames[i])) {
            cout << a.eyeFrames[i].fixation[0] << " " << b.eyeFrames[i].fixation[0] << endl;
            return false;
        }
    }
    return true;
}


bool TestCSVSaveLoad::arePatientDataEqual(const FullPatientData& a, const FullPatientData& b)
{
    if (
            a.first_name == b.first_name &&
            a.last_name == b.last_name &&
            a.date_of_birth[0] == b.date_of_birth[0] &&
            a.date_of_birth[1] == b.date_of_birth[1] &&
            a.date_of_birth[2] == b.date_of_birth[2] &&
            a.date_of_visit[0] == b.date_of_visit[0] &&
            a.date_of_visit[1] == b.date_of_visit[1] &&
            a.date_of_visit[2] == b.date_of_visit[2] &&
            a.description_of_incidence == b.description_of_incidence &&
            a.is_concussed == b.is_concussed &&
            a.tests_with_data[0] == b.tests_with_data[0] &&
            a.tests_with_data[1] == b.tests_with_data[1] &&
            a.tests_with_data[2] == b.tests_with_data[2] &&
            a.tests_with_data[3] == b.tests_with_data[3] &&
            a.tests_with_data[4] == b.tests_with_data[4] &&
            a.tests_with_data[5] == b.tests_with_data[5] &&
            a.tests_with_data[6] == b.tests_with_data[6]
            ) {
        for (size_t i = 0; i < NumOfTests; i++) {
            if (!areEyeSessionsEqual(a.test_data[i], b.test_data[i])) return false;
        }
        return true;
    }

    return false;
}


void TestCSVSaveLoad::testSaveLoadEyeFrameDataEmpty()
{
    CSVSaveLoad testCSV;
    EyeFrameData test;
    EyeFrameData loaded;

    testCSV.SaveData(test, testFileName);
    testCSV.LoadData(loaded, testFileName);

    QVERIFY(areEyeFramesEqual(test, loaded));
}

void TestCSVSaveLoad::testSaveLoadEyeFrameDataNormal()
{
    CSVSaveLoad testCSV;
    EyeFrameData test;
    EyeFrameData loaded;

    test.timestamp = 1;
    test.fixation[0] = 2.2;
    test.leftEyeDirection[1] = 3.3;
    test.rightEyeDirection[2] = 4.4;
    test.leftEyeOrigin[0] = 5.5;
    test.rightEyeOrigin[1] = 6.6;

    testCSV.SaveData(test, testFileName);
    testCSV.LoadData(loaded, testFileName);

    QVERIFY(areEyeFramesEqual(test, loaded));
}

void TestCSVSaveLoad::testSaveLoadEyeFrameDataFileAlreadyExists()
{
    CSVSaveLoad testCSV;
    EyeFrameData test;
    EyeFrameData loaded;

    test.timestamp = 1;
    test.fixation[0] = 2.2;
    test.leftEyeDirection[1] = 3.3;
    test.rightEyeDirection[2] = 4.4;
    test.leftEyeOrigin[0] = 5.5;
    test.rightEyeOrigin[1] = 6.6;

    testCSV.SaveData(test, testFileName);
    testCSV.SaveData(test, testFileName);
    testCSV.LoadData(loaded, testFileName);

    QVERIFY(areEyeFramesEqual(test, loaded));
}


void TestCSVSaveLoad::testLoadEyeFrameDataNoFileExists()
{
    CSVSaveLoad testCSV;
    EyeFrameData test;
    QVERIFY(!testCSV.LoadData(test, testFileName));
}

void TestCSVSaveLoad::testLoadEyeFrameDataAlreadyFilled()
{
    CSVSaveLoad testCSV;
    EyeFrameData test;
    EyeFrameData loaded;

    test.timestamp = 1;
    test.fixation[0] = -2.2;
    test.leftEyeDirection[1] = 3.3;
    test.rightEyeDirection[2] = -4.4;
    test.leftEyeOrigin[0] = 5.5;
    test.rightEyeOrigin[1] = -6.6;

    testCSV.SaveData(test, testFileName);

    loaded.timestamp = 1;
    loaded.fixation[1] = 4.2;
    loaded.leftEyeDirection[2] = 7.3;
    loaded.rightEyeDirection[0] = 1000000000;
    loaded.leftEyeOrigin[1] = 5;
    loaded.rightEyeOrigin[2] = -0.00000000005;

    testCSV.LoadData(loaded, testFileName);

    QVERIFY(areEyeFramesEqual(test, loaded));
}

void TestCSVSaveLoad::testLoadEyeFrameDataFileMalformed()
{
    CSVSaveLoad testCSV;
    EyeFrameData test;
    QVERIFY(!testCSV.LoadData(test, "DesktopInterfaceTest"));
}


void TestCSVSaveLoad::testSaveEyeSessionDataEmpty()
{
    CSVSaveLoad testCSV;
    EyeSessionData test;
    EyeSessionData loaded;

    testCSV.SaveData(test, testFileName);
    testCSV.LoadData(loaded, testFileName);

    QVERIFY(areEyeSessionsEqual(test, loaded));
}

void TestCSVSaveLoad::testSaveLoadEyeSessionDataNormal()
{
    CSVSaveLoad testCSV;
    EyeFrameData test_frame;
    EyeSessionData test_session;
    EyeSessionData load_session;

    test_frame.timestamp = 1;
    test_frame.fixation[0] = -2.2;
    test_frame.leftEyeDirection[1] = 3.3;
    test_frame.rightEyeDirection[2] = -4.4;
    test_frame.leftEyeOrigin[0] = 5.5;
    test_frame.rightEyeOrigin[1] = -6.6;

    for (size_t i = 0; i < 100; i++) {
        test_session.eyeFrames.push_back(test_frame);
    }

    testCSV.SaveData(test_session, testFileName);
    testCSV.LoadData(load_session, testFileName);
    QVERIFY(areEyeSessionsEqual(test_session, load_session));
}

void TestCSVSaveLoad::testSaveEyeSessionDataFileAlreadyExists()
{
    CSVSaveLoad testCSV;
    EyeFrameData test_frame;
    EyeSessionData dummy_session;
    EyeSessionData test_session;
    EyeSessionData load_session;

    dummy_session.eyeFrames.push_back(*(new EyeFrameData));

    test_frame.timestamp = 1;
    test_frame.fixation[0] = -2.2;
    test_frame.leftEyeDirection[1] = 3.3;
    test_frame.rightEyeDirection[2] = -4.4;
    test_frame.leftEyeOrigin[0] = 5.5;
    test_frame.rightEyeOrigin[1] = -6.6;

    for (size_t i = 0; i < 100; i++) {
        test_session.eyeFrames.push_back(test_frame);
    }

    testCSV.SaveData(dummy_session, testFileName);
    testCSV.SaveData(test_session, testFileName);
    testCSV.LoadData(load_session, testFileName);
    QVERIFY(areEyeSessionsEqual(test_session, load_session));
}

void TestCSVSaveLoad::testLoadEyeSessionDataNoFileExists()
{
    CSVSaveLoad testCSV;
    EyeSessionData test_session;
    QVERIFY(!testCSV.LoadData(test_session, testFileName));
}

void TestCSVSaveLoad::testLoadEyeSessionDataAlreadyFilled()
{
    CSVSaveLoad testCSV;
    EyeFrameData test_frame;
    EyeSessionData test_session;
    EyeSessionData load_session;

    test_frame.timestamp = 1;
    test_frame.fixation[0] = -2.2;
    test_frame.leftEyeDirection[1] = 3.3;
    test_frame.rightEyeDirection[2] = -4.4;
    test_frame.leftEyeOrigin[0] = 5.5;
    test_frame.rightEyeOrigin[1] = -6.6;

    for (size_t i = 0; i < 100; i++) {
        test_session.eyeFrames.push_back(test_frame);
    }

    testCSV.SaveData(test_session, testFileName);

    test_frame.timestamp = 1;
    test_frame.fixation[1] = -2.2;
    test_frame.leftEyeDirection[2] = 3.3;
    test_frame.rightEyeDirection[0] = -4.4;
    test_frame.leftEyeOrigin[1] = 5.5;
    test_frame.rightEyeOrigin[2] = -6.6;

    load_session.eyeFrames.push_back(test_frame);

    testCSV.LoadData(load_session, testFileName);
    QVERIFY(areEyeSessionsEqual(test_session, load_session));
}

void TestCSVSaveLoad::testLoadEyeSessionDataFileMalformed()
{
    CSVSaveLoad testCSV;
    EyeSessionData test;
    QVERIFY(!testCSV.LoadData(test, testFileName));
}


void TestCSVSaveLoad::testSaveLoadFullPatientDataEmpty()
{
    CSVSaveLoad testCSV;
    FullPatientData test;
    QVERIFY(testCSV.SaveData(test, "./", testFileName, testFileName));
}

void TestCSVSaveLoad::testSaveLoadFullPatientDataNormal()
{
    CSVSaveLoad testCSV;
    FullPatientData test;
    FullPatientData load;
    EyeFrameData test_frame;

    test_frame.timestamp = 1;
    test_frame.fixation[0] = -2.2;
    test_frame.leftEyeDirection[1] = 3.3;
    test_frame.rightEyeDirection[2] = -4.4;
    test_frame.leftEyeOrigin[0] = 5.5;
    test_frame.rightEyeOrigin[1] = -6.6;

    for (size_t i = 0; i < NumOfTests; i++) {
        test.test_data[i].eyeFrames.push_back(test_frame);
        test.tests_with_data[i] = true;
    }

    testCSV.SaveData(test, "./", testFileName, testFileName);
    testCSV.LoadData(load, "./", testFileName, testFileName);

    QVERIFY(arePatientDataEqual(test, load));
}

void TestCSVSaveLoad::testSaveFullPatientDataFileAlreadyExists()
{
    CSVSaveLoad testCSV;
    FullPatientData test;
    FullPatientData load;
    EyeFrameData test_frame;

    test_frame.timestamp = 1;
    test_frame.fixation[0] = -2.2;
    test_frame.leftEyeDirection[1] = 3.3;
    test_frame.rightEyeDirection[2] = -4.4;
    test_frame.leftEyeOrigin[0] = 5.5;
    test_frame.rightEyeOrigin[1] = -6.6;

    for (size_t i = 0; i < NumOfTests; i++) {
        test.test_data[i].eyeFrames.push_back(test_frame);
        test.tests_with_data[i] = true;
    }

    testCSV.SaveData(test, "./", testFileName, testFileName);
    testCSV.SaveData(test, "./", testFileName, testFileName);
    testCSV.LoadData(load, "./", testFileName, testFileName);

    QVERIFY(arePatientDataEqual(test, load));
}


void TestCSVSaveLoad::testLoadFullPatientDataNoFileExists()
{
    CSVSaveLoad testCSV;
    FullPatientData test;


    QVERIFY(!testCSV.LoadData(test, "./", testFileName, testFileName));
}

void TestCSVSaveLoad::testLoadFullPatientDataAlreadyFilled()
{
    CSVSaveLoad testCSV;
    FullPatientData test;
    FullPatientData load;
    EyeFrameData test_frame;

    test_frame.timestamp = 1;
    test_frame.fixation[0] = -2.2;
    test_frame.leftEyeDirection[1] = 3.3;
    test_frame.rightEyeDirection[2] = -4.4;
    test_frame.leftEyeOrigin[0] = 5.5;
    test_frame.rightEyeOrigin[1] = -6.6;

    for (size_t i = 0; i < NumOfTests; i++) {
        test.test_data[i].eyeFrames.push_back(test_frame);
        test.tests_with_data[i] = true;
    }

    load.test_data[0].eyeFrames.push_back(test_frame);
    load.tests_with_data[0] = true;

    testCSV.SaveData(test, "./", testFileName, testFileName);
    testCSV.LoadData(load, "./", testFileName, testFileName);

    QVERIFY(arePatientDataEqual(test, load));
}

QTEST_MAIN(TestCSVSaveLoad)
#include "TestCSVSaveLoad.moc"
