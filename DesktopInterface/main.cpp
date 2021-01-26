#include <QApplication>
#include "DesktopInterface.h"
int main(int argc, char * argv[]) {
    QApplication app (argc, argv);
    DesktopInterface application(&app);
    return application.run();
}
