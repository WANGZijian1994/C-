#include <list>
#include <iostream>
#include <algorithm>
using namespace std;

void pprint(list<int>& l){
	list<int>::iterator iter;
	for(iter=l.begin();iter!=l.end();iter++){
		cout<<*iter<<" ";
	}
	cout<<endl;
}

int main(){
	//initier
	list<int>l;
	list<int>l1(10);//initier une liste de 10 elements
	list<int>l2(10,1);
	pprint(l1);
	pprint(l2);
	//ajouter des elements
	l.push_back(2);
	l.push_back(6);
	l.push_front(1);
	l.push_front(3);
	pprint(l);
	//indexer la liste
	cout<<l.front()<<endl;
	//cout<<l[0]<<endl;
	cout<<l.back()<<endl;
	//merge
	l.merge(l2,greater<int>());
	pprint(l);
	l2.merge(l,less<int>());
	pprint(l);
	//assign
	l.assign(l2.begin(),l2.end());
	pprint(l);//1 1 1 1 1 1 1 1 1 1
}


