#include <iostream>
using namespace std;
int compter(0);
class Customer {
private:
    int id;
    double* money;
    double k=0.0;
public:
    Customer():id(0),money(&k){compter++;cout<<" compter = "<<compter<<endl;};
    Customer(int id1, double* money1)
      : id(id1), money(money1)
    {compter++; cout<<" compter = "<<compter<<endl;}
    Customer(Customer const& _other):id(_other.id-1),money(_other.money){compter++;cout<<" compter = "<<compter;};
    ~Customer(){
      std::cout << "Id: " << id << " destroyed" << std::endl;
      *money = 0;
      compter--;
      cout<<" compter = "<<compter<<endl;
    }
    double getMoney(){ return *money; }
    void addMoney(double amount) { *money += amount; }
    void display() {
      std::cout << "Id: " << id << ", amount = " << *money << std::endl;
    }
};

int main()
{
    double money = 200.0;
    Customer c1;
    {
        Customer c2(2, &money);
        c1 = c2;
        c1.display();//200
        c2.addMoney(100.0);
        c2.display();//300
        c1.display();//300 //money = 300
    }
    //money = 0 because money is pointed so referenced.
    cout<<" c1 semmet : "<<c1.getMoney()<<endl;
    if( c1.getMoney() >= 200.0 )
       { std::cout << "Has 200" << std::endl; }
    else
       { std::cout << "No 200" << std::endl; }
    c1.display();
    return 0;
}



