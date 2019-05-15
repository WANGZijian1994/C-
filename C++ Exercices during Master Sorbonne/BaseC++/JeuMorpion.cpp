#include "JeuMorpion.h"
#include <iostream>
using namespace std;

void Morpion::initialiser(){
	for(auto& ligne : grille){
		for(auto& kase : ligne){
			kase = VIDE;
		}
	}
}

void Morpion::pprint(){
	for(auto& ligne : grille){
		for(auto& x : ligne){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}


int main(){
	Morpion m;
	m.initialiser();
	m.pprint();

}
