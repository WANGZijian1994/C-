#include <iostream>
using namespace std;

class Complexe{
private:
	double x;
	double y;
public:
	Complexe():x(0.0),y(0.0){};
	Complexe(double abscisse,double ordonnee){
		x = abscisse;
		y = ordonnee;
	}
	double getX(){return x;}
	double getY(){return y;}
	void afficher(){
		cout<<x<<" + "<<y<<"i"<<endl;
	}
	void operator++(){//interne
		x++;
		y++;
	}
	void operator-(Complexe z){
		x-=z.getX();
		y-=z.getY();
	}
};

Complexe operator+(Complexe z1, Complexe z2){//externe
	Complexe z3(z1.getX()+z2.getX(),z1.getY()+z2.getY());
	return z3;
}

int main(){
	Complexe z1(1,2),z2(2,3);
	z1.afficher();
	++z1;
	z1.afficher();
	z1-z2;
	z1.afficher();
	Complexe z3;
	z3 = z1+z2;
	z3.afficher();

}


