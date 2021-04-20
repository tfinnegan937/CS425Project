//
// Created by plays on 3/5/2021.
//

#include "QResultsPane.h"

QResultsPane::QResultsPane(QWidget *parent) : QWidget(parent){

    layout = new QGridLayout(this);

    groupbox = new QGroupBox("Data", this);
    groupbox->setLayout(layout);

    SetupSymptomBoxes();

    groupbox_container = new QVBoxLayout(this);

    groupbox_container->addWidget(groupbox);

    this->setLayout(groupbox_container);
}


void QResultsPane::SetupSymptomBoxes()
{

    symptomOriginLabels[0] = new QLabel(tr("Current"));
    symptomOriginLabels[0]->setAlignment(Qt::AlignCenter);
    symptomOriginLabels[1] = new QLabel(tr("Baseline"));
    symptomOriginLabels[1]->setAlignment(Qt::AlignCenter);
    layout->addWidget(symptomOriginLabels[0], 0, 1);
    layout->addWidget(symptomOriginLabels[1], 0, 2);

    symptomTestsLabels[0] = new QLabel(tr("Smooth Pursuits"));
    symptomTestsLabels[0]->setAlignment(Qt::AlignCenter);
    layout->addWidget(symptomTestsLabels[0], 1, 0, 3, 1);

    symptomCategories[0] = new QLabel(tr("Headache"));
    symptomCategories[1] = new QLabel(tr("Dizziness"));
    symptomCategories[2] = new QLabel(tr("Nausea"));
    symptomCategories[3] = new QLabel(tr("Fogginess"));
    layout->addWidget(symptomCategories[0], 2, 0, 1, 1);
    layout->addWidget(symptomCategories[1], 3, 0, 1, 1);
    layout->addWidget(symptomCategories[2], 4, 0, 1, 1);
    layout->addWidget(symptomCategories[3], 5, 0, 1, 1);

    for (int i = 0; i < 4; i++) {
        symptomBoxesCurrent[i+0] = new QLineEdit(tr("0.0"));
        symptomBoxesBaseline[i+0] = new QLineEdit(tr("0.0"));
        layout->addWidget(symptomBoxesCurrent[i+0], i+2, 1, 1, 1);
        layout->addWidget(symptomBoxesBaseline[i+0], i+2, 2, 1, 1);
    }

    symptomTestsLabels[1] = new QLabel(tr("Horizontal Saccades"));
    symptomTestsLabels[1]->setAlignment(Qt::AlignCenter);
    layout->addWidget(symptomTestsLabels[1], 6, 0, 3, 1);

    symptomCategories[4] = new QLabel(tr("Headache"));
    symptomCategories[5] = new QLabel(tr("Dizziness"));
    symptomCategories[6] = new QLabel(tr("Nausea"));
    symptomCategories[7] = new QLabel(tr("Fogginess"));
    layout->addWidget(symptomCategories[4], 7, 0, 1, 1);
    layout->addWidget(symptomCategories[5], 8, 0, 1, 1);
    layout->addWidget(symptomCategories[6], 9, 0, 1, 1);
    layout->addWidget(symptomCategories[7], 10, 0, 1, 1);

    for (int i = 0; i < 4; i++) {
        symptomBoxesCurrent[i+4] = new QLineEdit(tr("0.0"));
        symptomBoxesBaseline[i+4] = new QLineEdit(tr("0.0"));
        layout->addWidget(symptomBoxesCurrent[i+4], i+7, 1, 1, 1);
        layout->addWidget(symptomBoxesBaseline[i+4], i+7, 2, 1, 1);
    }

    symptomTestsLabels[2] = new QLabel(tr("Vertical Saccades"));
    symptomTestsLabels[2]->setAlignment(Qt::AlignCenter);
    layout->addWidget(symptomTestsLabels[2], 11, 0, 3, 1);

    symptomCategories[8] = new QLabel(tr("Headache"));
    symptomCategories[9] = new QLabel(tr("Dizziness"));
    symptomCategories[10] = new QLabel(tr("Nausea"));
    symptomCategories[11] = new QLabel(tr("Fogginess"));
    layout->addWidget(symptomCategories[8], 12, 0, 1, 1);
    layout->addWidget(symptomCategories[9], 13, 0, 1, 1);
    layout->addWidget(symptomCategories[10], 14, 0, 1, 1);
    layout->addWidget(symptomCategories[11], 15, 0, 1, 1);

    for (int i = 0; i < 4; i++) {
        symptomBoxesCurrent[i+8] = new QLineEdit(tr("0.0"));
        symptomBoxesBaseline[i+8] = new QLineEdit(tr("0.0"));
        layout->addWidget(symptomBoxesCurrent[i+8], i+12, 1, 1, 1);
        layout->addWidget(symptomBoxesBaseline[i+8], i+12, 2, 1, 1);
    }

    symptomTestsLabels[3] = new QLabel(tr("Horizontal VOR"));
    symptomTestsLabels[3]->setAlignment(Qt::AlignCenter);
    layout->addWidget(symptomTestsLabels[3], 16, 0, 3, 1);

    symptomCategories[12] = new QLabel(tr("Headache"));
    symptomCategories[13] = new QLabel(tr("Dizziness"));
    symptomCategories[14] = new QLabel(tr("Nausea"));
    symptomCategories[15] = new QLabel(tr("Fogginess"));
    layout->addWidget(symptomCategories[12], 17, 0, 1, 1);
    layout->addWidget(symptomCategories[13], 18, 0, 1, 1);
    layout->addWidget(symptomCategories[14], 19, 0, 1, 1);
    layout->addWidget(symptomCategories[15], 20, 0, 1, 1);

    for (int i = 0; i < 4; i++) {
        symptomBoxesCurrent[i+12] = new QLineEdit(tr("0.0"));
        symptomBoxesBaseline[i+12] = new QLineEdit(tr("0.0"));
        layout->addWidget(symptomBoxesCurrent[i+12], i+17, 1, 1, 1);
        layout->addWidget(symptomBoxesBaseline[i+12], i+17, 2, 1, 1);
    }

    symptomTestsLabels[4] = new QLabel(tr("Vertical VOR"));
    symptomTestsLabels[4]->setAlignment(Qt::AlignCenter);
    layout->addWidget(symptomTestsLabels[4], 21, 0, 3, 1);

    symptomCategories[16] = new QLabel(tr("Headache"));
    symptomCategories[17] = new QLabel(tr("Dizziness"));
    symptomCategories[18] = new QLabel(tr("Nausea"));
    symptomCategories[19] = new QLabel(tr("Fogginess"));
    layout->addWidget(symptomCategories[16], 21, 0, 1, 1);
    layout->addWidget(symptomCategories[17], 22, 0, 1, 1);
    layout->addWidget(symptomCategories[18], 23, 0, 1, 1);
    layout->addWidget(symptomCategories[19], 24, 0, 1, 1);

    for (int i = 0; i < 4; i++) {
        symptomBoxesCurrent[i+16] = new QLineEdit(tr("0.0"));
        symptomBoxesBaseline[i+16] = new QLineEdit(tr("0.0"));
        layout->addWidget(symptomBoxesCurrent[i+16], i+21, 1, 1, 1);
        layout->addWidget(symptomBoxesBaseline[i+16], i+21, 2, 1, 1);
    }

    symptomTestsLabels[5] = new QLabel(tr("Near Point Convergence"));
    symptomTestsLabels[5]->setAlignment(Qt::AlignCenter);
    layout->addWidget(symptomTestsLabels[5], 25, 0, 3, 1);

    symptomCategories[20] = new QLabel(tr("Headache"));
    symptomCategories[21] = new QLabel(tr("Dizziness"));
    symptomCategories[22] = new QLabel(tr("Nausea"));
    symptomCategories[23] = new QLabel(tr("Fogginess"));
    layout->addWidget(symptomCategories[20], 26, 0, 1, 1);
    layout->addWidget(symptomCategories[21], 27, 0, 1, 1);
    layout->addWidget(symptomCategories[22], 28, 0, 1, 1);
    layout->addWidget(symptomCategories[23], 29, 0, 1, 1);

    for (int i = 0; i < 4; i++) {
        symptomBoxesCurrent[i+20] = new QLineEdit(tr("0.0"));
        symptomBoxesBaseline[i+20] = new QLineEdit(tr("0.0"));
        layout->addWidget(symptomBoxesCurrent[i+20], i+26, 1, 1, 1);
        layout->addWidget(symptomBoxesBaseline[i+20], i+26, 2, 1, 1);
    }

    convergenceCategories[0] = new QLabel(tr("Measurement 1"));
    convergenceCategories[1] = new QLabel(tr("Measurement 2"));
    convergenceCategories[2] = new QLabel(tr("Measurement 3"));
    layout->addWidget(convergenceCategories[0], 30, 0, 1, 1);
    layout->addWidget(convergenceCategories[1], 31, 0, 1, 1);
    layout->addWidget(convergenceCategories[2], 32, 0, 1, 1);

    for (int i = 0; i < 3; i++) {
        convergenceCurrent[i] = new QLineEdit(tr("0.0"));
        convergenceBaseline[i] = new QLineEdit(tr("0.0"));
        layout->addWidget(convergenceCurrent[i], 30+i, 1, 1, 1);
        layout->addWidget(convergenceBaseline[i], 30+i, 2, 1, 1);
    }

    symptomTestsLabels[6] = new QLabel(tr("Visual Motion Sensitivity"));
    symptomTestsLabels[6]->setAlignment(Qt::AlignCenter);
    layout->addWidget(symptomTestsLabels[6], 33, 0, 3, 1);

    symptomCategories[24] = new QLabel(tr("Headache"));
    symptomCategories[25] = new QLabel(tr("Dizziness"));
    symptomCategories[26] = new QLabel(tr("Nausea"));
    symptomCategories[27] = new QLabel(tr("Fogginess"));
    layout->addWidget(symptomCategories[24], 34, 0, 1, 1);
    layout->addWidget(symptomCategories[25], 35, 0, 1, 1);
    layout->addWidget(symptomCategories[26], 36, 0, 1, 1);
    layout->addWidget(symptomCategories[27], 37, 0, 1, 1);

    for (int i = 0; i < 4; i++) {
        symptomBoxesCurrent[i+24] = new QLineEdit(tr("0.0"));
        symptomBoxesBaseline[i+24] = new QLineEdit(tr("0.0"));
        layout->addWidget(symptomBoxesCurrent[i+24], i+34, 1, 1, 1);
        layout->addWidget(symptomBoxesBaseline[i+24], i+34, 2, 1, 1);
    }
}


void QResultsPane::UpdateCurrentScores(PatientData current)
{
    symptomBoxesCurrent[0]->setText(current.getHeadacheScore());
    symptomBoxesCurrent[1]->setText(current.getDizzinessScore());
    symptomBoxesCurrent[2]->setText(current.getNauseaScore());
    symptomBoxesCurrent[3]->setText(current.getFogginessScore());
}

void QResultsPane::UpdateBaselineScores(PatientData baseline)
{
    symptomBoxesBaseline[0]->setText(baseline.getHeadacheScore());
    symptomBoxesBaseline[1]->setText(baseline.getDizzinessScore());
    symptomBoxesBaseline[2]->setText(baseline.getNauseaScore());
    symptomBoxesBaseline[3]->setText(baseline.getFogginessScore());
}
