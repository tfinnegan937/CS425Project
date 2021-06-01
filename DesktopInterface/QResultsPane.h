//
// Created by plays on 3/5/2021.
//

#ifndef DESKTOPINTERFACE_QRESULTSPANE_H
#define DESKTOPINTERFACE_QRESULTSPANE_H
#include <QWidget>
#include <QVboxLayout>
#include "PatientData.h"
#include <QLineEdit>
#include <QLabel>
#include <QGroupBox>
#include <math.h>
class QResultsPane : public QWidget{
Q_OBJECT
private:
    QGridLayout * layout;
    QGroupBox * groupbox;
    QVBoxLayout * groupbox_container;

    QGroupBox * smooth_pursuits_box;
    QGroupBox * horizontal_saccades_box;
    QGroupBox * vertical_saccades_box;
    QGroupBox * horizontal_VOR_box;
    QGroupBox * vertical_VOR_box;
    QGroupBox * near_point_convergence_box;
    QGroupBox * visual_motion_sensitivity_box;

    QGridLayout * smooth_pursuits_container;
    QGridLayout * horizontal_saccades_container;
    QGridLayout * vertical_saccades_container;
    QGridLayout * horizontal_VOR_container;
    QGridLayout * vertical_VOR_container;
    QGridLayout * near_point_convergence_container;
    QGridLayout * visual_motion_sensitivity_container;

    QLineEdit* symptomBoxesCurrent[28];
    QLineEdit* symptomBoxesBaseline[28];
    QLineEdit* convergenceBaseline[3];
    QLineEdit* convergenceCurrent[3];
    QLabel* symptomCategories[28];
    QLabel* convergenceCategories[3];
    QLabel* symptomTestsLabels[7];
    QLabel* symptomOriginLabels[4];

    void SetupSymptomBoxes();
    void CreateSymptomBox(QGroupBox * box, QGridLayout * container, QString box_name, int offset, bool convergence = false);
public:
    QResultsPane(QWidget * parent);

public slots:
    void UpdateCurrentScores(PatientData current);
    void UpdateBaselineScores(PatientData baseline);
};


#endif //DESKTOPINTERFACE_QRESULTSPANE_H
