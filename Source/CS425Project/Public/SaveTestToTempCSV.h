// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EyeFrameData.h"
#include "EyeTestEnum.h"
#include "TempCSVFiles.h"
#include "Misc/Paths.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include "CoreMinimal.h"
#include "SymptomScores.h"
class CSVTempStream
{
private:
	std::vector<std::string> temp_file_locations_;
	std::ofstream temp_file_handles_[7];

public:
	CSVTempStream();

	void SaveFrameToTemp(EyeFrameData& toSave);
	void SaveSymptomScore(int score);
	void SaveSymptomScore(SymptomScores scores);
	void SaveConvergence(float first, float second, float third);
	void CloseoutTemp(EyeTests::Tests x);
};

