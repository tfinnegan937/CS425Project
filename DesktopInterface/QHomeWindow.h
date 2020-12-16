//
// Created by plays on 12/9/2020.
//

#ifndef DESKTOPINTERFACE_QHOMEWINDOW_H
#define DESKTOPINTERFACE_QHOMEWINDOW_H
#include <QWidget>
#include <QHBoxLayout>
#include <QPushButton>
#include "QVRControlWidget.h"
#include "QDataControlWidget.h"
class QHomeWindow : public QWidget {
Q_OBJECT
private:
    QVRControlWidget * vr_controls; //Widget containing the VR controls
    QDataControlWidget * data_controls; //Widget containing the Data controls

    QHBoxLayout * home_page_layout; //Horizontal Box Layout for the main window
public:
    QHomeWindow(QWidget * parent = nullptr);
};


#endif //DESKTOPINTERFACE_QHOMEWINDOW_H
