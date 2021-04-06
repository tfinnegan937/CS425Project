#include <UnitTestMain.h>
#include <stdio.h>
#include "../PDFGenerator.h"
using namespace std;


void TestPDFGeneration::testNoFilePDFGeneration()
{
    PDFGenerator test;
    test.start();
    QVERIFY(!test.wasSuccess());
}


void TestPDFGeneration::testPDFGenerationWithData()
{
    QVERIFY(false);
}


void TestPDFGeneration::testPersonalInfoInsertion()
{
    QVERIFY(false);
}


void TestPDFGeneration::testGraphChangeOfSymptoms()
{
    QVERIFY(false);
}


void TestPDFGeneration::testGraphSymptomScore()
{
    QVERIFY(false);
}


void TestPDFGeneration::testGraphLocalDotPosition()
{
    QVERIFY(false);
}


void TestPDFGeneration::testGraphWorldDotPosition()
{
    QVERIFY(false);
}


void TestPDFGeneration::testGraphHeadPosition()
{
    QVERIFY(false);
}


void TestPDFGeneration::testGraphHeadOrientation()
{
    QVERIFY(false);
}


void TestPDFGeneration::testGraphLeftEyeOrigin()
{
    QVERIFY(false);
}


void TestPDFGeneration::testGraphRightEyeOrigin()
{
    QVERIFY(false);
}


void TestPDFGeneration::testGraphLeftEyeDirection()
{
    QVERIFY(false);
}


void TestPDFGeneration::testGraphRightEyeDirection()
{
    QVERIFY(false);
}


void TestPDFGeneration::testGraphCombinedEyeDirection()
{
    QVERIFY(false);
}


void TestPDFGeneration::testGraphCombinedEyeOrigin()
{
    QVERIFY(false);
}


void TestPDFGeneration::testGraphFixation()
{
    QVERIFY(false);
}


void TestPDFGeneration::testGraphAll()
{
    QVERIFY(false);
}



