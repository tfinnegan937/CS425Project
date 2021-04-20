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
class QResultsPane : public QWidget{
Q_OBJECT
private:
    QGridLayout * layout;
    QGroupBox * groupbox;
    QVBoxLayout * groupbox_container;

    QLineEdit* symptomBoxesCurrent[28];
    QLineEdit* symptomBoxesBaseline[28];
    QLineEdit* convergenceBaseline[3];
    QLineEdit* convergenceCurrent[3];
    QLabel* symptomCategories[28];
    QLabel* convergenceCategories[3];
    QLabel* symptomTestsLabels[7];
    QLabel* symptomOriginLabels[2];

    void SetupSymptomBoxes();
public:
    QResultsPane(QWidget * parent);

public slots:
    void UpdateCurrentScores(PatientData current);
    void UpdateBaselineScores(PatientData baseline);
};


#endif //DESKTOPINTERFACE_QRESULTSPANE_H
