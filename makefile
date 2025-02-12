.PHONY:all build clean

all:build

build:
	g++ -g utility/singleton.h utility/Logger.cpp utility/Logger.h main.cpp -o main
	
clean:

