#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <ostream>
#include <istream>
#include <fstream>
#include <string>
using namespace std;

template<typename T>
void pprint(vector<T> v){
	typename vector<T>::iterator it;
	for(it=v.begin();it!=v.end();++it){
		cout<<*it<<" ";
	}
	cout<<endl;
}

template<typename T,typename F>
void pprintMap(map<T,F>m){
	typename map<T,F>::iterator it;
	for(it=m.begin();it!=m.end();++it){
		cout<<it->first<<" : "<<it->second<<endl;
	}
}

template<typename T>
map<T,int> TF(vector<T> v){
	map<T,int>tf;
	int counter(1);
	for(int i=0;i<v.size();++i){
		if(tf.count(v[i])==0){
			tf[v[i]]=counter;
		}
		else{
			tf[v[i]]++;
		}
	}
	return tf;
}

void lePlusFrequent(map<string,int>m){
	vector<map<string,int>::iterator>plus;
	map<string,int>::iterator it;
	for(it=m.begin();it!=m.end();++it){
		plus.push_back(it);
	}
	struct Compare{
		bool operator()(map<string,int>::iterator it1,map<string,int>::iterator it2){
			int i = it1->second;
			int j = it2->second;
			return i>j;
		}
	};
	sort(plus.begin(),plus.end(),Compare());
	map<string,int>::iterator it1;
	it1 = plus[0];
	cout<<it1->first<<" : "<<it1->second<<endl;
}

int main(){
	ofstream fout;
	fout.open("Uno.txt");
	fout<<"Madame de Hautcastel arrangea commodément sa jolie tête sur le dossier de son fauteuil; chacun fit silence et le baron parla en ces termes.";
	fout.close();
	ifstream fin;
	fin.open("Uno.txt");
	if(fin.fail()){
		cerr<<"Il y a une erreur pour l'ouverture de ce ficher."<<endl;
	}
	else{
		int compter(0);
		char c;
		string mot;
		vector<string>donnees;
		fin.seekg(0,ifstream::end);
		int nbchar = fin.tellg()/sizeof(char);
		fin.seekg(0,ifstream::beg);
		for(int i=0;i<nbchar;++i){
			fin.read((char*)&c,sizeof(c));
			if(c==' '){
				compter++;
				donnees.push_back(mot);
				mot = "";
			}else {
				mot += c;
			}
		}
		donnees.push_back(mot);
		cout<<"Il y a "<<++compter<<" mots"<<endl;
		pprint(donnees);
		pprintMap(TF(donnees));
		map<string,int>m;
		m=TF(donnees);
		cout<<"Le mot le plus fréquent : "<<endl;
		lePlusFrequent(m);
	}
}



