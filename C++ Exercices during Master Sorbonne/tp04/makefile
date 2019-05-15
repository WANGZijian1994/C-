Swap: Swap.o 
	g++ -g Swap.o -o Swap.exe

Swap.o: Swap.cpp Swap.h
	g++ -std=c++0x -g -c -w Swap.cpp

Ensemble: Ensemble.o Animal.o
	g++ -g Ensemble.o Animal.o -o Ensemble.exe

Ensemble.o: Ensemble.cpp Ensemble.h
	g++ -std=c++0x -g -c -w Ensemble.cpp

Animal.o: Animal.cpp Animal.h
	g++ -std=c++0x -g -c -w Animal.cpp

EnsembleOrdonnance: EnsembleOrdonnance.o Date.o Etudiant.o 
	g++ -g EnsembleOrdonnance.o Date.o Etudiant.o -o EnsembleOrdonnance.exe

EnsembleOrdonnance.o: EnsembleOrdonnance.cpp 
	g++ -std=c++0x -g -c -w EnsembleOrdonnance.cpp

Date.o: Date.cpp Date.h
	g++ -std=c++0x -g -c -w Date.cpp
	
Etudiant.o: Etudiant.cpp Etudiant.h
	g++ -std=c++0x -g -c -w Etudiant.cpp

clean: 
	rm -f *.o *.exe