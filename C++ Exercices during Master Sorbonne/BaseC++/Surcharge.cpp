#include <iostream>
using namespace std;

class Person {
private:
	int age;
public:
	Person(int a){
		this->age = a;
	}
	inline bool operator ==(Person &ps)const;
};

inline bool Person::operator ==(Person &ps1)const{
	if(this->age==ps1.age){return true;}
	else{return false;}
}

int main(){
	Person p1(24),p2(25);
	if(p1==p2)cout<<"The same age";
	else{cout<<"Not the same age.";}
	return 0;
}




