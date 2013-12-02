import subprocess

proc = subprocess.Popen("pdflatex report.tex", shell=True)
proc.wait()
proc = subprocess.Popen("pdflatex report.tex", shell=True)
proc.wait()

proc = subprocess.Popen("mkdir output", shell=True)
proc.wait()

proc = subprocess.Popen("move report.pdf output", shell=True)
proc.wait()

proc = subprocess.Popen("del *.out", shell=True)
proc.wait()

proc = subprocess.Popen("del *.log", shell=True)
proc.wait()

proc = subprocess.Popen("del *.aux", shell=True)
proc.wait()

proc = subprocess.Popen("del *.toc", shell=True)
proc.wait()
