/*
 * MonPremierFichierTexte.cpp
 *
 *  Created on: 2019��2��19��
 *      Author: wang zijian
 */
#include <istream>//In cin
#include <ostream>//Out cout cerr
#include <fstream>
#include <string>
#include <iostream>
using namespace std;


int main(){
	////Exercice 1.1
	ofstream Naissance;
    Naissance.open("Naissance.txt");
    Naissance <<"Monsieur Zijian est n�� le 18 avril 1994.";
    Naissance.close();
    ////Exercice 1.2 verifier si la date de naissance existe dans le fichier.
    char *fn = "Naissance.txt";
    string str;
    ifstream Entree;
    Entree.open("Naissance.txt");
    if(Entree.fail()){cout<<"Une erreur pendant l'ouverture du fichier.";}
    else {
    	while(!Entree.eof()){
    		getline(Entree,str);
            int i = str.find("18 avril 1994");
            if(i!=-1){
            	cout<<"Ma date de naissance existe dans le fichier"<<endl;
            }
            else {cout<<"Ma date de naissance n'existe pas dans le fichier."<<endl;}
            int j = str.find("18 fevrier 1994");
            cout<<j<<endl;
            if(j==-1){
             	cout<<"Ma date de naissance n'existe pas dans cette ligne du fichier";
             }
    	}
    }
    Entree.close();
    return 0;
}


