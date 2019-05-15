#include <iostream>
#include <list>
#include <algorithm>
#include <string>
using namespace std;

template <typename T>
void pprint(list<T> l){
	while(l.size()!=0){
		cout<<l.front()<<" ";
		l.pop_front();
	}
	cout<<endl;
}

int main(){
	list<int>l1={1,2,2,23,32,45,12,21,77,65,65,74,100,65,65,77};
	list<string>name = {"Rafael","Zijian","Ramzi","Ramzi","Benfica","Ajax","Ajax"};
	cout<<"Une liste de nombres entiers : "<<endl;
	cout<<"La taille : "<<l1.size()<<endl;
	pprint(l1);
	cout<<"Une liste de noms : "<<endl;
	cout<<"La taille : "<<name.size()<<endl;
	pprint(name);
	cout<<"------------------------------"<<endl;
	cout<<"Après un nettoyage, cette liste de nombres entiers : "<<endl;
	l1.sort();
	l1.unique();
	cout<<"La taille : "<<l1.size()<<endl;
	pprint(l1);
	cout<<"Après un nettoyage, cette liste de noms : "<<endl;
	name.sort();
	name.unique();
	cout<<"La taille : "<<name.size()<<endl;
	pprint(name);
}




