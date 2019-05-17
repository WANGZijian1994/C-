#include <iostream>
#include <map>
#include <stdio.h>
using namespace std;

template<typename T>
void pprintMap(map<T,int>m){
	typename map<T,int>::iterator it;
	for(it=m.begin();it!=m.end();it++){
		cout<<it->first<<" : "<<it->second<<endl;
	}
}

int main(){
	map<string,int>m;
	m.insert(pair<string,int>("Zijian",14));
	m.insert(pair<string,int>("Raf",13));
	pprintMap(m);
	return 0;
}




