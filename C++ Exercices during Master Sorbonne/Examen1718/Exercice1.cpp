//https://github.com/LangueetInformatique/Montacie/blob/master/Montacié%20Programmation%20Générique%20et%20Conception%20Objet/Annales/ExamPGCO1718A.pdf
#include <map>
#include <vector>
#include <string>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include "PlageHoraire.h"
using namespace std;

static map<map<string,string>,vector<int>>total;

PlageHoraire::PlageHoraire(){
	jour="";
	debut = 0;
	final=0;
	activites = "";
}

PlageHoraire::PlageHoraire(string name,string s1,int i, int j, string s2){
	jour = s1;
	debut = i;
	final=j;
	activites = s2;
	horaires.push_back(i);
	horaires.push_back(j);
	this->name = name;
	string s = name + "  " +activites;
	taches.insert(pair<string,string>(s,jour));
	total.insert(pair<map<string,string>,vector<int>>(taches,horaires));
}

void PlageHoraire::changerHoraire(int i,int j){
	debut = i;
	final = j;
	horaires[0]=i;
	horaires[1]=j;
	total[taches] = horaires;
}

void PlageHoraire::changerJour(string s){
	map<map<string,string>,vector<int>>::iterator iter;
	iter = total.find(taches);
	total.erase(iter);
	jour = s;
	taches[name + "  " +activites]=jour;
	total.insert(pair<map<string,string>,vector<int>>(taches,horaires));
}

void afficher(){
	map<map<string,string>,vector<int>>::iterator iter;
	for(iter=total.begin();iter!=total.end();++iter){
		map<string,string>m;
		m = iter->first;
		map<string,string>::iterator it=m.begin();
		cout<<it->first<<"  "<<it->second<<"  ";
		vector<int>v = iter->second;
		cout<<v[0]<<"----"<<v[1]<<endl;
	}
}

void siRencontrer(PlageHoraire p1,PlageHoraire p2){
	vector<int>v1,v2;
	if(p1.jour==p2.jour){
		v1 = total[p1.taches];
		v2 = total[p2.taches];
		if((v1[1]<=v2[0])||v2[1]<=v1[0]){
			cout<<"Ils ne se rencontreront pas. "<<endl;
		}
		else{
			vector<int>v;
			v.push_back(p1.debut);
			v.push_back(p1.final);
			v.push_back(p2.debut);
			v.push_back(p2.final);
			sort(v.begin(),v.end());
			cout<<"Ils se rencontreront de "<<v[1]<<" heures à "<<v[2]<<" heures à "<<p1.jour<<endl;
		}
	}
	else{
		cout<<"Ils ne se rencontreront pas. "<<endl;
	}
}

int main(){
	PlageHoraire p1("Jugo","lundi",9,13,"Tennis");
	PlageHoraire p2("Zijian","lundi",14,17,"Vélo");
	PlageHoraire p3("Nikola","mardi",9,12,"Course à pied");
	PlageHoraire p4("Rafael","mardi",13,17,"Aviron");
	PlageHoraire p5("Malika","lundi",11,13,"Calcio");
	afficher();
	cout<<"Juso va venir à 10 heures mais plus à 9 heures. "<<endl;
	p1.changerHoraire(10,13);
	afficher();
	cout<<"Nikola va faire des course à pied à mercredi."<<endl;
	p3.changerJour("mercredi");
	afficher();
	cout<<"Jugo et Zijian vont se rencontrer pendant leurs activités ? "<<endl;
	siRencontrer(p1,p2);
	cout<<"Malika et Jugo vont se rencontrer pendant leurs activités ? "<<endl;
	siRencontrer(p1,p5);
	return 0;
}






