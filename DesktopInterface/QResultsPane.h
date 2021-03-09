//
// Created by plays on 3/5/2021.
//

#ifndef DESKTOPINTERFACE_QRESULTSPANE_H
#define DESKTOPINTERFACE_QRESULTSPANE_H
#include <QWidget>
#include <QVboxLayout>
#include <QLabel>
#include <QGroupBox>
class QResultsPane : public QWidget{
Q_OBJECT
private:
    QVBoxLayout * layout;
    QLabel * placeholder;
    QGroupBox * groupbox;
    QVBoxLayout * groupbox_container;
public:
    QResultsPane(QWidget * parent);
};


#endif //DESKTOPINTERFACE_QRESULTSPANE_H
