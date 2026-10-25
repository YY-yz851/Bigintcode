YY:main.cpp project.o
	g++  -o YY main.cpp project.o
project.o:project.cpp project.h
	g++ -c -o project.o project.cpp
