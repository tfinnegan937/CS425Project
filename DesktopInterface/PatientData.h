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
    bool concussed;


public:
    PatientData(QString dateOfBirth_in, QString dateSeen_in, QString dateOfInjury_in, QString firstName_in, QString lastName_in, QString sport_in, QString gender_in, bool concussed_in);
    QString getDateOfBirth() const;
    QString getDateSeen() const;
    QString getDateOfInjury() const;
    QString getFirstName() const;
    QString getLastName() const;
    QString getSport() const;
    QString getGender() const;
    bool getIsConcussed() const;

};


#endif //DESKTOPINTERFACE_PATIENTDATA_H
