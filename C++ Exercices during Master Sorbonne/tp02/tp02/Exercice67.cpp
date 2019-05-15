#include <iostream>
#include <regex>
#include <fstream>
#include <string>
using namespace std;

void Methode12(int n,char c[]){
	int counter1(0),counter2(0),counter3(0);
	string str;
	smatch sm;
	regex re("[^0-9A-Za-z]");
	for(int j=0;j<n;j++){
		if(c[j]==' '){
			counter1++;
			counter3++;
		}
		str+=c[j];
	}
	cout<<" Pour la methode 1, il y a "<<++counter1<<" mots"<<endl;
    if(regex_search(str,sm,re)){
    	for(auto x=sm.begin();x!=sm.end();x++){
    		counter2++;
    	}
    }
    cout<<" Pour la methode 2, il y a "<<(++counter2)+(++counter3)<<" mots"<<endl;



}

int main(){
	ifstream fin("Adelaide.txt",ifstream::in);
	fin.seekg(0,ifstream::end);
	int nbChar = fin.tellg()/sizeof(char);
	cout<<" Il y a "<<nbChar<<" caracteres."<<endl;
	fin.seekg(0,ifstream::beg);
	char c[nbChar];
	string str;
	for(int i=0;i<nbChar;++i){
		fin.read((char*)&c,sizeof(c));
		str+=c[i];
	}
	Methode12(nbChar,c);
	fin.close();
	return 0;
}







