#include <iostream>
#include <queue>
#include "Etudiant.h"
#include "Date.h"
using namespace std;

template<class T>class EnsembleOrdonnance{
public:
	EnsembleOrdonnance();
	priority_queue<T,vector<T>,less<T> > pq;
	void Presenter();
};

template<class T>EnsembleOrdonnance<T>::EnsembleOrdonnance(){};


template<class T>void EnsembleOrdonnance<T>::Presenter(){
	cout<<" Combien d'elements : "<<pq.size()<<endl;

}

int main(){
	EnsembleOrdonnance<date>ordre;
	ordre.pq.push(*new date(18,4,1994));
	ordre.pq.push(*new date(23,8,1992));
	ordre.pq.push(*new date(24,7,1993));
	ordre.pq.push(*new date(4,4,2019));
	ordre.pq.push(*new date(15,4,2019));
	ordre.Presenter();
	cout<<"Ainsi, le minimal element de cet ensemble est de ";
	date minimum = ordre.pq.top();
	minimum.Afficher_Date();
	cout<<endl;
	while(!ordre.pq.empty()){
		date d=ordre.pq.top();
		ordre.pq.pop();
		d.Afficher_Date();
		cout<<endl;
	}

	EnsembleOrdonnance<Etudiant>e1 = EnsembleOrdonnance<Etudiant>();

	e1.pq.push(*new Etudiant(13));
	e1.pq.push(*new Etudiant(14));
	e1.pq.push(*new Etudiant(11));
	e1.pq.push(*new Etudiant(12));
	e1.Presenter();
	Etudiant mini = e1.pq.top();
	cout<<"Ainsi, le minimal element de cet ensemble est de "<<mini.getNote()<<endl;
	while(!e1.pq.empty()){
		Etudiant s = e1.pq.top();
		e1.pq.pop();
		cout<<" The note of Student : "<<s.getNote()<<endl;
	}
	return 0;
}




