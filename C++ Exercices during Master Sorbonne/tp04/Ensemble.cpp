#include "Ensemble.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "Animal.h"
#include "Etudiant.h"
using namespace std;


template<typename T>Ensemble<T>::Ensemble(){tab={};}
template<typename T>Ensemble<T>::Ensemble(T t1, T t2, T t3, T t4, T t5, T t6, T t7, T t8, T t9, T t10){
	tab = {t1,t2,t3,t4,t5,t6,t7,t8,t9,t10};
}

template<typename T>Ensemble<T>::Ensemble(T t1, T t2, T t3, T t4, T t5){
	tab = {t1,t2,t3,t4,t5};
}

template<typename T>void Ensemble<T>::getTaille(){cout<<"Il y a "<<tab.size()<<" elements"<<endl;}

template<typename T>bool Ensemble<T>::isEmpty(){
	if(tab.size()==0){return true;}
	else {return false;}
}

template<typename T>void Ensemble<T>::ajouter(T t){tab.push_back(t);}

template<typename T>void Ensemble<T>::remove(T r){
	for(size_t t=0;t<tab.size();++t){
		if(r==tab[t]){tab.erase(tab.begin()+t);}
	}
}

template<typename T>bool Ensemble<T>::Intersected(Ensemble t1){
	int compter(0);
	for(auto& x:tab){
		for(auto& y:t1.tab){
			if(y==x)compter++;
		}
	}
	if(compter==0)return false;
	else {return true;}
}

template<typename T>bool Ensemble<T>::isInclutIn(Ensemble t){//Ensemble 1 is included in Ensemble 2???
	int test(0);
	if(Intersected(t)){
		for(auto x:t.tab){
			for(auto y:tab){
				if(y==x){test++;}
			}
		}
		if(test==tab.size()){return true;}
		else {return false;}

	}
	else {return false;}
}

template<typename T>bool Ensemble<T>::isEqual(Ensemble t){
	if(isInclutIn(t)){
		if(tab.size()==t.tab.size()){return true;}
		else {return false;}
	}
	else{return false;}
}


template<typename T>bool Ensemble<T>::appartenirA(T t){
	int test(0);
	for(size_t i=0;i<tab.size();++i){
		if(tab[i]==t)test++;
	}
	return test!=0?true:false;
}


template<typename T,typename F>
int MaximumTableau(T t,int taille,F foncteurCmp){
	int max = 0;
	return max;
}


int main(){
	Animal a1("Dog",4);
	Animal a2("Cat",4);
	Animal a3("Bear",2);
	Animal a4("Chicken",2);
	Animal a5("Buck",4);
	Animal a6("Grizzly",2);
	Animal a7("Human",2);
	Animal a8("Raptor",2);
	Animal a9("Snake",0);
	Animal a10("Fish",0);
	Animal a11("Chien",4);
	Ensemble<Animal>A(a1,a2,a3,a4,a5,a6,a7,a8,a9,a10);
	cout<<"A is Empty ? "<<A.isEmpty()<<endl;//False
	A.getTaille();//10
	A.ajouter(a11);
	A.getTaille();//11
	A.remove(a11);
	A.getTaille();//10
	Ensemble<int>Entier1(1,2,3,4,5,6,7,8,9,10);
	Ensemble<int>Entier2(7,8,9,10,11,12,13,14,15,16);
	Ensemble<string>Name1("Zijian","Xinxin","Zeynab","Shuai","Cheng");
	Ensemble<string>Name2("Raf","Zijian","Shuai","Choi","Mendos");
	Ensemble<string>Name3("Raf","Shuai","Zijian","Choi","Mendos");
	cout<<"Raf appartient à Name2 ? "<<Name2.appartenirA("Raf")<<endl;
	cout<<"Argentine appartient à Name3 ? "<<Name3.appartenirA("Argentine")<<endl;
	cout<<"Is there the intersection between Entier1 and Entier2 "<<Entier1.Intersected(Entier2)<<endl;//True
	cout<<"Is there the intersection between Name1 and Name2 "<<Name1.Intersected(Name2)<<endl;//True
	cout<<"Is Name3 included in Name2 "<<Name3.isInclutIn(Name2)<<endl;//True
	cout<<"Is Name3 equal to Name2 "<<Name3.isEqual(Name2)<<endl;//True

	return 0;
}


