CXX=g++
CXXFLAGS=-Wall -g -std=c++17 --pedantic

all: $(patsubst %.cpp, %.obj, $(wildcard *.cpp))

%.obj: %.cpp Makefile
	$(CXX) $(CXXFLAGS) $< -o $(@:.obj=)

clean: $(patsubst %.cpp, %.clean, $(wildcard *.cpp))

%.clean:
	rm -f $(@:.clean=)
