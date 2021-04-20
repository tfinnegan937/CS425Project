//
// Created by plays on 4/4/2021.
//

#include "PatientData.h"

PatientData::PatientData(QString dateOfBirth_in, QString dateSeen_in, QString dateOfInjury_in, QString firstName_in, QString lastName_in,
                         QString sport_in, QString gender_in, bool concussed_in) {

    dateOfBirth = dateOfBirth_in;
    dateSeen = dateSeen_in;
    firstName = firstName_in;
    lastName = lastName_in;
    sport = sport_in;
    dateOfInjury = dateOfInjury_in;
    concussed = concussed_in;
    gender = gender_in;
}

QString PatientData::getDateOfBirth() const {
    return dateOfBirth;
}

QString PatientData::getDateSeen() const {
    return dateSeen;
}

QString PatientData::getDateOfInjury() const {
    return dateOfInjury;
}

QString PatientData::getFirstName() const {
    return firstName;
}

QString PatientData::getLastName() const {
    return lastName;
}

QString PatientData::getSport() const {
    return sport;
}

bool PatientData::getIsConcussed() const {
    return concussed;
}

QString PatientData::getGender() const {
    return gender;
}

QString PatientData::getHeadacheScore() const
{
    return headacheScore;
}

QString PatientData::getDizzinessScore() const
{
    return dizzinessScore;
}

QString PatientData::getNauseaScore() const
{
    return nauseaScore;
}

QString PatientData::getFogginessScore() const
{
    return fogginessScore;
}

void PatientData::setHeadacheScore(float headache)
{
    headacheScore = headache;
}

void PatientData::setDizzinessScore(float dizziness)
{
    dizzinessScore = dizziness;
}

void PatientData::setNauseaScore(float nausea)
{
    nauseaScore = nausea;
}

void PatientData::setFogginessScore(float fogginess)
{
    fogginessScore = fogginess;
}
