#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1 = "Green Apple";
	string s2 = "Red Apple";
	string s3 = "Apple";
	if(s3.compare("Apple")==0){cout<<s3<<" is the MAC."<<endl;}
	if(s1.compare(s2)==0){cout<<s1<<"="<<s2<<endl;}
	if(s1.compare(s1.find("A"),5,"Apple")==0){cout<<s1<<" is a kind of apple."<<endl;}
}




