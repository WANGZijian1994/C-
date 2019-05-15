#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool ascending(int i, int j){
	return i<j;
}

bool descending(int i, int j){
	return i>j;
}

struct myclass{
	bool operator()(int i, int j){return i<j;}
}myobject;

template <typename T>
void pprint(vector<T> &t){
	for(auto x:t){
		cout<<x<<" ";
	}
	cout<<endl;
}

int main(){
	int Tab[] = {32,71,12,45,26,80,53,33};
	vector<int>myvector(Tab,Tab+8);
	sort(myvector.begin(),myvector.begin()+4);
	pprint(myvector);
	sort(myvector.begin()+4,myvector.end(),ascending);
	vector<int> tab = {1,3,2,5,7,6};
	sort(tab.begin(),tab.end(),ascending);
	pprint(tab);
	sort(tab.begin(),tab.end(),descending);
	pprint(tab);
}




