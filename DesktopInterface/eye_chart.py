import matplotlib
import matplotlib.pyplot as plt
import io

def plotEye():
	plt.plot(range(10,20))
	buf = io.BytesIO()
	plt.savefig(buf, format='png')
	buf.seek(0)
	stringtest = str(buf.getvalue())[2:-1]
	return stringtest