#include <iostream>
#include <vector>
using namespace std;

int Febonacci(int i){
	if(i==0)return 0;
	else if(i==1)return 1;
	else {
		return Febonacci(i-1)+Febonacci(i-2);
	}
}

void pprintVector(vector<int>v){
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();++it){
		cout<<*it<<" ";
	}cout<<endl;
}

int main(){
	vector<int>v;
	for(int i = 0;i<15;++i){
		v.push_back(Febonacci(i));
	}
	pprintVector(v);
}

