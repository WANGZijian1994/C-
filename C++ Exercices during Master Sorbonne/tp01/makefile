all: monPremierProgrammeC++ circle factorielle minimum Paire testDate areaRectangle CRectangle tableau

tableau: tableau.o
	g++ -g tableau.o -o tableau.exe
	
tableau.o: tableau.cpp
	g++ -std=c++0x -g -c -w tableau.cpp

monPremierProgrammeC++: monPremierProgrammeC++.o
	g++ -g monPremierProgrammeC++.o -o monPremierProgrammeC++.exe
	
monPremierProgrammeC++.o: monPremierProgrammeC++.cpp
	g++ -std=c++0x -g -c -w monPremierProgrammeC++.cpp

circle: circle.o
	g++ -g circle.o -o circle.exe
	
circle.o: circle.cpp circle.h
	g++ -std=c++0x -g -c -w circle.cpp

testDate: testDate.o date.o
	g++ -g testDate.o date.o -o testDate.exe

testDate.o: testDate.cpp date.h
	g++ -std=c++0x -g -c -w testDate.cpp
	
date.o: date.cpp date.h
	g++ -std=c++0x -g -c -w date.cpp

areaRectangle: areaRectangle.o
	g++ -g areaRectangle.o -o areaRectangle.exe
	
areaRectangle.o: areaRectangle.cpp
	g++ -std=c++0x -g -c -w areaRectangle.cpp

CRectangle: CRectangle.o
	g++ -g CRectangle.o -o CRectangle.exe
	
CRectangle.o: CRectangle.cpp
	g++ -std=c++0x -g -c -w CRectangle.cpp

factorielle: factorielle.o
	g++ -g factorielle.o -o factorielle.exe
	
factorielle.o: factorielle.cpp factorielle.h
	g++ -std=c++0x -g -c -w factorielle.cpp

minimum: minimum.o
	g++ -g minimum.o -o minimum.exe
	
minimum.o: minimum.cpp minimum.h
	g++ -std=c++0x -g -c -w minimum.cpp

Paire: Paire.o Parite.o
	g++ Paire.o Parite.o -o Paire.exe

Paire.o: Paire.h Parite.h Paire.cpp
	g++ -c Paire.cpp

Parite.o: Parite.h Parite.cpp
	g++ -c Parite.cpp

clean: 
	rm -f *.o *.exe