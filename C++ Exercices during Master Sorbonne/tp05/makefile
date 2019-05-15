Exercice1: Exercice1.o 
	g++ -g Exercice1.o -o Exercice1.exe

Exercice1.o: Exercice1.cpp 
	g++ -std=c++0x -g -c -w Exercice1.cpp

Nettoyer: Nettoyer.o 
	g++ -g Nettoyer.o -o Nettoyer.exe

Nettoyer.o: Nettoyer.cpp 
	g++ -std=c++0x -g -c -w Nettoyer.cpp

ABR: ABR.o 
	g++ -g ABR.o -o ABR.exe

ABR.o: ABR.cpp ABR.h
	g++ -std=c++0x -g -c -w ABR.cpp

AlgorithmeElementaire: AlgorithmeElementaire.o 
	g++ -g AlgorithmeElementaire.o -o AlgorithmeElementaire.exe

AlgorithmeElementaire.o: AlgorithmeElementaire.cpp 
	g++ -std=c++0x -g -c -w AlgorithmeElementaire.cpp

clean: 
	rm -f *.o *.exe