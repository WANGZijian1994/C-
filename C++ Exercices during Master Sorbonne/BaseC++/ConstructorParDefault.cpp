#include <iostream>
using namespace std;

class Rectangle{
private:
	double hauteur;
	double largeur;
public:
	Rectangle() : hauteur(1.0), largeur(2.0){}//Constructor Par default
	Rectangle(double c) : hauteur(c),largeur(2.0*c){}//The Second constructor
	Rectangle(double h, double L) : hauteur(h),largeur(L){}//The third constructor
	//Rectangle(double h=0.0,double L=0.0):hauteur(h),largeur(L){}//
	double surface()const{return hauteur*largeur;}
};

int main(){
	Rectangle r1;
	cout<<r1.surface()<<endl;//2
	Rectangle r(2.0);
	cout<<r.surface()<<endl;//8
}
