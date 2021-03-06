//
// Created by plays on 3/5/2021.
//

#ifndef DESKTOPINTERFACE_QDATAPANE_H
#define DESKTOPINTERFACE_QDATAPANE_H
#include <QWidget>
#include <QVboxLayout>
#include <QLabel>
#include <QGroupBox>
class QDataPane : public QWidget{
Q_OBJECT
private:
    QVBoxLayout * layout;
    QLabel * placeholder;
    QGroupBox * groupbox;
    QVBoxLayout * groupbox_container;
public:
    QDataPane(QWidget * parent);
};


#endif //DESKTOPINTERFACE_QDATAPANE_H
