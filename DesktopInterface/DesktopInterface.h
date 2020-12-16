//
// Created by plays on 12/9/2020.
//

#ifndef DESKTOPINTERFACE_DESKTOPINTERFACE_H
#define DESKTOPINTERFACE_DESKTOPINTERFACE_H

#include <QApplication>
#include <QMainWindow>
#include "QHomeWindow.h"

class DesktopInterface {
private:
    QApplication * app;
    QHomeWindow * home_window;
public:
    DesktopInterface();
    DesktopInterface(QApplication * app);
    int run();
};


#endif //DESKTOPINTERFACE_DESKTOPINTERFACE_H
