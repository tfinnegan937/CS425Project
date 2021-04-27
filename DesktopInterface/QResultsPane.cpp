//
// Created by plays on 3/5/2021.
//

#include "QResultsPane.h"

QResultsPane::QResultsPane(QWidget *parent) : QWidget(parent){

    layout = new QGridLayout(this);
    layout->setSpacing(0);
    layout->setContentsMargins(0,0,0,0);
    layout->addWidget(new QLabel());

    groupbox = new QGroupBox("Data", this);
    groupbox->setLayout(layout);

    SetupSymptomBoxes();

    groupbox_container = new QVBoxLayout(this);

    groupbox_container->addWidget(groupbox);

    this->setStyleSheet("QLabel {padding-left:0; margin:0}");
    this->setLayout(groupbox_container);
}


void QResultsPane::SetupSymptomBoxes()
{
    symptomOriginLabels[0] = new QLabel(tr("Current"));
    symptomOriginLabels[0]->setAlignment(Qt::AlignCenter);
    symptomOriginLabels[1] = new QLabel(tr("Baseline"));
    symptomOriginLabels[1]->setAlignment(Qt::AlignCenter);
    symptomOriginLabels[2] = new QLabel(tr("Current"));
    symptomOriginLabels[2]->setAlignment(Qt::AlignCenter);
    symptomOriginLabels[3] = new QLabel(tr("Baseline"));
    symptomOriginLabels[3]->setAlignment(Qt::AlignCenter);
    layout->addWidget(symptomOriginLabels[0], 0, 1);
    layout->addWidget(symptomOriginLabels[1], 0, 2);
    layout->addWidget(symptomOriginLabels[2], 0, 4);
    layout->addWidget(symptomOriginLabels[3], 0, 5);

    //Smooth Pursuits Box Setup

    CreateSymptomBox(smooth_pursuits_box, smooth_pursuits_container, "Smooth Pursuits", 0);

    //Horizontal Saccades Box Setup

    CreateSymptomBox(horizontal_saccades_box, horizontal_saccades_container, "Horizontal Saccades", 1);

    //Vertical Saccades Box Setup

    CreateSymptomBox(vertical_saccades_box, vertical_saccades_container, "Vertical Saccades", 2);

    //Horizontal VOR Box Setup

    CreateSymptomBox(horizontal_VOR_box, horizontal_VOR_container, "Horizontal VOR", 3);

    //Vertical VOR Box Setup

    CreateSymptomBox(vertical_VOR_box, vertical_VOR_container, "Vertical VOR", 4);

    //Near Point Convergence Box Setup

    CreateSymptomBox(near_point_convergence_box, near_point_convergence_container, "Near Point Convergence", 5, true);

    //Visual Motion Sensitivity Box Setup

    CreateSymptomBox(visual_motion_sensitivity_box, visual_motion_sensitivity_container, "Visual Motion Sensitivity", 6);
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

void QResultsPane::CreateSymptomBox(QGroupBox * box, QGridLayout * container, QString box_name, int offset, bool is_convergence)
{
    container = new QGridLayout(groupbox);
    box = new QGroupBox(box_name, groupbox);

    symptomCategories[offset+0] = new QLabel(tr("Headache"));
    symptomCategories[offset+1] = new QLabel(tr("Dizziness"));
    symptomCategories[offset+2] = new QLabel(tr("Nausea"));
    symptomCategories[offset+3] = new QLabel(tr("Fogginess"));
    container->addWidget(symptomCategories[offset+0], 0, 0, 1, 1);
    container->addWidget(symptomCategories[offset+1], 1, 0, 1, 1);
    container->addWidget(symptomCategories[offset+2], 2, 0, 1, 1);
    container->addWidget(symptomCategories[offset+3], 3, 0, 1, 1);

    for (int i = 0; i < 4; i++) {
        symptomBoxesCurrent[i+offset] = new QLineEdit(tr("0.0"));
        symptomBoxesBaseline[i+offset] = new QLineEdit(tr("0.0"));
        container->addWidget(symptomBoxesCurrent[i+offset], i, 1, 1, 1);
        container->addWidget(symptomBoxesBaseline[i+offset], i, 2, 1, 1);
    }

    if (is_convergence) {
        convergenceCategories[0] = new QLabel(tr("Measurement 1"));
        convergenceCategories[1] = new QLabel(tr("Measurement 2"));
        convergenceCategories[2] = new QLabel(tr("Measurement 3"));
        container->addWidget(convergenceCategories[0], 4, 0, 1, 1);
        container->addWidget(convergenceCategories[1], 5, 0, 1, 1);
        container->addWidget(convergenceCategories[2], 6, 0, 1, 1);

        for (int i = 0; i < 3; i++) {
            convergenceCurrent[i] = new QLineEdit(tr("0.0"));
            convergenceBaseline[i] = new QLineEdit(tr("0.0"));
            container->addWidget(convergenceCurrent[i], 4+i, 1, 1, 1);
            container->addWidget(convergenceBaseline[i], 4+i, 2, 1, 1);
        }
    }

    box->setLayout(container);
    layout->addWidget(box, std::floor(offset/2) + 1, offset%2 * 3, 1, 3);
}
