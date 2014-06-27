CXX=g++
CXXFLAGS=-Wall -g

tests/test :
	$(CXX) $(CXXFLAGS) -I./include ./src/DefineLinks.cc ./tests/tests.cc -o tests/testGlobal
