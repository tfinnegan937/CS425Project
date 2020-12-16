//
// Created by plays on 12/9/2020.
//

#ifndef DESKTOPINTERFACE_QVRCONTROLWIDGET_H
#define DESKTOPINTERFACE_QVRCONTROLWIDGET_H
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QFrame>
#include <QLabel>
class QVRControlWidget : public QWidget {
Q_OBJECT
private:
    QVBoxLayout * button_layout;
    QPushButton * but_setup_vr;
    QPushButton * but_begin_test;
    QPushButton * but_select_test;
    QFrame * frame;
    QLabel * widget_label;
public:
    QVRControlWidget(QWidget * parent = 0);
};


#endif //DESKTOPINTERFACE_QVRCONTROLWIDGET_H
