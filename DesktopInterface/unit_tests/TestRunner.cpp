#include "UnitTestMain.h"

int main(int argc, char* argv[])
{
    int status = 0;

    {
        TestCSVSaveLoad testA;
        status |= QTest::qExec(&testA, argc, argv);
    }

    {
        TestPDFGeneration testB;
        status |= QTest::qExec(&testB, argc, argv);
    }

    return status;
}
