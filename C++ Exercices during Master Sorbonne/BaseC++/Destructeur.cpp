#include <iostream>
using namespace std;

int compter=0;
class Aventure {
public:
Aventure(){compter++;cout<<compter<<" instances created."<<endl;}
Aventure(Aventure const& autre){compter++;cout<<compter<<" instances created."<<endl;}//Constructeur de copie
~Aventure() {
cout << "fin d'une aventure" << endl;
compter--;cout<<compter<<" instances rest."<<endl;
}
};
int main()
{
Aventure a1;
{
Aventure a2;
Aventure a3(a2);
}
return 0;
}




