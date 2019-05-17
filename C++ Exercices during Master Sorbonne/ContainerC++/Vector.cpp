#include <iostream>
#include <vector>
#include <string>
#include <algorithm>//sort(),reverse()
using namespace std;

template <typename T>
void pprint(vector<T> t){
	for(int i = 0;i<t.size();++i){
		cout<<" the "<<i+1<<" element of this vector "<<t[i]<<endl;
	}
}

template <typename T>
void pprint(vector<T>* tab){
	vector<T>TAB = *tab;
	for(size_t t=0;t<TAB.size();++t){
		cout<<" the "<<t+1<<" element of this vector "<<TAB[t]<<endl;
	}
}

bool ascendingPourString(string s1,string s2){
	return s1<s2;
}

int main(){
	vector<string>nom;
	nom={"Falcao","Robben","Makino","Weghost","Klassen"};
	reverse(nom.begin(),nom.end());
	pprint(nom);
	vector<string>::iterator iter = nom.begin();
	sort(nom.begin(),nom.end(),ascendingPourString);
	pprint(nom);
	vector<int>numero;
	numero = {1,2,3,4,5};
	pprint(numero);
	pprint(nom);
	pprint(&nom);
	numero.push_back(6);
	vector<int>::iterator it = numero.begin();
	numero.erase(numero.begin()+2,numero.begin()+4);
	pprint(numero);
	numero.insert(numero.begin()+2,3);
	numero.insert(numero.begin()+3,4);
	pprint(numero);
	return 0;
}



