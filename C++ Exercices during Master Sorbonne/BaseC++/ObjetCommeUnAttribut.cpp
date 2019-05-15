#include <iostream>
using namespace std;

class Rectangle {
public:
	Rectangle(double h, double l){
		hauteur = h;
		longueur = l;
	};

	double surface()const{
		return hauteur * longueur;
	}

private:
	double hauteur;
	double longueur;
};

class RectangleColore {
	// Liste d'initialisation :objet (attribut1,...attribut n)
	RectangleColore(double h, double L):rectangle(h,L){};
	//If the attribut of a constroctor is itself an objet of a new type defined.

private:
	Rectangle rectangle;

};


int main(){
	//Rectangle r = new Rectangle(1.1,2.2);
	Rectangle r(1.1,2.2);
	cout<<r.surface()<<endl;
	//Rectangle r1;
	//r1(2.2,3.4);
	return 0;
}

