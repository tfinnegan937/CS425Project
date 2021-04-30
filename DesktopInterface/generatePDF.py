import matplotlib
import numpy as np
matplotlib.use('Agg')
import matplotlib.pyplot as plt
from reportlab.lib import colors
from reportlab.lib.styles import getSampleStyleSheet
from reportlab.platypus import SimpleDocTemplate, Paragraph, PageBreak, Table, TableStyle, Image
import io
from pathlib import Path
import sys
import csv
from enum import Enum

from graph_generator import *

class valueID(Enum):
	ParticipantID = 0
	Experiment = 1
	changeOfHeadache = 2
	changeOfDizziness = 3
	changeOfNausea = 4
	changeOfFogginess = 5
	Headache = 6
	Dizziness = 7
	Nausea = 8
	Fogginess = 9
	Timestamp = 10
	LocalDotPositionX = 11
	LocalDotPositionY = 12
	LocalDotPositionZ = 13
	WorldDotPositionX = 14
	WorldDotPositionY = 15
	WorldDotPositionZ = 16
	HeadPositionX = 17
	HeadPositionY = 18
	HeadPositionZ = 19
	HeadOrientationX = 20
	HeadOrientationY = 21
	HeadOrientationZ = 22
	LeftEyeOriginX = 23
	LeftEyeOriginY = 24
	LeftEyeOriginZ = 25
	LeftEyeDirectionX = 26
	LeftEyeDirectionY = 27
	LeftEyeDirectionZ = 28
	RightEyeOriginX = 29
	RightEyeOriginY = 30
	RightEyeOriginZ = 31
	RightEyeDirectionX = 32
	RightEyeDirectionY = 33
	RightEyeDirectionZ = 34
	CombinedEyeOriginX = 35
	CombinedEyeOriginY = 36
	CombinedEyeOriginZ = 37
	CombinedEyeDirectionX = 38
	CombinedEyeDirectionY = 39
	CombinedEyeDirectionZ = 40
	FixationX = 41
	FixationY = 42
	FixationZ = 43
	FirstConvergence = 44
	SecondConvergence = 45
	ThirdConvergence = 46
	# ChangeOfSymptom = 47-49
	# SymptomScore = 50-52
	FirstName = 53
	LastName = 54
	DateOfBirth = 55
	DateOfInjury = 56
	DateSeen = 57
	Sport = 58
	Age = 59
	Gender = 60

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
		self.changeOfHeadache = None
		self.changeOfDizziness = None
		self.changeOfNausea = None
		self.changeOfFogginess = None
		self.Headache = None
		self.Dizziness = None
		self.Nausea = None
		self.Fogginess = None
		self.symptomScore = None
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
		self.firstConvergence = None
		self.secondConvergence = None
		self.thirdConvergence = None

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
		self.baselineHeadache = None
		self.baselineDizziness = None
		self.baselineNausea = None
		self.baselineFogginess = None
		self.experiments = [Experiment("Smooth Pursuits", "smooth_pursuits"), \
			Experiment("Horizontal Saccades", "saccades_horizontal"), \
			Experiment("Vertical Saccades", "saccades_vertical"), \
			Experiment("Horizontal VOR", "vor_horizontal"), \
			Experiment("Vertical VOR", "vor_vertical"), \
			Experiment("Near Point Convergence", "near_point_convergence"), \
			Experiment("Visual Motion Sensitivity", "visual_motion_sensitivity")]


def create_table_list(test, stats_headings):
	test_stats_table = []

	test_stats_table.append(["", "Mean", "St. Dev."])
	test_stats_table.append([stats_headings[0], test.changeOfHeadache, test.changeOfHeadache])
	test_stats_table.append([stats_headings[1], test.changeOfDizziness, test.changeOfDizziness])
	test_stats_table.append([stats_headings[2], test.changeOfNausea, test.changeOfNausea])
	test_stats_table.append([stats_headings[3], test.changeOfFogginess, test.changeOfFogginess])
	test_stats_table.append([stats_headings[4], test.Headache, test.Headache])
	test_stats_table.append([stats_headings[5], test.Dizziness, test.Dizziness])
	test_stats_table.append([stats_headings[6], test.Nausea, test.Nausea])
	test_stats_table.append([stats_headings[7], test.Fogginess, test.Fogginess])
	test_stats_table.append([stats_headings[8], np.average(test.localDotPositionX), np.std(test.localDotPositionX)])
	test_stats_table.append([stats_headings[9], np.average(test.localDotPositionY), np.std(test.localDotPositionY)])
	test_stats_table.append([stats_headings[10], np.average(test.localDotPositionZ), np.std(test.localDotPositionZ)])
	test_stats_table.append([stats_headings[11], np.average(test.worldDotPositionX), np.std(test.worldDotPositionX)])
	test_stats_table.append([stats_headings[12], np.average(test.worldDotPositionY), np.std(test.worldDotPositionY)])
	test_stats_table.append([stats_headings[13], np.average(test.worldDotPositionZ), np.std(test.worldDotPositionZ)])
	test_stats_table.append([stats_headings[14], np.average(test.headPositionX), np.std(test.headPositionX)])
	test_stats_table.append([stats_headings[15], np.average(test.headPositionY), np.std(test.headPositionY)])
	test_stats_table.append([stats_headings[16], np.average(test.headPositionZ), np.std(test.headPositionZ)])
	test_stats_table.append([stats_headings[17], np.average(test.headOrientationX), np.std(test.headOrientationX)])
	test_stats_table.append([stats_headings[18], np.average(test.headOrientationY), np.std(test.headOrientationY)])
	test_stats_table.append([stats_headings[19], np.average(test.headOrientationZ), np.std(test.headOrientationZ)])
	test_stats_table.append([stats_headings[20], np.average(test.leftEyeOriginX), np.std(test.leftEyeOriginX)])
	test_stats_table.append([stats_headings[21], np.average(test.leftEyeOriginY), np.std(test.leftEyeOriginY)])
	test_stats_table.append([stats_headings[22], np.average(test.leftEyeOriginZ), np.std(test.leftEyeOriginZ)])
	test_stats_table.append([stats_headings[23], np.average(test.rightEyeOriginX), np.std(test.rightEyeOriginX)])
	test_stats_table.append([stats_headings[24], np.average(test.rightEyeOriginY), np.std(test.rightEyeOriginY)])
	test_stats_table.append([stats_headings[25], np.average(test.rightEyeOriginZ), np.std(test.rightEyeOriginZ)])
	test_stats_table.append([stats_headings[26], np.average(test.leftEyeDirectionX), np.std(test.leftEyeDirectionX)])
	test_stats_table.append([stats_headings[27], np.average(test.leftEyeDirectionY), np.std(test.leftEyeDirectionY)])
	test_stats_table.append([stats_headings[28], np.average(test.leftEyeDirectionZ), np.std(test.leftEyeDirectionZ)])
	test_stats_table.append([stats_headings[29], np.average(test.rightEyeDirectionX), np.std(test.rightEyeDirectionX)])
	test_stats_table.append([stats_headings[30], np.average(test.rightEyeDirectionY), np.std(test.rightEyeDirectionY)])
	test_stats_table.append([stats_headings[31], np.average(test.rightEyeDirectionZ), np.std(test.rightEyeDirectionZ)])
	test_stats_table.append([stats_headings[32], np.average(test.combinedEyeOriginX), np.std(test.combinedEyeOriginX)])
	test_stats_table.append([stats_headings[33], np.average(test.combinedEyeOriginY), np.std(test.combinedEyeOriginY)])
	test_stats_table.append([stats_headings[34], np.average(test.combinedEyeOriginZ), np.std(test.combinedEyeOriginZ)])
	test_stats_table.append([stats_headings[35], np.average(test.combinedEyeDirectionX), np.std(test.combinedEyeDirectionX)])
	test_stats_table.append([stats_headings[36], np.average(test.combinedEyeDirectionY), np.std(test.combinedEyeDirectionY)])
	test_stats_table.append([stats_headings[37], np.average(test.combinedEyeDirectionZ), np.std(test.combinedEyeDirectionZ)])
	test_stats_table.append([stats_headings[38], np.average(test.fixationX), np.std(test.fixationX)])
	test_stats_table.append([stats_headings[39], np.average(test.fixationY), np.std(test.fixationY)])
	test_stats_table.append([stats_headings[40], np.average(test.fixationZ), np.std(test.fixationZ)])
	test_stats_table.append([stats_headings[41], test.firstConvergence, test.firstConvergence])
	test_stats_table.append([stats_headings[42], test.secondConvergence, test.secondConvergence])
	test_stats_table.append([stats_headings[43], test.thirdConvergence, test.thirdConvergence])

	return test_stats_table

def create_table_comparison_list(test, comparison_test):
	table_comparison_list = []

	table_comparison_list.append(["", "Current", "Baseline"])
	table_comparison_list.append(["Headache", test.Headache, comparison_test.Headache])
	table_comparison_list.append(["Dizziness", test.Dizziness, comparison_test.Dizziness])
	table_comparison_list.append(["Nausea", test.Nausea, comparison_test.Nausea])
	table_comparison_list.append(["Fogginess", test.Fogginess, comparison_test.Fogginess])

	return table_comparison_list

def load_row_experiment_data(patient_data, row):
	row_experiment = row[valueID.Experiment.value]
	patient_data.experiments[experimentID[row_experiment]].hasData = True
	patient_data.experiments[experimentID[row_experiment]].timestamp.append(float(row[valueID.Timestamp.value]))
	patient_data.experiments[experimentID[row_experiment]].changeOfHeadache = float(row[valueID.changeOfHeadache.value])
	patient_data.experiments[experimentID[row_experiment]].changeOfDizziness = float(row[valueID.changeOfDizziness.value])
	patient_data.experiments[experimentID[row_experiment]].changeOfNausea = float(row[valueID.changeOfNausea.value])
	patient_data.experiments[experimentID[row_experiment]].changeOfFogginess = float(row[valueID.changeOfFogginess.value])
	patient_data.experiments[experimentID[row_experiment]].Headache = float(row[valueID.Headache.value])
	patient_data.experiments[experimentID[row_experiment]].Dizziness = float(row[valueID.Dizziness.value])
	patient_data.experiments[experimentID[row_experiment]].Nausea = float(row[valueID.Nausea.value])
	patient_data.experiments[experimentID[row_experiment]].Fogginess = float(row[valueID.Fogginess.value])
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
	patient_data.experiments[experimentID[row_experiment]].firstConvergence = float(row[valueID.FirstConvergence.value])
	patient_data.experiments[experimentID[row_experiment]].secondConvergence = float(row[valueID.SecondConvergence.value])
	patient_data.experiments[experimentID[row_experiment]].thirdConvergence = float(row[valueID.ThirdConvergence.value])


def generatePDF(file_location, options_for_graphing, location_to_save_to):
	if not Path(file_location).exists(): return False
	
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
			patient_data.baselineHeadache = float(row[valueID.Headache.value]) - float(row[valueID.changeOfHeadache.value])
			patient_data.baselineDizziness = float(row[valueID.Dizziness.value]) - float(row[valueID.changeOfDizziness.value])
			patient_data.baselineNausea = float(row[valueID.Nausea.value]) - float(row[valueID.changeOfNausea.value])
			patient_data.baselineFogginess = float(row[valueID.Fogginess.value]) - float(row[valueID.changeOfFogginess.value])

		load_row_experiment_data(patient_data, row)
	
	
	# Create buffer and document object
	pdf_buffer = io.BytesIO()
	doc = SimpleDocTemplate(pdf_buffer)
	flowables = []

	sample_style_sheet = getSampleStyleSheet()

	main_title = Paragraph("Patient Data", sample_style_sheet["Heading1"])
	demographics_paragraph = Paragraph(
		"Patient Name: " + patient_data.first_name + " " + patient_data.last_name + "<br/>"\
		"Age: " + patient_data.age + "<br/>"\
		"Gender: " + patient_data.gender + "<br/>"\
		"Sport: " + patient_data.sport + "<br/>"\
		"Date of Injury: " + patient_data.dateOfInjury + "<br/>"\
		"Date of Visit: " + patient_data.dateOfVisit + "<br/>"\
		"Baseline Headache: " + str(patient_data.baselineHeadache) + "<br/>"\
		"Baseline Dizziness: " + str(patient_data.baselineDizziness) + "<br/>"\
		"Baseline Nausea: " + str(patient_data.baselineNausea) + "<br/>"\
		"Baseline Fogginess: " + str(patient_data.baselineFogginess) + "<br/>",\
		sample_style_sheet["BodyText"]
	)
	flowables.append(main_title)
	flowables.append(demographics_paragraph)

	stats_headings = ["ChangeOfHeadache", "ChangeOfDizziness", "ChangeOfNausea", "ChangeOfFogginess",\
		"Headache", "Dizziness", "Nausea", "Fogginess",\
		"Local Dot Position X", "Local Dot Position Y", "Local Dot Position Z",\
		"World Dot Position X", "World Dot Position Y", "World Dot Position Z",\
		"Head Position X", "Head Position Y", "Head Position Z",\
		"Head Orientation X", "Head Orientation Y", "Head Orientation Z",\
		"Left Eye Origin X", "Left Eye Origin Y", "Left Eye Origin Z",\
		"Right Eye Origin X", "Right Eye Origin Y", "Right Eye Origin Z",\
		"Left Eye Direction X", "Left Eye Direction Y", "Left Eye Direction Z",\
		"Right Eye Direction X", "Right Eye Direction Y", "Right Eye Direction Z",\
		"Combined Eye Origin X", "Combined Eye Origin Y", "Combined Eye Origin Z",\
		"Combined Eye Direction X", "Combined Eye Direction Y", "Combined Eye Direction Z",\
		"Fixation X", "Fixation Y", "Fixation Z",\
		"First Convergence", "Second Convergence", "Third Convergence"]

	tests_with_data = filter(lambda a: a.hasData, patient_data.experiments)

	for test in tests_with_data:
		flowables.append(PageBreak())
		flowables.append(Paragraph(test.experimentName, sample_style_sheet["Heading1"]))

		test_stats_table = create_table_list(test, stats_headings)

		stats_table = Table(test_stats_table)
		stats_table.setStyle(TableStyle([('INNERGRID', (0,0), (-1,-1), 0.25, colors.black)]	))
		flowables.append(stats_table)

		list_of_graphs = create_all_graphs(test)

		for graph in list_of_graphs:
			flowables.append(graph)
		
	try:
		doc.build(flowables)
		with open(location_to_save_to, "wb") as f:
			f.write(pdf_buffer.getvalue())
		
	except: 
		print("Error in generating PDF!")
		print(sys.exc_info()[0].args)
		return False
	
	return True

def generateComparisonPDF(file_location, comparison_location, options_for_graphing, location_to_save_to):
	if not Path(file_location).exists(): return False
	if not Path(comparison_location).exists(): return False
	
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
			patient_data.baselineHeadache = float(row[valueID.Headache.value]) - float(row[valueID.changeOfHeadache.value])
			patient_data.baselineDizziness = float(row[valueID.Dizziness.value]) - float(row[valueID.changeOfDizziness.value])
			patient_data.baselineNausea = float(row[valueID.Nausea.value]) - float(row[valueID.changeOfNausea.value])
			patient_data.baselineFogginess = float(row[valueID.Fogginess.value]) - float(row[valueID.changeOfFogginess.value])

		load_row_experiment_data(patient_data, row)

	csvfile = open(comparison_location)
	comparison = csv.reader(csvfile, delimiter=",")

	patient_comparison = PatientData()
	for index, row in enumerate(comparison):
		if (index == 0): 
			continue
		if (index == 1):
			patient_comparison.participantID = row[valueID.ParticipantID.value]
			patient_comparison.first_name = row[valueID.FirstName.value]
			patient_comparison.last_name = row[valueID.LastName.value]
			patient_comparison.sport = row[valueID.Sport.value]
			patient_comparison.dateOfInjury = row[valueID.DateOfInjury.value]
			patient_comparison.dateOfVisit = row[valueID.DateSeen.value]
			patient_comparison.age = row[valueID.Age.value]
			patient_comparison.gender = row[valueID.Gender.value]
			patient_comparison.baselineHeadache = float(row[valueID.Headache.value]) - float(row[valueID.changeOfHeadache.value])
			patient_comparison.baselineDizziness = float(row[valueID.Dizziness.value]) - float(row[valueID.changeOfDizziness.value])
			patient_comparison.baselineNausea = float(row[valueID.Nausea.value]) - float(row[valueID.changeOfNausea.value])
			patient_comparison.baselineFogginess = float(row[valueID.Fogginess.value]) - float(row[valueID.changeOfFogginess.value])

		load_row_experiment_data(patient_comparison, row)
	
	# Create buffer and document object
	pdf_buffer = io.BytesIO()
	doc = SimpleDocTemplate(pdf_buffer)
	flowables = []

	sample_style_sheet = getSampleStyleSheet()

	main_title = Paragraph("Patient Data", sample_style_sheet["Heading1"])
	demographics_paragraph = Paragraph(
		"Patient Name: " + patient_data.first_name + " " + patient_data.last_name + "<br/>"\
		"Age: " + patient_data.age + "<br/>"\
		"Gender: " + patient_data.gender + "<br/>"\
		"Sport: " + patient_data.sport + "<br/>"\
		"Date of Injury: " + patient_data.dateOfInjury + "<br/>"\
		"Date of Visit: " + patient_data.dateOfVisit + "<br/>",\
		sample_style_sheet["BodyText"]
	)
	flowables.append(main_title)
	flowables.append(demographics_paragraph)

	beginning_measurements_comparison = []

	beginning_measurements_comparison.append(["","Measurements at Start", ""])
	beginning_measurements_comparison.append(["", "Current", "Baseline"])
	beginning_measurements_comparison.append(["Headache", patient_data.baselineHeadache, patient_comparison.baselineHeadache])
	beginning_measurements_comparison.append(["Dizziness", patient_data.baselineDizziness, patient_comparison.baselineDizziness])
	beginning_measurements_comparison.append(["Nausea", patient_data.baselineNausea, patient_comparison.baselineNausea])
	beginning_measurements_comparison.append(["Fogginess", patient_data.baselineFogginess, patient_comparison.baselineFogginess])
	beginning_measurements_table = Table(beginning_measurements_comparison)
	beginning_measurements_table.setStyle(TableStyle([('INNERGRID', (0,0), (-1,-1), 0.25, colors.black)]	))
	flowables.append(beginning_measurements_table)


	

	stats_headings = ["ChangeOfHeadache", "ChangeOfDizziness", "ChangeOfNausea", "ChangeOfFogginess",\
		"Headache", "Dizziness", "Nausea", "Fogginess",\
		"Local Dot Position X", "Local Dot Position Y", "Local Dot Position Z",\
		"World Dot Position X", "World Dot Position Y", "World Dot Position Z",\
		"Head Position X", "Head Position Y", "Head Position Z",\
		"Head Orientation X", "Head Orientation Y", "Head Orientation Z",\
		"Left Eye Origin X", "Left Eye Origin Y", "Left Eye Origin Z",\
		"Right Eye Origin X", "Right Eye Origin Y", "Right Eye Origin Z",\
		"Left Eye Direction X", "Left Eye Direction Y", "Left Eye Direction Z",\
		"Right Eye Direction X", "Right Eye Direction Y", "Right Eye Direction Z",\
		"Combined Eye Origin X", "Combined Eye Origin Y", "Combined Eye Origin Z",\
		"Combined Eye Direction X", "Combined Eye Direction Y", "Combined Eye Direction Z",\
		"Fixation X", "Fixation Y", "Fixation Z",\
		"First Convergence", "Second Convergence", "Third Convergence"]

	tests_with_data = filter(lambda a: a.hasData, patient_data.experiments)

	for test in tests_with_data:
		flowables.append(PageBreak())
		flowables.append(Paragraph(test.experimentName, sample_style_sheet["Heading1"]))

		table_comparison_list = create_table_comparison_list(test, patient_comparison.experiments[experimentID[test.experimentID]])

		comparison_table = Table(table_comparison_list)
		comparison_table.setStyle(TableStyle([('INNERGRID', (0,0), (-1,-1), 0.25, colors.black)]	))
		flowables.append(comparison_table)
		
	try:
		doc.build(flowables)
		with open(location_to_save_to, "wb") as f:
			f.write(pdf_buffer.getvalue())
		
	except: 
		print("Error in generating PDF!")
		print(sys.exc_info()[0].args)
		return False
	
	return True
#print(generateComparisonPDF("D:/Documents/CS425Project/Binaries/Win64/test.csv", "D:/Documents/CS425Project/Binaries/Win64/test.csv", "", "D:/Documents/CS425Project/Binaries/Win64/pdf/s.pdf"))