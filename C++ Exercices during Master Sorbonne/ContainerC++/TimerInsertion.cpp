#include <deque>
#include <list>
#include <time.h>
#include <iostream>
using namespace std;

#include <iostream>
#include <deque>
#include <list>
#include <time.h>
using namespace std;

void pprintDeque(deque<int>d){
	for(int i = 0;i<d.size();++i){
		cout<<d.at(i)<<" "<<endl;
	}cout<<endl;
}

void pprintList(list<int>l){
	list<int>::iterator it;
	for(it=l.begin();it!=l.end();++it){
		cout<<*it<<" ";
	}cout<<endl;
}

int main(){
	deque<int>d;list<int>l;
	d.push_back(1);
	d.push_back(2);
	d.push_back(4);
	l.push_back(1);
	l.push_back(2);
	l.push_back(4);
	//Insertion pour ces deux conteneurs :
	clock_t tDeque=clock();
	d.insert(++d.begin(),3);
	cout<<"Insertion for deque : "<<(clock() - tDeque) * 1.0 / CLOCKS_PER_SEC * 1000<<endl;
	clock_t tList=clock();
	l.insert(++l.begin(),3);
	cout<<"Insertion for list : "<<(clock() - tDeque) * 1.0 / CLOCKS_PER_SEC * 1000<<endl;
	pprintDeque(d);
	pprintList(l);
}



