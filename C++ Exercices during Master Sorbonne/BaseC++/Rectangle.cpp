#include "Rectangle.h"
#include <iostream>
using namespace std;

double Rectangle::surface (double x,double y) const{
	longueur = x;
	largeur = y;
	cout<<"The surface of the rectangle : "<<endl;
	return longueur * largeur;
}

int main(){
	Rectangle r1;
	cout<<r1.surface(3.2, 6.7);
}




