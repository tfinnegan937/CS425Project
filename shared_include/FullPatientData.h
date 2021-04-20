// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#define NumOfPartsForDate 3
#define NumOfTests 7

#include <vector>
#include <QString>
#include <map>
#include "EyeSessionData.h"

using namespace std;

/**
 * 
 */
struct FullPatientData
{
    FullPatientData(){
        EyeSessionData empty;
        test_data.resize(7, empty);
    };
    ~FullPatientData(){};
    QString first_name;
    QString last_name;
    QString participantID;
    int age;
    QString sport_played;
    QString gender;
    bool concussed;

    //3 parts of a data: month/day/year
    enum DatePart { month, day, year};
    int date_of_birth[NumOfPartsForDate] = {0};
    int date_of_injury[NumOfPartsForDate] = {0};
    int date_of_visit[NumOfPartsForDate] = {0};

    enum Tests {
        smooth_pursuits, saccades_horizontal, saccades_vertical,
        vor_horizontal, vor_vertical, near_point_convergence,
        visual_motion_sensitivity };

    const static string test_names[NumOfTests];
    const static map<string, int> test_name_to_id;

    bool tests_with_data[NumOfTests] = { false };

    bool baseline_loaded = false;

    float symptomHeadacheBaseline = 0;
    float symptomDizzinessBaseline = 0;
    float symptomNauseaBaseline = 0;
    float symptomFogginessBaseline = 0;

    vector<EyeSessionData> test_data;
};
