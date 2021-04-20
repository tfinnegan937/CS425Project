//
// Created by plays on 4/4/2021.
//

#ifndef DESKTOPINTERFACE_PATIENTDATA_H
#define DESKTOPINTERFACE_PATIENTDATA_H
#include <QString>

class PatientData {
private:
    QString dateOfBirth;
    QString dateSeen;
    QString dateOfInjury;
    QString firstName;
    QString lastName;
    QString sport;
    QString gender;
    QString headacheScore;
    QString dizzinessScore;
    QString nauseaScore;
    QString fogginessScore;
    bool concussed;


public:
    PatientData(QString dateOfBirth_in, QString dateSeen_in, QString dateOfInjury_in, QString firstName_in, QString lastName_in,
                             QString sport_in, QString gender_in, bool concussed_in);
    QString getDateOfBirth() const;
    QString getDateSeen() const;
    QString getDateOfInjury() const;
    QString getFirstName() const;
    QString getLastName() const;
    QString getSport() const;
    QString getGender() const;
    QString getHeadacheScore() const;
    QString getDizzinessScore() const;
    QString getNauseaScore() const;
    QString getFogginessScore() const;
    void setHeadacheScore(float headache);
    void setDizzinessScore(float dizziness);
    void setNauseaScore(float nausea);
    void setFogginessScore(float fogginess);
    bool getIsConcussed() const;

};


#endif //DESKTOPINTERFACE_PATIENTDATA_H
