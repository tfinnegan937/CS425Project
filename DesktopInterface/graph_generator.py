import io
import matplotlib
import numpy as np
matplotlib.use('Agg')
import matplotlib.pyplot as plt
from reportlab.platypus import Image
from reportlab.lib.units import inch

class RotatedImage(Image):

    def wrap(self, availWidth, availHeight):
        height, width = Image.wrap(self, availHeight, availWidth)
        return width, height

    def draw(self):
        self.canv.translate(0, 11 * inch * 3 / 4)
        self.canv.rotate(-90)
        Image.draw(self)


def create_delta(values, time):
    delta_values = []
    for index, _ in enumerate(values):
        if index == 0: continue
        if time[index] == time[index-1]:
            delta_values.append(delta_values[-1])
        else:
            delta_time = time[index] - time[index-1]
            delta_values.append((values[index] - values[index-1]) / delta_time)
    return delta_values


def create_graph(x, y, title, x_title, y_title, list_of_graphs):
    imgdata = io.BytesIO()
    plt.plot(x, y)
    plt.title(title)
    plt.xlabel(x_title)
    plt.ylabel(y_title)
    plt.savefig(imgdata, format="png")
    imgdata.seek(0)
    plt.close()
    plt.clf()
    I = Image(imgdata)
    I._restrictSize(8.5 * inch, 4.5 * inch)
    list_of_graphs.append(I)


def create_all_graphs(test):
    
    list_of_graphs = []

    create_graph(test.timestamp, test.changeOfSymptom, "Change in Symptoms vs Time",\
        "Time (s)", "Change in Symptoms", list_of_graphs)

    create_graph(test.timestamp, test.symptomScore, "Symptom Score vs Time",\
        "Time (s)", "Symptom Score", list_of_graphs)

    create_graph(test.timestamp, test.localDotPositionX, "Local Dot Position X-value vs Time",\
        "Time (s)", "Local Dot Position X-value", list_of_graphs)

    delta_localDotPositionX = create_delta(test.localDotPositionX, test.timestamp)
    create_graph(test.timestamp[1:], delta_localDotPositionX, "Change in Local Dot Position X vs Time",\
        "Time (s)", "Change in Local Dot Position X", list_of_graphs)

    create_graph(test.timestamp, test.localDotPositionY, "Local Dot Position Y-value vs Time",\
        "Time (s)", "Local Dot Position Y-value", list_of_graphs)

    delta_localDotPositionY = create_delta(test.localDotPositionY, test.timestamp)
    create_graph(test.timestamp[1:], delta_localDotPositionY, "Change in Local Dot Position Y vs Time",\
        "Time (s)", "Change in Local Dot Position Y", list_of_graphs)

    create_graph(test.timestamp, test.localDotPositionZ, "Local Dot Position Z-value vs Time",\
        "Time (s)", "Local Dot Position Z-value", list_of_graphs)

    delta_localDotPositionZ = create_delta(test.localDotPositionZ, test.timestamp)
    create_graph(test.timestamp[1:], delta_localDotPositionZ, "Change in Local Dot Position Z vs Time",\
        "Time (s)", "Change in Local Dot Position Z", list_of_graphs)

    create_graph(test.timestamp, test.worldDotPositionX, "World Dot Position X-value vs Time",\
        "Time (s)", "World Dot Position X-value", list_of_graphs)

    delta_worldDotPositionX = create_delta(test.worldDotPositionX, test.timestamp)
    create_graph(test.timestamp[1:], delta_worldDotPositionX, "Change in World Dot Position X vs Time",\
        "Time (s)", "Change in World Dot Position X", list_of_graphs)

    create_graph(test.timestamp, test.worldDotPositionY, "World Dot Position Y-value vs Time",\
        "Time (s)", "World Dot Position Y-value", list_of_graphs)

    delta_worldDotPositionY = create_delta(test.worldDotPositionY, test.timestamp)
    create_graph(test.timestamp[1:], delta_worldDotPositionY, "Change in World Dot Position Y vs Time",\
        "Time (s)", "Change in World Dot Position Y", list_of_graphs)

    create_graph(test.timestamp, test.worldDotPositionZ, "World Dot Position Z-value vs Time",\
        "Time (s)", "World Dot Position Z-value", list_of_graphs)

    delta_worldDotPositionZ = create_delta(test.worldDotPositionZ, test.timestamp)
    create_graph(test.timestamp[1:], delta_worldDotPositionZ, "Change in World Dot Position Z vs Time",\
        "Time (s)", "Change in World Dot Position Z", list_of_graphs)

    create_graph(test.timestamp, test.headPositionX, "Head Position X-value vs Time",\
        "Time (s)", "Head Position X-value", list_of_graphs)
    
    delta_headPositionX = create_delta(test.headPositionX, test.timestamp)
    create_graph(test.timestamp[1:], delta_headPositionX, "Change in Head Position X vs Time",\
        "Time (s)", "Change in Head Position X", list_of_graphs)

    create_graph(test.timestamp, test.headPositionY, "Head Position Y-value vs Time",\
        "Time (s)", "Head Position Y-value", list_of_graphs)

    delta_headPositionY = create_delta(test.headPositionY, test.timestamp)
    create_graph(test.timestamp[1:], delta_headPositionY, "Change in Head Position Y vs Time",\
        "Time (s)", "Change in Head Position Y", list_of_graphs)

    create_graph(test.timestamp, test.headPositionZ, "Head Position Z-value vs Time",\
        "Time (s)", "Head Position Z-value", list_of_graphs)

    delta_headPositionZ = create_delta(test.headPositionZ, test.timestamp)
    create_graph(test.timestamp[1:], delta_headPositionZ, "Change in Head Position Z vs Time",\
        "Time (s)", "Change in Head Position Z", list_of_graphs)

    create_graph(test.timestamp, test.headOrientationX, "Head Orientation X-value vs Time",\
        "Time (s)", "Head Orientation X-value", list_of_graphs)

    delta_headOrientationX = create_delta(test.headOrientationX, test.timestamp)
    create_graph(test.timestamp[1:], delta_headOrientationX, "Change in Head Orientation X vs Time",\
        "Time (s)", "Change in Head Orientation X", list_of_graphs)

    create_graph(test.timestamp, test.headOrientationY, "Head Orientation Y-value vs Time",\
        "Time (s)", "Head Orientation Y-value", list_of_graphs)

    delta_headOrientationY = create_delta(test.headOrientationY, test.timestamp)
    create_graph(test.timestamp[1:], delta_headOrientationY, "Change in Head Orientation Y vs Time",\
        "Time (s)", "Change in Head Orientation Y", list_of_graphs)

    create_graph(test.timestamp, test.headOrientationZ, "Head Orientation Z-value vs Time",\
        "Time (s)", "Head Orientation Z-value", list_of_graphs)
    
    delta_headOrientationZ = create_delta(test.headOrientationZ, test.timestamp)
    create_graph(test.timestamp[1:], delta_headOrientationZ, "Change in Head Orientation Z vs Time",\
        "Time (s)", "Change in Head Orientation Z", list_of_graphs)

    create_graph(test.timestamp, test.leftEyeOriginX, "Left Eye Origin X-value vs Time",\
        "Time (s)", "Left Eye Origin X-value", list_of_graphs)

    delta_leftEyeOriginX = create_delta(test.leftEyeOriginX, test.timestamp)
    create_graph(test.timestamp[1:], delta_leftEyeOriginX, "Change in Left Eye Origin X vs Time",\
        "Time (s)", "Change in Left Eye Origin X", list_of_graphs)
    
    create_graph(test.timestamp, test.leftEyeOriginY, "Left Eye Origin Y-value vs Time",\
        "Time (s)", "Left Eye Origin Y-value", list_of_graphs)

    delta_leftEyeOriginY = create_delta(test.leftEyeOriginY, test.timestamp)
    create_graph(test.timestamp[1:], delta_leftEyeOriginY, "Change in Left Eye Origin Y vs Time",\
        "Time (s)", "Change in Left Eye Origin Y", list_of_graphs)

    create_graph(test.timestamp, test.leftEyeOriginZ, "Left Eye Origin Z-value vs Time",\
        "Time (s)", "Left Eye Origin Z-value", list_of_graphs)

    delta_leftEyeOriginZ = create_delta(test.leftEyeOriginZ, test.timestamp)
    create_graph(test.timestamp[1:], delta_leftEyeOriginZ, "Change in Left Eye Origin Z vs Time",\
        "Time (s)", "Change in Left Eye Origin Z", list_of_graphs)
    
    create_graph(test.timestamp, test.leftEyeDirectionX, "Left Eye Direction X-value vs Time",\
        "Time (s)", "Left Eye Direction X-value", list_of_graphs)

    delta_leftEyeDirectionX = create_delta(test.leftEyeDirectionX, test.timestamp)
    create_graph(test.timestamp[1:], delta_leftEyeDirectionX, "Change in Left Eye Direction X vs Time",\
        "Time (s)", "Change in Left Eye Direction X", list_of_graphs)
    
    create_graph(test.timestamp, test.leftEyeDirectionY, "Left Eye Direction Y-value vs Time",\
        "Time (s)", "Left Eye Direction Y-value", list_of_graphs)

    delta_leftEyeDirectionY = create_delta(test.leftEyeDirectionY, test.timestamp)
    create_graph(test.timestamp[1:], delta_leftEyeDirectionY, "Change in Left Eye Direction Y vs Time",\
        "Time (s)", "Change in Left Eye Direction Y", list_of_graphs)

    create_graph(test.timestamp, test.leftEyeDirectionZ, "Left Eye Direction Z-value vs Time",\
        "Time (s)", "Left Eye Direction Z-value", list_of_graphs)

    delta_leftEyeDirectionZ = create_delta(test.leftEyeDirectionZ, test.timestamp)
    create_graph(test.timestamp[1:], delta_leftEyeDirectionZ, "Change in Left Eye Direction Z vs Time",\
        "Time (s)", "Change in Left Eye Direction Z", list_of_graphs)

    create_graph(test.timestamp, test.rightEyeOriginX, "Right Eye Origin X-value vs Time",\
        "Time (s)", "Right Eye Origin X-value", list_of_graphs)

    delta_rightEyeOriginX = create_delta(test.rightEyeOriginX, test.timestamp)
    create_graph(test.timestamp[1:], delta_rightEyeOriginX, "Change in Right Eye Origin X vs Time",\
        "Time (s)", "Change in Right Eye Origin X", list_of_graphs)
    
    create_graph(test.timestamp, test.rightEyeOriginY, "Right Eye Origin Y-value vs Time",\
        "Time (s)", "Right Eye Origin Y-value", list_of_graphs)

    delta_rightEyeOriginY = create_delta(test.rightEyeOriginY, test.timestamp)
    create_graph(test.timestamp[1:], delta_rightEyeOriginY, "Change in Right Eye Origin Y vs Time",\
        "Time (s)", "Change in Right Eye Origin Y", list_of_graphs)

    create_graph(test.timestamp, test.rightEyeOriginZ, "Right Eye Origin Z-value vs Time",\
        "Time (s)", "Right Eye Origin Z-value", list_of_graphs)

    delta_rightEyeOriginZ = create_delta(test.rightEyeOriginZ, test.timestamp)
    create_graph(test.timestamp[1:], delta_rightEyeOriginZ, "Change in Right Eye Origin Z vs Time",\
        "Time (s)", "Change in Right Eye Origin Z", list_of_graphs)
    
    create_graph(test.timestamp, test.rightEyeDirectionX, "Right Eye Direction X-value vs Time",\
        "Time (s)", "Right Eye Direction X-value", list_of_graphs)

    delta_rightEyeDirectionX = create_delta(test.rightEyeDirectionX, test.timestamp)
    create_graph(test.timestamp[1:], delta_rightEyeDirectionX, "Change in Right Eye Direction X vs Time",\
        "Time (s)", "Change in Right Eye Direction X", list_of_graphs)
    
    create_graph(test.timestamp, test.rightEyeDirectionY, "Right Eye Direction Y-value vs Time",\
        "Time (s)", "Right Eye Direction Y-value", list_of_graphs)

    delta_rightEyeDirectionY = create_delta(test.rightEyeDirectionY, test.timestamp)
    create_graph(test.timestamp[1:], delta_rightEyeDirectionY, "Change in Right Eye Direction Y vs Time",\
        "Time (s)", "Change in Right Eye Direction Y", list_of_graphs)

    create_graph(test.timestamp, test.rightEyeDirectionZ, "Right Eye Direction Z-value vs Time",\
        "Time (s)", "Right Eye Direction Z-value", list_of_graphs)

    delta_rightEyeDirectionZ = create_delta(test.rightEyeDirectionZ, test.timestamp)
    create_graph(test.timestamp[1:], delta_rightEyeDirectionZ, "Change in Right Eye Direction Z vs Time",\
        "Time (s)", "Change in Right Eye Direction Z", list_of_graphs)

    create_graph(test.timestamp, test.combinedEyeOriginX, "Combined Eye Origin X-value vs Time",\
        "Time (s)", "Combined Eye Origin X-value", list_of_graphs)

    delta_combinedEyeOriginX = create_delta(test.combinedEyeOriginX, test.timestamp)
    create_graph(test.timestamp[1:], delta_combinedEyeOriginX, "Change in Combined Eye Origin X vs Time",\
        "Time (s)", "Change in Combined Eye Origin X", list_of_graphs)
    
    create_graph(test.timestamp, test.combinedEyeOriginY, "Combined Eye Origin Y-value vs Time",\
        "Time (s)", "Combined Eye Origin Y-value", list_of_graphs)

    delta_combinedEyeOriginY = create_delta(test.combinedEyeOriginY, test.timestamp)
    create_graph(test.timestamp[1:], delta_combinedEyeOriginY, "Change in Combined Eye Origin Y vs Time",\
        "Time (s)", "Change in Combined Eye Origin Y", list_of_graphs)

    create_graph(test.timestamp, test.combinedEyeOriginZ, "Combined Eye Origin Z-value vs Time",\
        "Time (s)", "Combined Eye Origin Z-value", list_of_graphs)

    delta_combinedEyeOriginZ = create_delta(test.combinedEyeOriginZ, test.timestamp)
    create_graph(test.timestamp[1:], delta_combinedEyeOriginZ, "Change in Combined Eye Origin Z vs Time",\
        "Time (s)", "Change in Combined Eye Origin Z", list_of_graphs)
    
    create_graph(test.timestamp, test.combinedEyeDirectionX, "Combined Eye Direction X-value vs Time",\
        "Time (s)", "Combined Eye Direction X-value", list_of_graphs)

    delta_combinedEyeDirectionX = create_delta(test.combinedEyeDirectionX, test.timestamp)
    create_graph(test.timestamp[1:], delta_combinedEyeDirectionX, "Change in Combined Eye Direction X vs Time",\
        "Time (s)", "Change in Combined Eye Direction X", list_of_graphs)
    
    create_graph(test.timestamp, test.combinedEyeDirectionY, "Combined Eye Direction Y-value vs Time",\
        "Time (s)", "Combined Eye Direction Y-value", list_of_graphs)

    delta_combinedEyeDirectionY = create_delta(test.combinedEyeDirectionY, test.timestamp)
    create_graph(test.timestamp[1:], delta_combinedEyeDirectionY, "Change in Combined Eye Direction Y vs Time",\
        "Time (s)", "Change in Combined Eye Direction Y", list_of_graphs)

    create_graph(test.timestamp, test.combinedEyeDirectionZ, "Combined Eye Direction Z-value vs Time",\
        "Time (s)", "Combined Eye Direction Z-value", list_of_graphs)

    delta_combinedEyeDirectionZ = create_delta(test.combinedEyeDirectionZ, test.timestamp)
    create_graph(test.timestamp[1:], delta_combinedEyeDirectionZ, "Change in Combined Eye Direction Z vs Time",\
        "Time (s)", "Change in Combined Eye Direction Z", list_of_graphs)

    create_graph(test.timestamp, test.fixationX, "Fixation X-value vs Time",\
        "Time (s)", "Fixation X-value", list_of_graphs)

    delta_fixationX = create_delta(test.fixationX, test.timestamp)
    create_graph(test.timestamp[1:], delta_fixationX, "Change in Fixation X vs Time",\
        "Time (s)", "Change in Fixation X", list_of_graphs)
    
    create_graph(test.timestamp, test.fixationY, "Fixation Y-value vs Time",\
        "Time (s)", "Fixation Y-value", list_of_graphs)

    delta_fixationY = create_delta(test.fixationY, test.timestamp)
    create_graph(test.timestamp[1:], delta_fixationY, "Change in Fixation Y vs Time",\
        "Time (s)", "Change in Fixation Y", list_of_graphs)

    create_graph(test.timestamp, test.fixationZ, "Fixation Z-value vs Time",\
        "Time (s)", "Fixation Z-value", list_of_graphs)

    delta_fixationZ = create_delta(test.fixationZ, test.timestamp)
    create_graph(test.timestamp[1:], delta_fixationZ, "Change in Fixation Z vs Time",\
        "Time (s)", "Change in Fixation Z", list_of_graphs)

    

    return list_of_graphs