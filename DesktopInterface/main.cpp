#include <QApplication>
#include "DesktopInterface.h"
#include "UnrealIPCController.h"
int main(int argc, char * argv[]) {
    instantiate_shared_mem("test");
    QApplication app (argc, argv);
    DesktopInterface application(&app);
    return application.run();
}
