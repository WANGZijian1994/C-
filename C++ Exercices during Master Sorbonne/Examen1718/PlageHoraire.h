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
	string name;
	int debut;
	int final;
	vector<int>horaires;
	map<string,string>taches;
	PlageHoraire();
	PlageHoraire(string name,string jour,int debut,int final,string activites);
	void changerHoraire(int i,int j);
	void changerJour(string s);
};



#endif /* PLAGEHORAIRE_H_ */
