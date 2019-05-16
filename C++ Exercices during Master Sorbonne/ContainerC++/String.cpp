#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string miroir(string s){
	string s1(s);
	sort(s1.rbegin(),s1.rend());
	return s1;
}

bool Compare(string s1,string s2){
	return s1.compare(s2);
}

int main(){
	string s,s1,s2;
	s = "astery";
	s1 = miroir(s);
	s2=miroir(s1);
	cout<<s1<<endl;
	cout<<Compare(s,s2)<<endl;//1
	cout<<Compare(s1,s2)<<endl;//0
	return 0;
}




