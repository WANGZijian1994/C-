#include <iostream>
using namespace std;

class Personnage{
protected:
	int energie = 0;
private:
	int k=2;
public:
	void pprint(){cout<<"Information"<<endl;}
};


class Guerrier : public Personnage{
public:
	void frapper(Personnage& pauvre){
		Guerrier g1;
		cout<<g1.energie<<endl;
		cout<<energie<<endl;//On peut visiter des valeurs en protected.Comme this->energie
		//cout<<pauvre.energie<<endl;
		//cout<<k<<endl; On ne peut jamais visiter a prive.
		//cout<<pauvre.k<<endl;

	}
	void pprint(){
		Personnage::pprint();
		cout<<" : ";
		cout<<"Warriors"<<endl;}
};

class Rect {
private:
    double width, height;
public:
    double getWidth() const {return width;}
    double getHeight() const {return height;}
};

class ColoredRect : public Rect {
protected:
    int color;
    void init();
public:
    double getSurface() const {return getWidth()*getHeight();}
    int getColor() const {return color;}
};
class A {
protected: int a;
private:   int prive;
};

class B : public A{
public:
	void f(B autreB,A autreA,int x){
		a=x;
		//prive = x;
		//a+=autreB.prive;
		a+=autreB.a;
		//a+=autreA.a;
	}
};

class Square {
private:
    double size;
public:
    double surface() { return size*size; }
    double getEdge() { return size; }
};

class Cube : public Square {
public:
    double surface() { return getEdge()*getEdge()*getEdge(); }
};

int main(){
	Guerrier g;
	//cout<<g.energie<<endl;
	Personnage p;
	//cout<<p.energie<<endl;
	g.frapper(p);
	p.pprint();//Information
	g.pprint();//Warriors
}
