CXX = x86_64-w64-mingw32-g++
CXXFLAGS = include/Gauss.hpp include/Lagrange.hpp src/gauss.cpp 
Run : bin/main
	./bin/main

bin/main : src/main.cpp include/Gauss.hpp include/Lagrange.hpp
	$(CXX) src/main.cpp $> -o bin/main -I include/

cleanmain : bin/main
	rm bin/main