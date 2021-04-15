//
// Created by plays on 12/9/2020.
//
#include <stdexcept>
#include <QStyle>
#include <QDesktopWidget>
#include <QGuiApplication>
#include <QScreen>
#include "DesktopInterface.h"
#include "APPLICATION_CONSTANTS.h"
using namespace std;

//Error catcher for attempts to instantiate the program without using Qt's entry point
DesktopInterface::DesktopInterface() {
    throw runtime_error("Application instance not passed to DesktopInterface constructor");
}

DesktopInterface::DesktopInterface(QApplication *app) {
    homeWindow = new QHomeWindow();
    homeWindow->resize(APP_WIDTH, APP_HEIGHT);
    homeWindow->setWindowTitle(WINDOW_TITLE);

    //Get the desktop boundaries
    QRect desktop_bounds = QGuiApplication::primaryScreen()->geometry();
    //Get the screen center
    QPoint screen_center = desktop_bounds.center();

    //Move the window to the screen center
    homeWindow->move(screen_center.x() - homeWindow->width() * 0.5,
                     screen_center.y() - homeWindow->height() * 0.5);
    homeWindow->show();
}

DesktopInterface::~DesktopInterface()
{
}

int DesktopInterface::run() {
    try{
        return app->exec();
    }
    catch(std::exception& any_exception){
        return EXIT_FAILURE;
    }
}


