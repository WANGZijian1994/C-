#include <iostream>
#include <ostream>
#include <fstream>
using namespace std;

int main(){
	ifstream fin("tp2.bin",ifstream::in|ifstream::binary);
	ofstream fout("tp2Copy.bin",ofstream::out|ofstream::binary);
	if(fin.fail()||fout.fail()){
		cerr<<"On ne peut pas ouvrir le fichier ou ajouter de truc dans le fichier.\n"<<endl;
	}
	else {
		char d;
		int nbChar;
		fin.seekg(0,ifstream::end);
		nbChar = fin.tellg() / sizeof(char);
		cout<<" Il y a "<<nbChar<<" caracteres dans ce fichier."<<endl;
		fin.seekg(0,ifstream::beg);//Il faut que le pointer retourne au debut de ce fichier,au lieu de rester a la fin.
		//Affichier le contenu:
		for(int i = 1;i<=nbChar;i++){
			fin.read((char*)&d,sizeof(d));
			cout<<d;
			fout.write((char*)&d,sizeof(d));
		}
		fin.close();
	    fout.close();
		//Verifier si c'est bien fait:
		return 0;
	}

}



