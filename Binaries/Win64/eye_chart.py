import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt
import io
import base64

def int_string_to_int_list(int_string):
	return list(map(int, list(int_string.split())))

def plotEye(test_values):
	plt.figure(1)
	plt.plot(int_string_to_int_list(test_values))
	buf = io.BytesIO()
	plt.savefig(buf, format='png')
	buf.seek(0)
	b64test = base64.b64encode(buf.getvalue()).decode("utf-8").replace("\n", "")
	plt.close(1);
	return str(b64test)
