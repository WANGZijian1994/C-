#include <string>
#include <iostream>
using namespace std;

string Miroir(string s){
	string str(s.rbegin(),s.rend());
	return str;
}

int main(){
	cout<<Miroir("Asperge")<<endl;
	return 0;
}


