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

const map<string, int> FullPatientData::test_name_to_id = {
        {FullPatientData::test_names[0], 0},
        {FullPatientData::test_names[1], 1},
        {FullPatientData::test_names[2], 2},
        {FullPatientData::test_names[3], 3},
        {FullPatientData::test_names[4], 4},
        {FullPatientData::test_names[5], 5},
        {FullPatientData::test_names[6], 6},
        {"VMS", 6}
};
