/*
 * date.h
 *
 *  Created on: 2019Äê2ÔÂ17ÈÕ
 *      Author: wang zijian
 */

#ifndef TP01_DATE_H_
#define TP01_DATE_H_

class date {
public:
	int annee;
	int mois;
	int jour;

public:
	date();
	date(int,int,int);
	bool CompareTo(date);
	void Incrementer();
	void Afficher_Date();
	void Lire_Date();
};



#endif /* TP01_DATE_H_ */
