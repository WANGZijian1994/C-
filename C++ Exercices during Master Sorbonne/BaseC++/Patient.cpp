#include <iostream>
#include <string>
#include <queue>
#include <functional>
using namespace std;

class Patient{
private:
	int age;
	char sex;
public:
	string name;
	Patient();
	Patient(string s, int a, char s1);
	bool operator >= (const Patient& p)const;
};

Patient::Patient(){}

Patient::Patient(string s, int a, char s1){
	name = s;
	age = a;
	sex = s1;
}

bool Patient::operator >=(const Patient& p)const{
	if(p.age>=age) return true;
	else {return false;}
}


int main(){
	priority_queue<Patient,vector<Patient>,greater_equal<Patient>>fpp;
	Patient* p1=new Patient("Line",25,'F');
	Patient* p2=new Patient("Lucie",10,'F');
	Patient* p3=new Patient("Simon",9,'H');
	Patient* p4=new Patient("Eric",25,'H');
	Patient* p5=new Patient("Jean",26,'H');
	fpp.push(*p1);
	fpp.push(*p2);
	fpp.push(*p3);
	fpp.push(*p4);
	fpp.push(*p5);
	cout<<fpp.size()<<endl;
	Patient p;
	while(fpp.empty()==false){
		p=fpp.top();
		fpp.pop();
		cout<<p.name<<endl;
	}
	return 0;
}



