.PHONY: release

release: SortPairs.cpp
	g++ -Wall -O3 -std=c++17 --pedantic -o SortPairs sortPairs.cpp
	
debug: SortPairs.cpp
	g++ -Wall -g -std=c++17 --pedantic -o SortPairsDebug sortPairs.cpp

clean:
	rm -f SortPairs SortPairsDebug
