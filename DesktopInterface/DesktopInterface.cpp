//
// Created by plays on 12/9/2020.
//
#include <stdexcept>
#include <QStyle>
#include <QDesktopWidget>
#include "DesktopInterface.h"
#include "APPLICATION_CONSTANTS.h"
using namespace std;

//Error catcher for attempts to instantiate the program without using Qt's entry point
DesktopInterface::DesktopInterface() {
    throw runtime_error("Application instance not passed to DesktopInterface constructor");
}

DesktopInterface::DesktopInterface(QApplication *app) {
    home_window = new QHomeWindow();
    home_window->resize(APP_WIDTH, APP_HEIGHT);
    home_window->setWindowTitle(WINDOW_TITLE);

    //Get the desktop boundaries
    QRect desktop_bounds = app->desktop()->availableGeometry();
    //Get the screen center
    QPoint screen_center = desktop_bounds.center();

    //Move the window to the screen center
    home_window->move(screen_center.x() - home_window->width() * 0.5,
                      screen_center.y() - home_window->height() * 0.5);
    home_window->show();
}

int DesktopInterface::run() {
    try{
        return app->exec();
    }
    catch(std::exception any_exception){
        return EXIT_FAILURE;
    }
}
