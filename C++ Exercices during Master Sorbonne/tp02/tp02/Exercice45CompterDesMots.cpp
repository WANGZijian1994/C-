//Exercice 4
//1. premiere methode:24 deuxieme methode:26
//2. int i = combien d'espaces vides, combien de tokens?<--i+1
//3. Il y a 6 mots.
//4. tetu(accent en e) va devenir deux tokens

//Exercice 5
#include <iostream>
#include <ostream>
#include <istream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ofstream fout;
	fout.open("Adelaide.txt");
	fout<<"Madame de Hautcastel arrangea commod¨¦ment sa jolie t¨ºte sur le dossier de son fauteuil; chacun fit silence et le baron parla en ces termes:";
	fout.close();
	ifstream fin;
	fin.open("Adelaide.txt");
	if(fin.fail()){cerr<<"Il y a une erreur pour ouvrir le fichier.";}
	else {
		int compter(0);
		char c;
		fin.seekg(0,ifstream::end);
		int nbChar = fin.tellg()/sizeof(char);
		fin.seekg(0,ifstream::beg);
		for(int i=0;i<nbChar;i++)
		{
			fin.read((char*)&c,sizeof(c));
			if (c==' '){
				compter++;
			}
		}
		cout<<"Il y a "<<compter+1<<" mots."<<endl;
	}



}




