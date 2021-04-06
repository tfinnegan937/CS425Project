#include <QtTest/QtTest>
#include "../../shared_include/EyeFrameData.h"
#include "../../shared_include/EyeSessionData.h"
#include "../../shared_include/FullPatientData.h"
class TestCSVSaveLoad : public QObject
{
    Q_OBJECT

    const char* testFileName = "unit_test.csv";
private slots:
    void init();
    void cleanup();
    void cleanFile(const char* filename);
    void populateTestPatientData(FullPatientData& test);

    bool areEyeFramesEqual(const EyeFrameData& a, const EyeFrameData& b);
    bool areEyeSessionsEqual(const EyeSessionData& a, const EyeSessionData& b);
    bool arePatientDataEqual(const FullPatientData& a, const FullPatientData& b);

    void testSaveLoadFullPatientDataEmpty();
    void testSaveLoadFullPatientDataNormal();
    void testSaveFullPatientDataFileAlreadyExists();

    void testLoadFullPatientDataNoFileExists();
    void testLoadFullPatientDataAlreadyFilled();
};


class TestPDFGeneration : public QObject
{
    Q_OBJECT

private slots:
    void testNoFilePDFGeneration();
    void testPDFGenerationWithData();

    void testPersonalInfoInsertion();
    void testGraphChangeOfSymptoms();
    void testGraphSymptomScore();
    void testGraphLocalDotPosition();
    void testGraphWorldDotPosition();
    void testGraphHeadPosition();
    void testGraphHeadOrientation();
    void testGraphLeftEyeOrigin();
    void testGraphRightEyeOrigin();
    void testGraphLeftEyeDirection();
    void testGraphRightEyeDirection();
    void testGraphCombinedEyeOrigin();
    void testGraphCombinedEyeDirection();
    void testGraphFixation();

    void testGraphAll();

};


