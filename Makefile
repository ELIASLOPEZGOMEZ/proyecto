CXX = g++
CXXFLAGS = 
all: main

bin/main : src/main.cpp include/*
	$(CXX) src/main.cpp -o $@ -I include

Run: bin/main
	./$<