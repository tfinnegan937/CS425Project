#include <QtTest/QtTest>
#include "../../shared_include/EyeFrameData.h"
#include "../../shared_include/EyeSessionData.h"
#include "../../shared_include/FullPatientData.h"
class TestCSVSaveLoad : public QObject
{
    Q_OBJECT

    char* testFileName = "unit_test.csv";
private slots:
    void init();
    void cleanup();
    void cleanFile(const char* filename);

    bool areEyeFramesEqual(const EyeFrameData& a, const EyeFrameData& b);
    bool areEyeSessionsEqual(const EyeSessionData& a, const EyeSessionData& b);
    bool arePatientDataEqual(const FullPatientData& a, const FullPatientData& b);

    void testSaveLoadEyeFrameDataEmpty();
    void testSaveLoadEyeFrameDataNormal();
    void testSaveLoadEyeFrameDataFileAlreadyExists();

    void testLoadEyeFrameDataNoFileExists();
    void testLoadEyeFrameDataAlreadyFilled();
    void testLoadEyeFrameDataFileMalformed();

    void testSaveEyeSessionDataEmpty();
    void testSaveLoadEyeSessionDataNormal();
    void testSaveEyeSessionDataFileAlreadyExists();

    void testLoadEyeSessionDataNoFileExists();
    void testLoadEyeSessionDataAlreadyFilled();
    void testLoadEyeSessionDataFileMalformed();

    void testSaveLoadFullPatientDataEmpty();
    void testSaveLoadFullPatientDataNormal();
    void testSaveFullPatientDataFileAlreadyExists();

    void testLoadFullPatientDataNoFileExists();
    void testLoadFullPatientDataAlreadyFilled();
};


