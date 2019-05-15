/*
 * JeuMorpion.h
 *
 *  Created on: 2019?3?29?
 *      Author: WANGZijian
 */

#ifndef JEUMORPION_H_
#define JEUMORPION_H_

#include <array>
using namespace std;

typedef array<array<int,3>,3> Grille;
enum CouleurCase {VIDE,ROND,CROIX};

class Morpion {
private:
	Grille grille;
public:
	void initialiser();
	void pprint();
};





#endif /* JEUMORPION_H_ */
