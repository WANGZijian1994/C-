#include <map>
#include <vector>
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

#ifndef PLAGEHORAIRE_H_
#define PLAGEHORAIRE_H_

class PlageHoraire{
public:
	string jour;
	string activites;
	int debut;
	int final;
	vector<int>horaires;
	map<string,string>taches;
	map<map<string,string>,vector<int>>total;
	PlageHoraire();
	PlageHoraire(string jour,int debut,int final,string activites);
	void afficher();
};



#endif /* PLAGEHORAIRE_H_ */
