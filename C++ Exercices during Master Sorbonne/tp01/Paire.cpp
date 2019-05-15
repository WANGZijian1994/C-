/*
 * Paire.cpp
 *
 *  Created on: 2019Äê2ÔÂ11ÈÕ
 *      Author: wang zijian
 */


#include "Parite.h"
#include "Paire.h"
#include <iostream>
using namespace std;

int main(int argc,char* argv[]){
	short m;
	cout<<"Saisissez un nombre : "<<endl;
	cin>>m;
    bool rep = Parite(m);
    if (rep)
    	cout<<"True"<<endl;
    else
    	cout<<"False"<<endl;

    return 0;
}


