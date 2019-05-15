#include <list>
#include <iostream>
#include <algorithm>
using namespace std;

void pprintList(list<int>& l){
	list<int>::iterator iter;
	for(iter=l.begin();iter!=l.end();iter++){
		cout<<*iter<<" ";
	}
	cout<<endl;
}

int main(){
	list<int>l1 = {1,3,8,0,100,34};
	list<int>l2 = {98,87,34,25,2,5};
	cout<<"La liste l1 est de : "<<endl;
	pprintList(l1);
	cout<<"La liste l2 est de : "<<endl;
	pprintList(l2);
	list<int>l3(l1);
	l3.merge(l2,greater<int>());
	cout<<"La liste confusionnée de l1 et l2 est de : "<<endl;
	pprintList(l3);
	l3.sort();
	pprintList(l3);//ascending
	list<int>l4;
	l4.insert(l4.begin(),l3.rbegin(),l3.rend());
	pprintList(l4);//descending
	return 0;
}




