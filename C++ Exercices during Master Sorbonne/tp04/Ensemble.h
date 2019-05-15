/*
 * Ensemble.h
 *
 *  Created on: 2019?4?4?
 *      Author: WANGZijian
 */

#ifndef ENSEMBLE_H_
#define ENSEMBLE_H_

#include <vector>
#include <iostream>
using namespace std;
template<typename T>class Ensemble{
protected:
	vector<T>tab;
public:
	Ensemble();
	Ensemble(T t1, T t2, T t3, T t4, T t5, T t6, T t7, T t8, T t9, T t10);
	Ensemble(T t1, T t2, T t3, T t4, T t5);
	void getTaille();
	bool isEmpty();
	void ajouter(T);
	void remove(T);
	bool Intersected(Ensemble);
	bool isInclutIn(Ensemble);
	bool isEqual(Ensemble);
	bool appartenirA(T);
};



#endif /* ENSEMBLE_H_ */
