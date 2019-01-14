
from flask import Flask, render_template, request, url_for, redirect
import json
import requests
app = Flask(__name__)
@app.route('/')
def index():
    return render_template("main.html",resposta = [])
@app.route("/resposta", methods=["POST"])
def resposta():
	if (request.method == "POST"):
		p1_input = (request.form.get("p1_input") == 'on')*1
		p2_input = (request.form.get("p2_input") == 'on')*1
		p3_input = (request.form.get("p3_input") == 'on')*1
		p4_input = (request.form.get("p4_input") == 'on')*1
		buffer = (request.form.get("buffer") == 'on')*1
		b_full = (request.form.get("b_full") == 'on')*1
		capper_buffer = (request.form.get("capper_buffer") == 'on')*1
		b_capped = (request.form.get("b_capped") == 'on')*1
		out_buffer = (request.form.get("out_buffer") == 'on')*1
		url = 'http://127.0.0.1:8082/?p1_input=%s&p2_input=%s&p3_input=%s&p4_input=%s&buffer=%s&b_full=%s&capper_buffer=%s&b_capped=%s&out_buffer=%s'% (p1_input,p2_input,p3_input,p4_input,buffer,b_full,capper_buffer,b_capped,out_buffer)
		r = requests.get(url)
		resposta = json.dumps(r.text)
		stringResposta = r.text[1:-1]
		listaResposta = stringResposta.split(',')
		def lineToHtml(line):
			line = line
			return  line
		resposta = list(map(lineToHtml,listaResposta))
		return render_template('main.html', resposta=resposta)
if __name__ == '__main__':
   app.run(debug = True)
    