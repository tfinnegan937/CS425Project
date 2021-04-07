#include <Python.h>
#include <QApplication>
#include "DesktopInterface.h"
#include <iostream>
int main(int argc, char * argv[]) {
    std::cout << "here";
    QApplication app (argc, argv);
    DesktopInterface application(&app);
    return application.run();
}
