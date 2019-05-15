/*
 * testDate.cpp
 *
 *  Created on: 2019Äê2ÔÂ17ÈÕ
 *      Author: wang zijian
 */


#include "date.h"
#include <iostream>
using namespace std;

int main(){
	date d3(18,4,2019);
	d3.Afficher_Date();
	d3.Incrementer();
	date d1;//aujourd'hui
    cout<<d3.CompareTo(d1)<<endl;//d3 et d1 sont les m¨ºmes???
    d1.Incrementer();


}

