all: heartrate

heartrate: heartrate.cpp
	g++ -o  heartrate heartrate.cpp
