CXX = g++
all: main

bin/main : src/main.cpp include/*
	$(CXX) $< -o $@ -I include

Run: bin/main
	./$<