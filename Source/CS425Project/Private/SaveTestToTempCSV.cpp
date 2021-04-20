// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SaveTestToTempCSV.h"
CSVTempStream::CSVTempStream()
{
	temp_file_locations_.resize(7);
	temp_file_locations_[0] = SMOOTH_PURSUITS_TEMP_CSV;
	temp_file_locations_[1] = SACCADES_HORIZONTAL_TEMP_CSV;
	temp_file_locations_[2] = SACCADES_VERTICAL_TEMP_CSV;
	temp_file_locations_[3] = VOR_HORIZONTAL_TEMP_CSV;
	temp_file_locations_[4] = VOR_VERTICAL_TEMP_CSV;
	temp_file_locations_[5] = NEAR_POINT_CONVERGENCE_TEMP_CSV;
	temp_file_locations_[6] = VMS_TEMP_CSV;
}





void CSVTempStream::SaveFrameToTemp(EyeFrameData& toSave)
{
	if (!temp_file_handles_[toSave.test].is_open()) {
		std::string game_dir = std::string(TCHAR_TO_UTF8(*FPaths::ProjectUserDir));
		temp_file_handles_[toSave.test].open(game_dir + temp_file_locations_[toSave.test], std::ios::out | std::ios::trunc);
	
		temp_file_handles_[toSave.test] << "Timestamp,ExperimentID,"
                   "LocalDotPositionX,LocalDotPositionY,LocalDotPositionZ,"
                   "WorldDotPositionX,WorldDotPositionY,WorldDotPositionZ,"
                   "HeadPositionX,HeadPositionY,HeadPositionZ,"
                   "HeadOrientationX,HeadOrientationY,HeadOrientationZ,"
                   "LeftEyeOriginX,LeftEyeOriginY,LeftEyeOriginZ,"
                   "LeftEyeDirectionX,LeftEyeDirectionY,LeftEyeDirectionZ,"
                   "RightEyeOriginX,RightEyeOriginY,RightEyeOriginZ,"
                   "RightEyeDirectionX,RightEyeDirectionY,RightEyeDirectionZ,"
                   "CombinedEyeOriginX,CombinedEyeOriginY,CombinedEyeOriginZ,"
                   "CombinedEyeDirectionX,CombinedEyeDirectionY,CombinedEyeDirectionZ,"
                   "FixationX,FixationY,FixationZ";
	}

	temp_file_handles_[toSave.test] << std::endl << toSave.timestamp << "," << toSave.test << ","
		<< toSave.localDotPosition[0] << "," << toSave.localDotPosition[1] << "," << toSave.localDotPosition[2] << ","
		<< toSave.headPosition[0] << "," << toSave.headPosition[1] << "," << toSave.headPosition[2] << ","
		<< toSave.headOrientation[0] << "," << toSave.headOrientation[1] << "," << toSave.headOrientation[2] << ","
		<< toSave.leftEyeOrigin[0] << "," << toSave.leftEyeOrigin[1] << "," << toSave.leftEyeOrigin[2] << ","
		<< toSave.leftEyeDirection[0] << "," << toSave.leftEyeDirection[1] << "," << toSave.leftEyeDirection[2] << ","
		<< toSave.rightEyeOrigin[0] << "," << toSave.rightEyeOrigin[1] << "," << toSave.rightEyeOrigin[2] << ","
		<< toSave.rightEyeDirection[0] << "," << toSave.rightEyeDirection[1] << "," << toSave.rightEyeDirection[2] << ","
		<< toSave.combinedEyeOrigin[0] << "," << toSave.combinedEyeOrigin[1] << "," << toSave.combinedEyeOrigin[2] << ","
		<< toSave.combinedEyeDirection[0] << "," << toSave.combinedEyeDirection[1] << "," << toSave.combinedEyeDirection[2] << ","
		<< toSave.fixation[0] << "," << toSave.fixation[1] << "," << toSave.fixation[2];
}


void CSVTempStream::SaveSymptomScore(int score)
{
	std::ofstream temp_save_score;
	std::string dir = std::string(TCHAR_TO_UTF8(*FPaths::ProjectUserDir)) + ".score";
	temp_save_score.open(dir, std::ios::out | std::ios::trunc);
	temp_save_score << score;
	temp_save_score.close();
}

void CSVTempStream::SaveSymptomScore(SymptomScores scores) {

}

void CSVTempStream::SaveConvergence(float first, float second, float third) {

}

void CSVTempStream::CloseoutTemp(EyeTests::Tests x)
{
	if (temp_file_handles_[x].is_open()) {
		temp_file_handles_[x].close();
	}
}