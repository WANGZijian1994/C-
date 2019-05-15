/*
 * Animal.cpp
 *
 * Created on 25 octobre 2002, 17:30
 */

#include "Animal.h"
#include <vector>


/** cr�ation d'une nouvelle instance de la classe Animal
 * @param type nom de l'esp�ce
 * @param pattes nombre de pattes
 */
Animal::Animal():espece(NULL),nb_pattes(0){};
Animal::Animal(string type, int pattes) {
	espece=type; 
    nb_pattes = pattes;  
}
    
/** pr�sentation des caract�ristiques de l'animal
 */
void Animal::presente() {
	vector<string>a;
	a.push_back(espece);
    cout << "je suis un repr�sentant de l'esp�ce des " << espece << " et j'ai "
		<< nb_pattes << " pattes" << endl;
}
    
/** cri de l'animal
  */
void Animal::crie() {
    cout << "j'existe, donc je crie ..." << endl;
}

void Animal::exhiber(){
	vector<string>a;
	a.push_back(espece);
}
 /** redefinition de l'operateur == */

 bool Animal::operator == (const Animal & a) {
 	if (nb_pattes != a.nb_pattes) return false;
 	if (espece != a.espece) return false;
 	return true;
}

string Animal::getEspece(){return espece;}


/** redefinition de l'operateur < */
 bool Animal::operator < (const Animal & a) const {
 	if (nb_pattes < a.nb_pattes) return true;
 	if (nb_pattes > a.nb_pattes) return false;
 	if (espece < a.espece) return true;
 	return false;
}

    
