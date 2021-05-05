/** @file QResultPane.h
*
*   Describes the pane to show patient symptom scores in.
*
*   @author Isak Ohman
*   @author Ryan Gorman
*   @author Timothy Finnegan
*   @date 2021
*/

#ifndef DESKTOPINTERFACE_QRESULTSPANE_H
#define DESKTOPINTERFACE_QRESULTSPANE_H
#include <QWidget>
#include <QVboxLayout>
#include "PatientData.h"
#include <QLineEdit>
#include <QLabel>
#include <QGroupBox>
#include <math.h>
#include "FullPatientData.h"
#include "EyeSessionData.h"
#include <iostream>

/**
 * @brief QWidget which shows patient symptoms.
 */
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

    QLineEdit* symptomBoxesCurrent[32];
    QLineEdit* symptomBoxesBaseline[32];

    QLineEdit* convergenceBaseline[3];
    QLineEdit* convergenceCurrent[3];

    QLabel* symptomCategories[32];
    QLabel* convergenceCategories[3];
    QLabel* symptomOriginLabels[4];

    /**
     * @brief Performs most of the setup for the widget, mainly by calling CreateSymptomBox.
     */
    void SetupSymptomBoxes();
    /**
     * @brief Creates a sub-box for a specific test to display symptom scores for.
     *
     * @param box QGroupBox pointer to store the resulting symptom box in.
     * @param container QGridLayout pointer to store the resulting layout of the symptom box in.
     * @param box_name QString to name the symptom box.
     * @param offset Order the resulting box will be in. Should not be equal to another symptom box.
     * @param convergence Whether this symptom box is for the near point convergence test. If so, adds addition symptom scores.
     */
    void CreateSymptomBox(QGroupBox * box, QGridLayout * container, QString box_name, int offset, bool convergence = false);
public:
    /**
     * @brief Constructor. Sets up pane and calls SetupSymptomBoxes.
     */
    QResultsPane(QWidget * parent);

    /**
     * @brief Updates each symptom score value field with the data currently stored in current_patient_data and comparison_data.
     *
     * @param current_patient_data The current patient data.
     * @param comparison_data The baseline data.
     */
    void updateSymptomScores(const FullPatientData& current_patient_data, const FullPatientData& comparison_data);
};


#endif //DESKTOPINTERFACE_QRESULTSPANE_H
