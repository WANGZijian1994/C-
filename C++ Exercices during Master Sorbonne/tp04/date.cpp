/*
 * date.cpp
 *
 *  Created on: 2019Äê2ÔÂ17ÈÕ
 *      Author: wang zijian
 */

#include "date.h"
#include <iostream>
using namespace std;

//Constructeur
date::date():jour(0),mois(0),annee(0){}
date::date(int j,int m,int a){
	this->jour = j;
	this->mois = m;
	this->annee = a;
}

bool date::CompareTo(date d1){
	return d1.jour==jour&&d1.mois==mois&&d1.annee==annee;
}

void date::Incrementer(){
    //Combien de jours reste-il jusqu'¨¤ une date pr¨¦cise.
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    long incrementer = 0;

    if((((annee % 4) == 0) && ((annee % 400) != 0))){
    	month[1] = 29;
    }
    date d2(14,7,2019);//C'est la date pr¨¦cise
    while (this->CompareTo(d2)==false){
    jour++;incrementer++;
    if(jour > month[mois-1]){
    	jour = 1;mois++;
    	if(mois == 13){
    	    	mois = 1;annee++;jour=1;
    	    }
    }
    }
    cout<<"Il reste "<<incrementer<<" jours entre ce jour et le 14 juillet 2019."<<endl;
}


void date::Afficher_Date(){
	cout<<jour<<"--"<<mois<<"--"<<annee<<endl;
}

void date::Lire_Date(){
	int j,m,a;
    cin>>j;
    cin>>m;
    cin>>a;
    this->jour = j;
    this->mois = m;
    this->annee = a;
}

bool date::operator <(const date& d)const{
	if(d.annee<annee)return true;
	else if(d.annee>annee)return false;
	else{
		if(d.mois<mois){return true;}
		else if(d.mois>mois){return false;}
		else{
			if(d.jour<jour){return true;}
			else{return false;}
		}

	}
}








