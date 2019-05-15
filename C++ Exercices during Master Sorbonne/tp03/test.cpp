#include "Carafe.h"
#include <iostream>
using namespace std;

int main(){
	Carafe c(70),c1(50);
	cout<<c.getContenu()<<endl;
	c.transvaser(c1);
	cout<<c.getContenu()<<endl;

//Remplir la carafe dont le contenu est plus grand et vider celle dont le contenu est plus petit.
	Carafe ci(110),cI(120);
	if(ci.getContenu()<=cI.getContenu()){
		-ci;
		+cI;
	}
	else{
		+ci;
		-cI;
	}
	cout<<"Le contenu restant pour ci : "<<ci.getContenu()<<endl;
	cout<<"Le contenu restant pour cI : "<<cI.getContenu()<<endl;

//Transvaser une carafe de l'autre:
	Carafe c3(130),c4(140);
	c>>c1;
	ci>>cI;
	c3>>c4;
	cout<<"Après le transvasement, il y a "<<c.getContenu()<<" dans c."<<endl;
	cout<<"Après le transvasement, il y a "<<c1.getContenu()<<" dans c1."<<endl;
	cout<<"Après le transvasement, il y a "<<c3.getContenu()<<" dans c3."<<endl;
	cout<<"Après le transvasement, il y a "<<c4.getContenu()<<" dans c4."<<endl;
	return 0;
}




