#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <vector>
#include <map>
using namespace std;

class Etudiant{
public:
	int note;
	string name;
	map<string,int>rapport;
	Etudiant();
	Etudiant(string name,int note);
	void afficher();
	bool operator > (const Etudiant &e)const;
};

Etudiant::Etudiant(string name,int note){
	this->name=name;
	this->note=note;
	rapport.insert(pair<string,int>(name,note));
}

void Etudiant::afficher(){
	map<string,int>::iterator it;
	for(it=rapport.begin();it!=rapport.end();++it){
		cout<<it->first<<" : "<<it->second<<endl;
	}
}

bool Etudiant::operator >(const Etudiant &e)const{
	return note>e.note;
}

struct compare{
bool operator() (Etudiant e1,Etudiant e2){
	return e1.note>e2.note;
}
};

int main(){
	Etudiant e1("Zijian",15);
	Etudiant e2("Rafael",12);
	Etudiant e3("Ramzi",13);
	vector<Etudiant> etudiants;
	etudiants.push_back(e1);
	etudiants.push_back(e2);
	etudiants.push_back(e3);
	//sort()
	sort(etudiants.begin(),etudiants.end(),compare());
	for(int i=0;i<etudiants.size();++i){
		Etudiant e = etudiants[i];
		e.afficher();
	}
	//swap()
	swap(e1,e2);
	cout<<e1.name<<endl;
	cout<<e2.name<<endl;
	return 0;
}




