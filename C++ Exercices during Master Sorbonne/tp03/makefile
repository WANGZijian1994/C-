test: test.o Carafe.o
	g++ -g test.o Carafe.o -o test.exe

test.o: test.cpp Carafe.h
	g++ -std=c++0x -g -c -w test.cpp

StringCompare: StringCompare.o StringCompare.o
	g++ -g test.o StringCompare.o -o StringCompare.exe

StringCompare.o: StringCompare.cpp StringCompare.h
	g++ -std=c++0x -g -c -w StringCompare.cpp
	
clean: 
	rm -f *.o *.exe