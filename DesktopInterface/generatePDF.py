import matplotlib
import numpy as np
matplotlib.use('Agg')
import matplotlib.pyplot as plt
from pylatex import Document, Section, Subsection, Tabular, Math, TikZ, Axis, \
	Plot, Figure, Matrix, Alignat
from pylatex.utils import italic
import io
from pathlib import Path
import sys
import csv
from enum import Enum

class valueID(Enum):
	ParticipantID = 0
	Experiment = 1
	ChangeOfSymptom = 2
	SymptomScore = 3
	Timestamp = 4
	LocalDotPositionX = 5
	LocalDotPositionY = 6
	LocalDotPositionZ = 7
	WorldDotPositionX = 8
	WorldDotPositionY = 9
	WorldDotPositionZ = 10
	HeadPositionX = 11
	HeadPositionY = 12
	HeadPositionZ = 13
	HeadOrientationX = 14
	HeadOrientationY = 15
	HeadOrientationZ = 16
	LeftEyeOriginX = 17
	LeftEyeOriginY = 18
	LeftEyeOriginZ = 19
	LeftEyeDirectionX = 20
	LeftEyeDirectionY = 21
	LeftEyeDirectionZ = 22
	RightEyeOriginX = 23
	RightEyeOriginY = 24
	RightEyeOriginZ = 25
	RightEyeDirectionX = 26
	RightEyeDirectionY = 27
	RightEyeDirectionZ = 28
	CombinedEyeOriginX = 29
	CombinedEyeOriginY = 30
	CombinedEyeOriginZ = 31
	CombinedEyeDirectionX = 32
	CombinedEyeDirectionY = 33
	CombinedEyeDirectionZ = 34
	FixationX = 35
	FixationY = 36
	FixationZ = 37
	# ChangeOfSymptom = 38
	# SymptomScore = 39
	FirstName = 40
	LastName = 41
	DateOfInjury = 42
	DateSeen = 43
	Sport = 44
	Age = 45
	Gender = 46

experimentID = {
	"smooth_pursuits": 0,
	"saccades_horizontal": 1,
	"saccades_vertical": 2,
	"vor_horizontal": 3,
	"vor_vertical": 4,
	"near_point_convergence": 5,
	"visual_motion_sensitivity": 6
}
	
class Experiment:
	def __init__(self, name, id):
		self.experimentName = name 
		self.experimentID = id
		self.hasData = False
		self.changeOfSymptom = []
		self.symptomScore = []
		self.timestamp = []
		self.localDotPositionX = []
		self.localDotPositionY = []
		self.localDotPositionZ = []
		self.worldDotPositionX = []
		self.worldDotPositionY = []
		self.worldDotPositionZ = []
		self.headPositionX = []
		self.headPositionY = []
		self.headPositionZ = []
		self.headOrientationX = []
		self.headOrientationY = []
		self.headOrientationZ = []
		self.leftEyeOriginX = []
		self.leftEyeOriginY = []
		self.leftEyeOriginZ = []
		self.rightEyeOriginX = []
		self.rightEyeOriginY = []
		self.rightEyeOriginZ = []
		self.leftEyeDirectionX = []
		self.leftEyeDirectionY = []
		self.leftEyeDirectionZ = []
		self.rightEyeDirectionX = []
		self.rightEyeDirectionY = []
		self.rightEyeDirectionZ = []
		self.combinedEyeOriginX = []
		self.combinedEyeOriginY = []
		self.combinedEyeOriginZ = []
		self.combinedEyeDirectionX = []
		self.combinedEyeDirectionY = []
		self.combinedEyeDirectionZ = []
		self.fixationX = []
		self.fixationY = []
		self.fixationZ = []

class PatientData:
	def __init__(self):
		self.participantID = None
		self.first_name = None
		self.last_name = None
		self.sport = None
		self.dateOfInjury = None
		self.dateOfVisit = None
		self.age = None
		self.gender = None
		self.experiments = [Experiment("Smooth Pursuits", "smooth_pursuits"), \
			Experiment("Horizontal Saccades", "saccades_horizontal"), \
			Experiment("Vertical Saccades", "saccades_vertical"), \
			Experiment("Horizontal VOR", "vor_horizontal"), \
			Experiment("Vertical VOR", "vor_vertical"), \
			Experiment("Near Point Convergence", "near_point_convergence"), \
			Experiment("Visual Motion Sensitivity", "visual_motion_sensitivity")]



def generatePDF(file_location, options_for_graphing, location_to_save_to):
	if not Path(file_location).exists(): return False

	location_to_save_to = location_to_save_to.replace(".tex","")
	
	csvfile = open(file_location)
	data = csv.reader(csvfile, delimiter=",")

	patient_data = PatientData()
	for index, row in enumerate(data):
		if (index == 0): 
			continue
		if (index == 1):
			patient_data.participantID = row[valueID.ParticipantID.value]
			patient_data.first_name = row[valueID.FirstName.value]
			patient_data.last_name = row[valueID.LastName.value]
			patient_data.sport = row[valueID.Sport.value]
			patient_data.dateOfInjury = row[valueID.DateOfInjury.value]
			patient_data.dateOfVisit = row[valueID.DateSeen.value]
			patient_data.age = row[valueID.Age.value]
			patient_data.gender = row[valueID.Gender.value]

		row_experiment = row[valueID.Experiment.value]
		patient_data.experiments[experimentID[row_experiment]].hasData = True
		patient_data.experiments[experimentID[row_experiment]].timestamp.append(float(row[valueID.Timestamp.value]))
		patient_data.experiments[experimentID[row_experiment]].changeOfSymptom.append(float(row[valueID.ChangeOfSymptom.value]))
		patient_data.experiments[experimentID[row_experiment]].symptomScore.append(float(row[valueID.SymptomScore.value]))
		patient_data.experiments[experimentID[row_experiment]].localDotPositionX.append(float(row[valueID.LocalDotPositionX.value]))
		patient_data.experiments[experimentID[row_experiment]].localDotPositionY.append(float(row[valueID.LocalDotPositionY.value]))
		patient_data.experiments[experimentID[row_experiment]].localDotPositionZ.append(float(row[valueID.LocalDotPositionZ.value]))
		patient_data.experiments[experimentID[row_experiment]].worldDotPositionX.append(float(row[valueID.WorldDotPositionX.value]))
		patient_data.experiments[experimentID[row_experiment]].worldDotPositionY.append(float(row[valueID.WorldDotPositionY.value]))
		patient_data.experiments[experimentID[row_experiment]].worldDotPositionZ.append(float(row[valueID.WorldDotPositionZ.value]))
		patient_data.experiments[experimentID[row_experiment]].headPositionX.append(float(row[valueID.HeadPositionX.value]))
		patient_data.experiments[experimentID[row_experiment]].headPositionY.append(float(row[valueID.HeadPositionY.value]))
		patient_data.experiments[experimentID[row_experiment]].headPositionZ.append(float(row[valueID.HeadPositionZ.value]))
		patient_data.experiments[experimentID[row_experiment]].headOrientationX.append(float(row[valueID.HeadOrientationX.value]))
		patient_data.experiments[experimentID[row_experiment]].headOrientationY.append(float(row[valueID.HeadOrientationY.value]))
		patient_data.experiments[experimentID[row_experiment]].headOrientationZ.append(float(row[valueID.HeadOrientationZ.value]))
		patient_data.experiments[experimentID[row_experiment]].leftEyeOriginX.append(float(row[valueID.LeftEyeOriginX.value]))
		patient_data.experiments[experimentID[row_experiment]].leftEyeOriginY.append(float(row[valueID.LeftEyeOriginY.value]))
		patient_data.experiments[experimentID[row_experiment]].leftEyeOriginZ.append(float(row[valueID.LeftEyeOriginZ.value]))
		patient_data.experiments[experimentID[row_experiment]].rightEyeOriginX.append(float(row[valueID.RightEyeOriginX.value]))
		patient_data.experiments[experimentID[row_experiment]].rightEyeOriginY.append(float(row[valueID.RightEyeOriginY.value]))
		patient_data.experiments[experimentID[row_experiment]].rightEyeOriginZ.append(float(row[valueID.RightEyeOriginZ.value]))
		patient_data.experiments[experimentID[row_experiment]].leftEyeDirectionX.append(float(row[valueID.LeftEyeDirectionX.value]))
		patient_data.experiments[experimentID[row_experiment]].leftEyeDirectionY.append(float(row[valueID.LeftEyeDirectionY.value]))
		patient_data.experiments[experimentID[row_experiment]].leftEyeDirectionZ.append(float(row[valueID.LeftEyeDirectionZ.value]))
		patient_data.experiments[experimentID[row_experiment]].rightEyeDirectionX.append(float(row[valueID.RightEyeDirectionX.value]))
		patient_data.experiments[experimentID[row_experiment]].rightEyeDirectionY.append(float(row[valueID.RightEyeDirectionY.value]))
		patient_data.experiments[experimentID[row_experiment]].rightEyeDirectionZ.append(float(row[valueID.RightEyeDirectionZ.value]))
		patient_data.experiments[experimentID[row_experiment]].combinedEyeOriginX.append(float(row[valueID.CombinedEyeOriginX.value]))
		patient_data.experiments[experimentID[row_experiment]].combinedEyeOriginY.append(float(row[valueID.CombinedEyeOriginY.value]))
		patient_data.experiments[experimentID[row_experiment]].combinedEyeOriginZ.append(float(row[valueID.CombinedEyeOriginZ.value]))
		patient_data.experiments[experimentID[row_experiment]].combinedEyeDirectionX.append(float(row[valueID.CombinedEyeDirectionX.value]))
		patient_data.experiments[experimentID[row_experiment]].combinedEyeDirectionY.append(float(row[valueID.CombinedEyeDirectionY.value]))
		patient_data.experiments[experimentID[row_experiment]].combinedEyeDirectionZ.append(float(row[valueID.CombinedEyeDirectionZ.value]))
		patient_data.experiments[experimentID[row_experiment]].fixationX.append(float(row[valueID.FixationX.value]))
		patient_data.experiments[experimentID[row_experiment]].fixationY.append(float(row[valueID.FixationY.value]))
		patient_data.experiments[experimentID[row_experiment]].fixationZ.append(float(row[valueID.FixationZ.value]))

	
	geometry_options = {"tmargin": "1cm", "lmargin": "1cm"}
	doc = Document(geometry_options=geometry_options)

	with doc.create(Section("Patient Data")):
		doc.append("Patient Name: " + patient_data.first_name + " " + patient_data.last_name + "\n")
		doc.append("Age: " + patient_data.age + "\n")
		doc.append("Gender: " + patient_data.gender + "\n")
		doc.append("Sport: " + patient_data.sport + "\n")
		doc.append("Date of Injury: " + patient_data.dateOfInjury + "\n")
		doc.append("Date of Visit: " + patient_data.dateOfVisit + "\n")

	tests_with_data = filter(lambda a: a.hasData, patient_data.experiments)

	for test in tests_with_data:
		with doc.create(Section(test.experimentName)):
			with doc.create(Figure()) as change_of_symptoms_vs_time:
				plt.plot(test.timestamp, test.changeOfSymptom)
				plt.title("Change in Symptoms vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Change in Symptoms")
				change_of_symptoms_vs_time.add_plot()
			plt.clf()

			with doc.create(Figure()) as symptoms_vs_time:
				plt.plot(test.timestamp, test.symptomScore)
				plt.title("Symptom Score vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Symptom Score")
				symptoms_vs_time.add_plot()
			plt.clf()
			
			with doc.create(Figure()) as local_dot_pos_x_vs_time:
				plt.plot(test.timestamp, test.localDotPositionX)
				plt.title("Local Dot Position X-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Local Dot Position X-value")
				local_dot_pos_x_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as local_dot_pos_y_vs_time:
				plt.plot(test.timestamp, test.localDotPositionY)
				plt.title("Local Dot Position Y-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Local Dot Position Y-value")
				local_dot_pos_y_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as local_dot_pos_z_vs_time:
				plt.plot(test.timestamp, test.localDotPositionZ)
				plt.title("Local Dot Position Z-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Local Dot Position Z-value")
				local_dot_pos_z_vs_time.add_plot()
			plt.clf()

			with doc.create(Figure()) as world_dot_pos_x_vs_time:
				plt.plot(test.timestamp, test.worldDotPositionX)
				plt.title("World Dot Position X-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("World Dot Position X-value")
				world_dot_pos_x_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as world_dot_pos_y_vs_time:
				plt.plot(test.timestamp, test.worldDotPositionY)
				plt.title("World Dot Position Y-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("World Dot Position Y-value")
				world_dot_pos_y_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as world_dot_pos_z_vs_time:
				plt.plot(test.timestamp, test.worldDotPositionZ)
				plt.title("World Dot Position Z-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("World Dot Position Z-value")
				world_dot_pos_z_vs_time.add_plot()
			plt.clf()

			with doc.create(Figure()) as head_position_x_vs_time:
				plt.plot(test.timestamp, test.headPositionX)
				plt.title("Head Position X-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Head Position X-value")
				head_position_x_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as head_position_y_vs_time:
				plt.plot(test.timestamp, test.headPositionY)
				plt.title("Head Position Y-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Head Position Y-value")
				head_position_y_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as head_position_z_vs_time:
				plt.plot(test.timestamp, test.headPositionZ)
				plt.title("Head Position Z-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Head Position Z-value")
				head_position_z_vs_time.add_plot()
			plt.clf()

			with doc.create(Figure()) as head_orientation_x_vs_time:
				plt.plot(test.timestamp, test.headOrientationX)
				plt.title("Head Orientation X-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Head Orientation X-value")
				head_orientation_x_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as head_orientation_y_vs_time:
				plt.plot(test.timestamp, test.headOrientationY)
				plt.title("Head Orientation Y-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Head Orientation Y-value")
				head_orientation_y_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as head_orientation_z_vs_time:
				plt.plot(test.timestamp, test.headOrientationZ)
				plt.title("Head Orientation Z-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Head Orientation Z-value")
				head_orientation_z_vs_time.add_plot()
			plt.clf()

			with doc.create(Figure()) as left_eye_origin_x_vs_time:
				plt.plot(test.timestamp, test.leftEyeOriginX)
				plt.title("Left Eye Origin X-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Left Eye Origin X-value")
				left_eye_origin_x_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as left_eye_origin_y_vs_time:
				plt.plot(test.timestamp, test.leftEyeOriginY)
				plt.title("Left Eye Origin Y-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Left Eye Origin Y-value")
				left_eye_origin_y_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as left_eye_origin_z_vs_time:
				plt.plot(test.timestamp, test.leftEyeOriginZ)
				plt.title("Left Eye Origin Z-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Left Eye Origin Z-value")
				left_eye_origin_z_vs_time.add_plot()
			plt.clf()

			with doc.create(Figure()) as left_eye_direction_x_vs_time:
				plt.plot(test.timestamp, test.leftEyeDirectionX)
				plt.title("Left Eye Direction X-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Left Eye Direction X-value")
				left_eye_direction_x_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as left_eye_direction_y_vs_time:
				plt.plot(test.timestamp, test.leftEyeDirectionY)
				plt.title("Left Eye Direction Y-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Left Eye Direction Y-value")
				left_eye_direction_y_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as left_eye_direction_z_vs_time:
				plt.plot(test.timestamp, test.leftEyeDirectionZ)
				plt.title("Left Eye Direction Z-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Left Eye Direction Z-value")
				left_eye_direction_z_vs_time.add_plot()
			plt.clf()
				
			with doc.create(Figure()) as right_eye_origin_x_vs_time:
				plt.plot(test.timestamp, test.rightEyeOriginX)
				plt.title("Right Eye Origin X-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Right Eye Origin X-value")
				right_eye_origin_x_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as right_eye_origin_y_vs_time:
				plt.plot(test.timestamp, test.rightEyeOriginY)
				plt.title("Right Eye Origin Y-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Right Eye Origin Y-value")
				right_eye_origin_y_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as right_eye_origin_z_vs_time:
				plt.plot(test.timestamp, test.rightEyeOriginZ)
				plt.title("Right Eye Origin Z-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Right Eye Origin Z-value")
				right_eye_origin_z_vs_time.add_plot()
			plt.clf()

			with doc.create(Figure()) as right_eye_direction_x_vs_time:
				plt.plot(test.timestamp, test.rightEyeDirectionX)
				plt.title("Right Eye Direction X-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Right Eye Direction X-value")
				right_eye_direction_x_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as right_eye_direction_y_vs_time:
				plt.plot(test.timestamp, test.rightEyeDirectionY)
				plt.title("Right Eye Direction Y-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Right Eye Direction Y-value")
				right_eye_direction_y_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as right_eye_direction_z_vs_time:
				plt.plot(test.timestamp, test.rightEyeDirectionZ)
				plt.title("Right Eye Direction Z-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Right Eye Direction Z-value")
				right_eye_direction_z_vs_time.add_plot()
			plt.clf()

			with doc.create(Figure()) as combined_eye_origin_x_vs_time:
				plt.plot(test.timestamp, test.combinedEyeOriginX)
				plt.title("Combined Eye Origin X-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Combined Eye Origin X-value")
				combined_eye_origin_x_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as combined_eye_origin_y_vs_time:
				plt.plot(test.timestamp, test.combinedEyeOriginY)
				plt.title("Combined Eye Origin Y-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Combined Eye Origin Y-value")
				combined_eye_origin_y_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as combined_eye_origin_z_vs_time:
				plt.plot(test.timestamp, test.combinedEyeOriginZ)
				plt.title("Combined Eye Origin Z-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Combined Eye Origin Z-value")
				combined_eye_origin_z_vs_time.add_plot()
			plt.clf()

			with doc.create(Figure()) as combined_eye_direction_x_vs_time:
				plt.plot(test.timestamp, test.combinedEyeDirectionX)
				plt.title("Combined Eye Direction X-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Combined Eye Direction X-value")
				combined_eye_direction_x_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as combined_eye_direction_y_vs_time:
				plt.plot(test.timestamp, test.combinedEyeDirectionY)
				plt.title("Combined Eye Direction Y-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Combined Eye Direction Y-value")
				combined_eye_direction_y_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as combined_eye_direction_z_vs_time:
				plt.plot(test.timestamp, test.combinedEyeDirectionZ)
				plt.title("Combined Eye Direction Z-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Combined Eye Direction Z-value")
				combined_eye_direction_z_vs_time.add_plot()
			plt.clf()

			with doc.create(Figure()) as fixation_x_vs_time:
				plt.plot(test.timestamp, test.combinedEyeDirectionX)
				plt.title("Fixation X-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Fixation X-value")
				fixation_x_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as fixation_y_vs_time:
				plt.plot(test.timestamp, test.combinedEyeDirectionY)
				plt.title("Fixation Y-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Fixation Y-value")
				fixation_y_vs_time.add_plot()
			plt.clf()
			with doc.create(Figure()) as fixation_z_vs_time:
				plt.plot(test.timestamp, test.combinedEyeDirectionZ)
				plt.title("Fixation Z-value vs Time")
				plt.xlabel("Time (s)")
				plt.ylabel("Fixation Z-value")
				fixation_z_vs_time.add_plot()
			plt.clf()

		
	f = open(location_to_save_to + ".tex", "w")
	f.write(doc.dumps())
	f.close()

	try:
		doc.generate_pdf(location_to_save_to, clean_tex = False)
		
	except: 
		print("Error in generating PDF. No LaTeX compiler might be installed!")
		print(sys.exc_info()[0].args)
	
	return True
print(generatePDF("D:/Documents/CS425Project/Binaries/Win64/test.csv", "", "D:/Documents/CS425Project/Binaries/Win64/pdf/s.tex"))