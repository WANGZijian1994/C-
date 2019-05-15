#include <iostream>
#include <string>
#include <vector>
using namespace std;

int CombienDeE(string s){
	int compter(0);
	for(int i = 0;i<s.length();i++){
		if(s[i]=='e')compter++;
	}
	return compter;
}

int CombienDe(char c, string s){
	int compter(0);
	for(int i = 0;i<s.length();i++){
		if(s[i]==c)compter++;
	}
	return compter;
}

int ASCIICode(char c){
    int i = int(c);
    return i;
}

vector<vector<int>>ASCIITableau(string s){
	vector<vector<int>>T(256,vector<int>(2));
	for(size_t t=0;t<T.size();++t){
		int i = t;
		T[t][0] = i;
	}
	for(auto x:s){
		for(size_t t=0;t<T.size();++t){
			if(ASCIICode(x)==T[t][0]){
				T[t][1]=CombienDe(x,s);
			}
		}
	}

	return T;
}

void pprint(vector<vector<int>>T){
	for(auto x:T){
		cout<<"("<<x[0]<<"---"<<x[1]<<")"<<endl;
		}

}

int main(){
	cout<<"Il y a "<<CombienDeE("ebebeahabe bee ebah")<<" e dans la phrase."<<endl;
	char c;
	cin>>c;
	cout<<ASCIICode(c)<<endl;
	string s = "abcdefgdfcfg";
	pprint(ASCIITableau(s));

}




