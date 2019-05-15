#ifndef ANIMAL_H_
#define ANIMAL_H_

#endif /*ANIMAL_H_*/

/*
 * Animal.h
 *
 * Created on 25 octobre 2002, 17:30
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

/** Création et gestion d'animaux
 * @author montacie
 */
class Animal {
private:
	string espece;
    int nb_pattes;
public:
    /** création d'une nouvelle instance de la classe Animal
     * @param type nom de l'espèce
     * @param pattes nombre de pattes
     */
    Animal();
    Animal(string type, int pattes);
    
    /** présentation des caractéristiques de l'animal
     */
    void presente();

    /** cri de l'animal
     */
    void crie();
    
    void exhiber();

    string getEspece();

    bool operator == (const Animal & a);
    bool operator < (const Animal & a) const;
};
