all: Pointer MonPremierFichierTexte Exercice20 Copier Exercice45

Pointer: Pointer.o
	g++ -g Pointer.o -o Pointer.exe
	
Pointer.o: Pointer.cpp
	g++ -std=c++0x -g -c -w Pointer.cpp

MonPremierFichierTexte: MonPremierFichierTexte.o
	g++ -g MonPremierFichierTexte.o -o MonPremierFichierTexte.exe
	
MonPremierFichierTexte.o: MonPremierFichierTexte.cpp
	g++ -std=c++0x -g -c -w MonPremierFichierTexte.cpp

Exercice20: Exercice20.o
	g++ -g Exercice20.o -o Exercice20.exe
	
Exercice20.o: Exercice20.cpp
	g++ -std=c++0x -g -c -w Exercice20.cpp

Copier: Copier.o
	g++ -g Copier.o -o Copier.exe
	
Copier.o: Copier.cpp
	g++ -std=c++0x -g -c -w Copier.cpp

Exercice45CompterDesMots: Exercice45CompterDesMots.o
	g++ -g Exercice45CompterDesMots.o -o Exercice45CompterDesMots.exe
	
Exercice45CompterDesMots.o: Exercice45CompterDesMots.cpp
	g++ -std=c++0x -g -c -w Exercice45CompterDesMots.cpp

clean: 
	rm -f *.o *.exe