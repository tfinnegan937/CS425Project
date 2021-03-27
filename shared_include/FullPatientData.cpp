// Fill out your copyright notice in the Description page of Project Settings.

#include "FullPatientData.h"
#include <iostream>

const string FullPatientData::test_names[] = {
        "smooth_pursuits",
        "saccades_horizontal",
        "saccades_vertical",
        "vor_horizontal",
        "vor_vertical",
        "near_point_convergence",
        "visual_motion_sensitivity"
};


void FullPatientData::readJSON(const QJsonObject &json)
{
    if (json.contains("firstName") && json["firstName"].isString())
        first_name = json["firstName"].toString();
    if (json.contains("lastName") && json["lastName"].isString())
        last_name = json["lastName"].toString();
    if (json.contains("DOB") && json["DOB"].isString()) {
        QStringList pieces;
        pieces = json["DOB"].toString().split('/');
        date_of_birth[0] = pieces[0].toInt();
        date_of_birth[1] = pieces[1].toInt();
        date_of_birth[2] = pieces[2].toInt();
    }
    if (json.contains("DOV") && json["DOV"].isString()) {
        QStringList pieces;
        pieces = json["DOV"].toString().split('/');
        date_of_visit[0] = pieces[0].toInt();
        date_of_visit[1] = pieces[1].toInt();
        date_of_visit[2] = pieces[2].toInt();
    }
    description_of_incidence = json["descriptionOfIncident"].toString();
    if (json.contains("testsCompleted") && json["testsCompleted"].isObject()) {
        QJsonObject sub_object = json["testsCompleted"].toObject();
        for (size_t i = 0; i < NumOfTests; i++) {
            if (sub_object.contains(QString::fromStdString(test_names[i])) && sub_object[QString::fromStdString(test_names[i])].isBool()) {
                tests_with_data[i] = sub_object[QString::fromStdString(test_names[i])].isBool();
            }
        }
    }
    if (json.contains("isConcussed") && json["isConcussed"].isBool())
        is_concussed = json["isConcussed"].toBool();

}


void FullPatientData::writeJSON(QJsonObject& json) const
{
    json["firstName"] = first_name;
    json["lastName"] = last_name;
    string DOB_string = to_string(date_of_birth[0]) + '/' + to_string(date_of_birth[1]) + '/' + to_string(date_of_birth[2]);
    json["DOB"] = QString::fromStdString(DOB_string);
    string DOV_string = to_string(date_of_visit[0]) + '/' + to_string(date_of_visit[1]) + '/' + to_string(date_of_visit[2]);
    json["DOV"] = QString::fromStdString(DOV_string);
    json["descriptionOfIncident"] = description_of_incidence;
    QJsonObject test_done_list;
    for(size_t i = 0; i < NumOfTests; i++) {
        test_done_list[QString::fromStdString(test_names[i])] = tests_with_data[i];
    }
    json["testsCompleted"] = test_done_list;
    json["isConcussed"] = is_concussed;
}
