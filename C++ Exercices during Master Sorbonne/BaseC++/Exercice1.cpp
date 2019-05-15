#include <iostream>
using namespace std;

class Number {
private:
    int n;
public:
    Number()
      : n(0)
    { std::cout << n << " "; }
    Number( int nn )
      : n(nn)
    { std::cout << n << " "; }
    Number(Number const& otherNum)//Constructor of Copie n'a plus d'influence que copier une fois les valeurs d'attributs copiés.
      : n(otherNum.n+1)//passage par valeur
    { std::cout << n <<" "; }
    void display() { std::cout << n <<" "; }
    void increase() { n++; }};

int main()
{
    Number a, b(1), c(b);
    cout<<" a = ";//0
    a.display();
    cout<<" b = ";
    b.display();//1
    cout<< "c = ";
    c.display();//2
    cout<<"--------"<<endl;
    b.increase();
    cout<<" c = ";
    c.display();//2
    cout<<" b = ";
    b.display();//2
    cout<<"--------"<<endl;
    c.increase();
    cout<<" c = ";
    c.display();//3
    cout<<" b = ";
    b.display();//2
    cout<<"--------"<<endl;
    b.increase();
    cout<<" c = ";
    c.display();//3
    cout<<" b = ";
    b.display();//3
    return 0;
}




