#include <QtTest/QtTest>
#include "../../shared_include/EyeFrameData.h"

class TestCSVSaveLoad : public QObject
{
    Q_OBJECT

    char* testFileName = "unit_test.csv";
private slots:
    void init();
    void cleanup();
    void cleanFile(const char* filename);

    bool areEyeFramesEqual(const EyeFrameData& a, const EyeFrameData& b);

    void testSaveLoadEyeFrameDataEmpty();
    void testSaveLoadEyeFrameDataNormal();
    void testSaveLoadEyeFrameDataFileAlreadyExists();

    void testLoadEyeFrameDataNoFileExists();
    void testLoadEyeFrameDataAlreadyFilled();
    void testLoadEyeFrameDataFileMalformed();

    void testSaveEyeSessionDataEmpty();
    void testSaveEyeSessionDataNormal();
    void testSaveEyeSessionDataFileAlreadyExists();

    void testLoadEyeSessionDataNoFileExists();
    void testLoadEyeSessionDataNormal();
    void testLoadEyeSessionDataAlreadyFilled();
    void testLoadEyeSessionDataFileMalformed();

    void testSaveFullPatientDataEmpty();
    void testSaveFullPatientDataNormal();
    void testSaveFullPatientDataFileAlreadyExists();

    void testLoadFullPatientDataNoFileExists();
    void testLoadFullPatientDataNormal();
    void testLoadFullPatientDataAlreadyFilled();
    void testLoadFullPatientDataFileMalformed();
};


