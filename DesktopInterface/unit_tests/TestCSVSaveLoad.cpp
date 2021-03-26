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
    QVERIFY(false);
}

void TestCSVSaveLoad::testSaveEyeSessionDataNormal()
{
    QVERIFY(false);
}

void TestCSVSaveLoad::testSaveEyeSessionDataFileAlreadyExists()
{
    QVERIFY(false);
}

void TestCSVSaveLoad::testLoadEyeSessionDataNoFileExists()
{
    QVERIFY(false);
}

void TestCSVSaveLoad::testLoadEyeSessionDataNormal()
{
    QVERIFY(false);
}

void TestCSVSaveLoad::testLoadEyeSessionDataAlreadyFilled()
{
    QVERIFY(false);
}

void TestCSVSaveLoad::testLoadEyeSessionDataFileMalformed()
{
    QVERIFY(false);
}


void TestCSVSaveLoad::testSaveFullPatientDataEmpty()
{
    QVERIFY(false);
}

void TestCSVSaveLoad::testSaveFullPatientDataNormal()
{
    QVERIFY(false);
}

void TestCSVSaveLoad::testSaveFullPatientDataFileAlreadyExists()
{
    QVERIFY(false);
}


void TestCSVSaveLoad::testLoadFullPatientDataNoFileExists()
{
    QVERIFY(false);
}

void TestCSVSaveLoad::testLoadFullPatientDataNormal()
{
    QVERIFY(false);
}

void TestCSVSaveLoad::testLoadFullPatientDataAlreadyFilled()
{
    QVERIFY(false);
}

void TestCSVSaveLoad::testLoadFullPatientDataFileMalformed()
{
    QVERIFY(false);
}

QTEST_MAIN(TestCSVSaveLoad)
#include "TestCSVSaveLoad.moc"
