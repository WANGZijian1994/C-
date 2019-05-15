/*
 * Exercice20.cpp
 *
 * Created on: 2019Äê2ÔÂ22ÈÕ
 *      Author: wang zijian
 */
#include <iostream>
#include <ostream>
#include <fstream>
using namespace std;

int main(){
	//Exercice0
	short t[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	ofstream fout("tp2.bin", ofstream::out|ofstream::binary);
	if(fout.fail()) cerr<<"Il y a une erreur d'¨¦criture dans le fichier\n";
	else {
		fout.write((char*)&t,sizeof(t));
	}
	fout.close();

	//Exercice1:
	ifstream fin("tp2.bin",ifstream::in|ifstream::binary);
	short d[20];
	if(fin.fail()) cerr<<"Impossible de lire le fichier\n";
	else {
        fin.read((char*)&d,sizeof(d));
	}
	fin.seekg(0,ifstream::end);
	int nbShort = fin.tellg() / sizeof(short);
	cout<<"Il y a "<<nbShort<<" short entiers"<<endl;
    int i;
    cout<<"Vous voulez consulter quel short entre 20 shorts:"<<endl;
    cin>>i;
    if (!i>0&&i<=nbShort){cout<<"Il n'y a pas assez de short entiers. Diminuez le nombre. Vous voulez consulter quel short:"<<endl;}
    cout<<"Le "<<i<<" ieme short entier est de "<<d[i-1]<<endl;
	fin.close();

	//Exercice2:
	fstream flotInOut("tp2.bin",ios::in|ios::out|ios::binary);
	if(flotInOut.fail()){
		cerr<<"Impossible de lire le fichier.\n"<<endl;
		exit(1);
	}
	short s;
	flotInOut.seekg(0,fstream::end);
	int nbOfShort = flotInOut.tellg() / sizeof(short);
	cout<<"Il y a "<<nbOfShort<<" short entiers dans ce fichier ouvert."<<endl;
	cout<<"Modifier le 10ieme short en 21"<<endl;
	flotInOut.seekg((10-1)*sizeof(s),ios::beg);//seek commence par 0,il faut substraire 1 pour index.
	flotInOut.read((char*)&s,sizeof(s));
	s = 21;
	flotInOut.seekg((10-1)*sizeof(s),ios::beg);
	flotInOut.write((char*)&s,sizeof(s));
	flotInOut.flush();//tellg()=12
	flotInOut.seekg(0,ios::beg);
	for (int j = 1;j<=nbOfShort;j++){
		flotInOut.read((char*)&s,sizeof(s));
		cout<<s<<endl;
	}
	flotInOut.close();

	return 0;

}



