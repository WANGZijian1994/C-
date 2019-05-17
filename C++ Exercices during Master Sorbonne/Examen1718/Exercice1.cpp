//https://github.com/LangueetInformatique/Montacie/blob/master/Montacié%20Programmation%20Générique%20et%20Conception%20Objet/Annales/ExamPGCO1718A.pdf
#include <map>
#include <vector>
#include <string>
#include <iostream>
#include <stdio.h>
#include "PlageHoraire.h"
using namespace std;

PlageHoraire::PlageHoraire(){
	jour="";
	debut = 0;
	final=0;
	activites = "";
}

PlageHoraire::PlageHoraire(string s1,int i, int j, string s2){
	jour = s1;
	debut = i;
	final=j;
	activites = s2;
	horaires.push_back(i);
	horaires.push_back(j);
	taches.insert(pair<string,string>(s2,s1));
	total.insert(pair<map<string,string>,vector<int>>(taches,horaires));
}

void PlageHoraire::afficher(){
	cout<<jour<<" "<<debut<<" "<<final<<" "<<activites<<endl;
}




