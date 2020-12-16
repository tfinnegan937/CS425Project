//
// Created by plays on 12/9/2020.
//

#ifndef DESKTOPINTERFACE_QDATACONTROLWIDGET_H
#define DESKTOPINTERFACE_QDATACONTROLWIDGET_H
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QFrame>
#include <QGroupBox>
class QDataControlWidget : public QWidget{
Q_OBJECT
private:
    QLabel * widget_label;

    QVBoxLayout * main_layout;

    QGroupBox * main_box;
    QGroupBox * but_col_1_box;
    QGroupBox * but_col_2_box;
    QGroupBox * but_box;

    QVBoxLayout * button_col_1;
    QVBoxLayout * button_col_2;

    QHBoxLayout * button_col_layout;

    QPushButton * but_view_results;
    QPushButton * but_load_results;
    QPushButton * but_save_results;

    QPushButton * but_display_data;
    QPushButton * but_export_data;
    QPushButton * but_calculate;

    QFrame * frame;

public:
    QDataControlWidget(QWidget * parent = 0);
};


#endif //DESKTOPINTERFACE_QDATACONTROLWIDGET_H
