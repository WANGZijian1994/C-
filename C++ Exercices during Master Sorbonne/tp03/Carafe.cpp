#include "Carafe.h"
#include <iostream>
using namespace std;

Carafe::Carafe(int c1){
     contenu = c1;
}

void Carafe::remplir(){
	contenu = capacite; // @suppress("Ambiguous problem")
}

void Carafe::vider(){
	contenu = 0;
}

int Carafe::getContenu()const{return contenu;}

int Carafe::getCapacite()const{
	return this->capacite; // @suppress("Ambiguous problem")
}

void Carafe::transvaser(Carafe &c){
	if((contenu + c.contenu)<=c.capacite) // @suppress("Ambiguous problem")
	{
		c.contenu+=contenu;
		contenu = 0;
	}
	else {
		contenu-=(c.capacite - c.contenu); // @suppress("Ambiguous problem")
		c.contenu = c.capacite; // @suppress("Ambiguous problem")
	}
}

void Carafe::operator +(){
	remplir();
}

void Carafe::operator -(){
	vider();
}

void Carafe::operator>>(Carafe &c){
	if((contenu + c.contenu)<=c.capacite){ // @suppress("Ambiguous problem")
		c.contenu+=contenu;
		vider();
	}
	else {
		contenu-=(c.capacite - c.contenu); // @suppress("Ambiguous problem")
		c.remplir();
	}
}
