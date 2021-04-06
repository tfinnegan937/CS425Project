echo %PATH%
@echo off

cd tex
for %%v in (*.tex) do pdflatex "%%v"
for %%v in (*.tex) do del "%%v"