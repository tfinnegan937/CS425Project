//
// Created by plays on 12/9/2020.
//

#ifndef DESKTOPINTERFACE_DESKTOPINTERFACE_H
#define DESKTOPINTERFACE_DESKTOPINTERFACE_H

#include <QApplication>
#include <QMainWindow>
#include "QHomeWindow.h"

//This is the root class of the application. Its constructor sets up Qt5, and then the run() function begins
//The Qt5 main loop.
class DesktopInterface {
private:
    QApplication * app;
    QHomeWindow * homeWindow;
public:
    DesktopInterface();
    DesktopInterface(QApplication * app);
    ~DesktopInterface();
    int run();
};


#endif //DESKTOPINTERFACE_DESKTOPINTERFACE_H
