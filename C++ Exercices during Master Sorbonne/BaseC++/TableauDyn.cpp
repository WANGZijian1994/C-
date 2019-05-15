#include <iostream>
#include <cassert>
#include "Chat.h"
#include "Etudiant.h"
using namespace std;

template <typename T>class TableauDyn{
protected:
	unsigned int capacite;
	unsigned int pasExtension;
	T* tab;
public:
	//Patron de Methodes d'une classe
	TableauDyn(unsigned int c, unsigned int p);
	~TableauDyn();
	void agrandir();
	T lire(unsigned int i)const;
	void ecrire(unsigned int i,T it);
	int getCapacite();
};

template<typename T>TableauDyn<T>::TableauDyn(unsigned int c,unsigned int p){
	assert((c>=0)&&(p>0));
	capacite(c);
	pasExtension=p;
	tab = new T(capacite);//Initiation de pointer.
}

template<typename T>TableauDyn<T>::	~TableauDyn(){delete [] tab;tab=NULL;}

template<typename T>void TableauDyn<T>::agrandir(){
	T* newT = new T[capacite+pasExtension];
	for(unsigned i =0;i<capacite;++i){
		newT[i]=tab[i];
	}
	delete [] tab;
	tab = newT;
	capacite+=pasExtension;
};

template<typename T>T TableauDyn<T>::lire(unsigned int i)const{
	assert(i<capacite);
	return tab[i];
}

template<typename T>void TableauDyn<T>::ecrire(unsigned int i,T it){
	assert(i>=0);
	while(i>=capacite){
		agrandir();
	}
	tab[i]=it;
}

template<typename T>int TableauDyn<T>::	getCapacite(){
	return capacite;
}

class TableauDynChat : public TableauDyn<Chat>{//heritage
public:
	TableauDynChat(unsigned int c, unsigned int p){
		capacite = c;
		pasExtension = p;
	}
	void presente(){
		for(int i=0;i<capacite;++i){
			tab[i].presente();
		}
	}
};

int main(){
	return 0;
}




