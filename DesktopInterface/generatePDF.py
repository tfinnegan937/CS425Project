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

def create_graph(x, y, title, x_title, y_title, flowables):
	imgdata = io.BytesIO()
	plt.plot(x, y)
	plt.title(title)
	plt.xlabel(x_title)
	plt.ylabel(y_title)
	plt.savefig(imgdata, format="png")
	imgdata.seek(0)
	plt.close()
	plt.clf()
	flowables.append(Image(imgdata))


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
		"Sport: " + patient_data.sport + "<br/>"
		"Date of Injury: " + patient_data.dateOfInjury + "<br/>"
		"Date of Visit: " + patient_data.dateOfVisit + "<br/>",
		sample_style_sheet["BodyText"]
	)
	flowables.append(main_title)
	flowables.append(demographics_paragraph)

	stats_headings = ["ChangeOfSymptom","SymptomScore",\
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
		"Fixation X", "Fixation Y", "Fixation Z"]

	tests_with_data = filter(lambda a: a.hasData, patient_data.experiments)

	for test in tests_with_data:
		flowables.append(PageBreak())
		flowables.append(Paragraph(test.experimentName, sample_style_sheet["Heading1"]))

		test_stats_table = []

		test_stats_table.append(["", "Mean", "St. Dev."])
		test_stats_table.append([stats_headings[0], np.average(test.changeOfSymptom), np.std(test.changeOfSymptom)])
		test_stats_table.append([stats_headings[1], np.average(test.symptomScore), np.std(test.symptomScore)])
		test_stats_table.append([stats_headings[2], np.average(test.localDotPositionX), np.std(test.localDotPositionX)])
		test_stats_table.append([stats_headings[3], np.average(test.localDotPositionY), np.std(test.localDotPositionY)])
		test_stats_table.append([stats_headings[4], np.average(test.localDotPositionZ), np.std(test.localDotPositionZ)])
		test_stats_table.append([stats_headings[5], np.average(test.worldDotPositionX), np.std(test.worldDotPositionX)])
		test_stats_table.append([stats_headings[6], np.average(test.worldDotPositionY), np.std(test.worldDotPositionY)])
		test_stats_table.append([stats_headings[7], np.average(test.worldDotPositionZ), np.std(test.worldDotPositionZ)])
		test_stats_table.append([stats_headings[8], np.average(test.headPositionX), np.std(test.headPositionX)])
		test_stats_table.append([stats_headings[9], np.average(test.headPositionY), np.std(test.headPositionY)])
		test_stats_table.append([stats_headings[10], np.average(test.headPositionZ), np.std(test.headPositionZ)])
		test_stats_table.append([stats_headings[11], np.average(test.headOrientationX), np.std(test.headOrientationX)])
		test_stats_table.append([stats_headings[12], np.average(test.headOrientationY), np.std(test.headOrientationY)])
		test_stats_table.append([stats_headings[13], np.average(test.headOrientationZ), np.std(test.headOrientationZ)])
		test_stats_table.append([stats_headings[14], np.average(test.leftEyeOriginX), np.std(test.leftEyeOriginX)])
		test_stats_table.append([stats_headings[15], np.average(test.leftEyeOriginY), np.std(test.leftEyeOriginY)])
		test_stats_table.append([stats_headings[16], np.average(test.leftEyeOriginZ), np.std(test.leftEyeOriginZ)])
		test_stats_table.append([stats_headings[17], np.average(test.rightEyeOriginX), np.std(test.rightEyeOriginX)])
		test_stats_table.append([stats_headings[18], np.average(test.rightEyeOriginY), np.std(test.rightEyeOriginY)])
		test_stats_table.append([stats_headings[19], np.average(test.rightEyeOriginZ), np.std(test.rightEyeOriginZ)])
		test_stats_table.append([stats_headings[20], np.average(test.leftEyeDirectionX), np.std(test.leftEyeDirectionX)])
		test_stats_table.append([stats_headings[21], np.average(test.leftEyeDirectionY), np.std(test.leftEyeDirectionY)])
		test_stats_table.append([stats_headings[22], np.average(test.leftEyeDirectionZ), np.std(test.leftEyeDirectionZ)])
		test_stats_table.append([stats_headings[23], np.average(test.rightEyeDirectionX), np.std(test.rightEyeDirectionX)])
		test_stats_table.append([stats_headings[24], np.average(test.rightEyeDirectionY), np.std(test.rightEyeDirectionY)])
		test_stats_table.append([stats_headings[25], np.average(test.rightEyeDirectionZ), np.std(test.rightEyeDirectionZ)])
		test_stats_table.append([stats_headings[26], np.average(test.combinedEyeOriginX), np.std(test.combinedEyeOriginX)])
		test_stats_table.append([stats_headings[27], np.average(test.combinedEyeOriginY), np.std(test.combinedEyeOriginY)])
		test_stats_table.append([stats_headings[28], np.average(test.combinedEyeOriginZ), np.std(test.combinedEyeOriginZ)])
		test_stats_table.append([stats_headings[29], np.average(test.combinedEyeDirectionX), np.std(test.combinedEyeDirectionX)])
		test_stats_table.append([stats_headings[30], np.average(test.combinedEyeDirectionY), np.std(test.combinedEyeDirectionY)])
		test_stats_table.append([stats_headings[31], np.average(test.combinedEyeDirectionZ), np.std(test.combinedEyeDirectionZ)])
		test_stats_table.append([stats_headings[29], np.average(test.fixationX), np.std(test.fixationX)])
		test_stats_table.append([stats_headings[30], np.average(test.fixationY), np.std(test.fixationY)])
		test_stats_table.append([stats_headings[31], np.average(test.fixationZ), np.std(test.fixationZ)])

		stats_table = Table(test_stats_table)
		stats_table.setStyle(TableStyle([('INNERGRID', (0,0), (-1,-1), 0.25, colors.black)]	))
		flowables.append(stats_table)
		
		create_graph(test.timestamp, test.changeOfSymptom, "Change in Symptoms vs Time",\
			 "Time (s)", "Change in Symptoms", flowables)

		create_graph(test.timestamp, test.symptomScore, "Symptom Score vs Time",\
			 "Time (s)", "Symptom Score", flowables)

		create_graph(test.timestamp, test.localDotPositionX, "Local Dot Position X-value vs Time",\
			 "Time (s)", "Local Dot Position X-value", flowables)

		create_graph(test.timestamp, test.localDotPositionY, "Local Dot Position Y-value vs Time",\
			 "Time (s)", "Local Dot Position Y-value", flowables)

		create_graph(test.timestamp, test.localDotPositionZ, "Local Dot Position Z-value vs Time",\
			 "Time (s)", "Local Dot Position Z-value", flowables)

		create_graph(test.timestamp, test.worldDotPositionX, "World Dot Position X-value vs Time",\
			 "Time (s)", "World Dot Position X-value", flowables)

		create_graph(test.timestamp, test.worldDotPositionY, "World Dot Position Y-value vs Time",\
			 "Time (s)", "World Dot Position Y-value", flowables)

		create_graph(test.timestamp, test.worldDotPositionZ, "World Dot Position Z-value vs Time",\
			 "Time (s)", "World Dot Position Z-value", flowables)

		create_graph(test.timestamp, test.headPositionX, "Head Position X-value vs Time",\
			 "Time (s)", "Head Position X-value", flowables)

		create_graph(test.timestamp, test.headPositionY, "Head Position Y-value vs Time",\
			 "Time (s)", "Head Position Y-value", flowables)

		create_graph(test.timestamp, test.headPositionZ, "Head Position Z-value vs Time",\
			 "Time (s)", "Head Position Z-value", flowables)

		create_graph(test.timestamp, test.headOrientationX, "Head Orientation X-value vs Time",\
			 "Time (s)", "Head Orientation X-value", flowables)

		create_graph(test.timestamp, test.headOrientationY, "Head Orientation Y-value vs Time",\
			 "Time (s)", "Head Orientation Y-value", flowables)

		create_graph(test.timestamp, test.headOrientationZ, "Head Orientation Z-value vs Time",\
			 "Time (s)", "Head Orientation Z-value", flowables)

		create_graph(test.timestamp, test.leftEyeOriginX, "Left Eye Origin X-value vs Time",\
			 "Time (s)", "Left Eye Origin X-value", flowables)
		
		create_graph(test.timestamp, test.leftEyeOriginY, "Left Eye Origin Y-value vs Time",\
			 "Time (s)", "Left Eye Origin Y-value", flowables)

		create_graph(test.timestamp, test.leftEyeOriginZ, "Left Eye Origin Z-value vs Time",\
			 "Time (s)", "Left Eye Origin Z-value", flowables)

		create_graph(test.timestamp, test.leftEyeDirectionX, "Left Eye Direction X-value vs Time",\
			 "Time (s)", "Left Eye Direction X-value", flowables)
		
		create_graph(test.timestamp, test.leftEyeDirectionY, "Left Eye Direction Y-value vs Time",\
			 "Time (s)", "Left Eye Direction Y-value", flowables)

		create_graph(test.timestamp, test.leftEyeDirectionZ, "Left Eye Direction Z-value vs Time",\
			 "Time (s)", "Left Eye Direction Z-value", flowables)

		create_graph(test.timestamp, test.rightEyeOriginX, "Right Eye Origin X-value vs Time",\
			 "Time (s)", "Right Eye Origin X-value", flowables)
		
		create_graph(test.timestamp, test.rightEyeOriginY, "Right Eye Origin Y-value vs Time",\
			 "Time (s)", "Right Eye Origin Y-value", flowables)

		create_graph(test.timestamp, test.rightEyeOriginZ, "Right Eye Origin Z-value vs Time",\
			 "Time (s)", "Right Eye Origin Z-value", flowables)

		create_graph(test.timestamp, test.rightEyeDirectionX, "Right Eye Direction X-value vs Time",\
			 "Time (s)", "Right Eye Direction X-value", flowables)
		
		create_graph(test.timestamp, test.rightEyeDirectionY, "Right Eye Direction Y-value vs Time",\
			 "Time (s)", "Right Eye Direction Y-value", flowables)

		create_graph(test.timestamp, test.rightEyeDirectionZ, "Right Eye Direction Z-value vs Time",\
			 "Time (s)", "Right Eye Direction Z-value", flowables)

		create_graph(test.timestamp, test.combinedEyeOriginX, "Combined Eye Origin X-value vs Time",\
			 "Time (s)", "Combined Eye Origin X-value", flowables)
		
		create_graph(test.timestamp, test.combinedEyeOriginY, "Combined Eye Origin Y-value vs Time",\
			 "Time (s)", "Combined Eye Origin Y-value", flowables)

		create_graph(test.timestamp, test.combinedEyeOriginZ, "Combined Eye Origin Z-value vs Time",\
			 "Time (s)", "Combined Eye Origin Z-value", flowables)

		create_graph(test.timestamp, test.combinedEyeDirectionX, "Combined Eye Direction X-value vs Time",\
			 "Time (s)", "Combined Eye Direction X-value", flowables)
		
		create_graph(test.timestamp, test.combinedEyeDirectionY, "Combined Eye Direction Y-value vs Time",\
			 "Time (s)", "Combined Eye Direction Y-value", flowables)

		create_graph(test.timestamp, test.combinedEyeDirectionZ, "Combined Eye Direction Z-value vs Time",\
			 "Time (s)", "Combined Eye Direction Z-value", flowables)

		create_graph(test.timestamp, test.fixationX, "Fixation X-value vs Time",\
			 "Time (s)", "Fixation X-value", flowables)
		
		create_graph(test.timestamp, test.fixationY, "Fixation Y-value vs Time",\
			 "Time (s)", "Fixation Y-value", flowables)

		create_graph(test.timestamp, test.fixationZ, "Fixation Z-value vs Time",\
			 "Time (s)", "Fixation Z-value", flowables)
		
	try:
		doc.build(flowables)
		with open(location_to_save_to, "wb") as f:
			f.write(pdf_buffer.getvalue())
		
	except: 
		print("Error in generating PDF!")
		print(sys.exc_info()[0].args)
		return False
	
	return True
print(generatePDF("D:/Documents/CS425Project/Binaries/Win64/test.csv", "", "D:/Documents/CS425Project/Binaries/Win64/pdf/s.pdf"))