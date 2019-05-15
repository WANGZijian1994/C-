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

/** Cr�ation et gestion d'animaux
 * @author montacie
 */
class Animal {
private:
	string espece;
    int nb_pattes;
public:
    /** cr�ation d'une nouvelle instance de la classe Animal
     * @param type nom de l'esp�ce
     * @param pattes nombre de pattes
     */
    Animal();
    Animal(string type, int pattes);
    
    /** pr�sentation des caract�ristiques de l'animal
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
