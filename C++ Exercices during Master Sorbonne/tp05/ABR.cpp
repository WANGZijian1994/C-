#include <list>
#include <iostream>
#include <cstdlib>
#include <queue>
#include "ABR.h"
#include <algorithm>

using namespace std;

template<class T>ABR<T>::ABR(){
	tmp=NULL;
}

template<class T>void ABR<T>::Inserer(T e){
	Node* n = new Node(e);
	if(!tmp){
		tmp = n;
		Elements.push_back(tmp->racine);
	}
	else{
		Node* n1 = tmp;
		Node* n2 = tmp;
		while(n1){
			n2 = n1;
			(e<=n1->racine)?(n1=n1->gauche):(n1=n1->droite);
		}
		if(e<=n2->racine){
			n2->gauche=new Node(e);
			Node* n = n2->gauche;
			Elements.push_back(n->racine);
		}
		else{
			n2->droite=new Node(e);
			Node* n = n2->droite;
			Elements.push_back(n->racine);
		}
	}
}

template<class T>bool ABR<T>::Chercher(T e){
	int counter(0);
	for(size_t t = 0;t<Elements.size();++t){
		if(Elements[t]==e){counter++;}
	}
	return counter!=0;
}

template<class T>T ABR<T>::Minimum(){
	sort(Elements.begin(),Elements.end());
	return Elements[0];
}

template<class T>T ABR<T>::Maximum(){
	sort(Elements.begin(),Elements.end());
	return Elements[Elements.size()-1];
}

template<class T>void ABR<T>::ParcoursProfondeur(){
	Depth.push(tmp);
	while(Depth.empty()==false){
		Node* n = Depth.front();
		cout<<n->racine<<" ";
		Depth.pop();
		if(n->gauche){
			Depth.push(n->gauche);
		}
		if(n->droite){
			Depth.push(n->droite);
		}
	}
	cout<<endl;
}//de haut en bas

template<class T>void ABR<T>::ParcoursLargeur(){
	Breath.push(tmp);
	while(Breath.empty()==false){
		Node* n = Breath.top();
		cout<<n->racine<<" ";
		Breath.pop();
		if(n->gauche){
			Breath.push(n->gauche);
		}
		if(n->droite){
			Breath.push(n->droite);
		}
	}
	cout<<endl;
}//de gauche a droite

template<class T>void ABR<T>::Inserer_List(list<T>& L){
	typename list<T>::iterator it;
	for(it=L.begin();it!=L.end();it++){
		Inserer(*it);
	}
};
int main(){
	ABR<int> arbre;
	list<int>l;
	cout<<" The original list : "<<endl;
	for(int i=0;i<50;++i){
		int j = rand() / (double)RAND_MAX *(500-1)+1;
		l.push_back(j);
		cout<<j<<" ";
	}
	cout<<endl;
	cout<<"--------"<<endl;
	/*
	arbre.Inserer(5);
	arbre.Inserer(4);
	arbre.Inserer(8);
	arbre.Inserer(1);
	arbre.Inserer(7);
	arbre.Inserer(10);
	arbre.ParcoursProfondeur();
	*/
	arbre.Inserer_List(l);
	cout<<"Parcours Profond:"<<endl;
	arbre.ParcoursProfondeur();
	cout<<"Parcours large:"<<endl;
	arbre.ParcoursLargeur();
	int i = 1;
	if(arbre.Chercher(i)){
		cout<<i<<" is in this tree"<<endl;
	}
	else{cout<<i<<" isn't in this tree"<<endl;}
	cout<<"Max:"<<arbre.Maximum()<<endl;
	cout<<"Min:"<<arbre.Minimum()<<endl;
}
