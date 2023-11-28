CXX = x86_64-w64-mingw32-g++
CXXFLAGS = include/Gauss.hpp include/Lagrange.hpp src/gauss.cpp 

all: main

bin/main : src/main.cpp 
	$(CXX) $< $(CXXFLAGS) -o $@ 

Run: bin/main
	./$<