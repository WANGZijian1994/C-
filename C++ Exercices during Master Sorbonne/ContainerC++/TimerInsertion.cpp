#include <iostream>
#include <deque>
#include <list>
#include <vector>
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
	cout<<"Time for Insertion of an element for deque : "<<(clock() - tDeque) * 1.0 / CLOCKS_PER_SEC * 1000<<endl;
	clock_t tList=clock();
	l.insert(++l.begin(),3);
	cout<<"Time for Insertion of an element for list : "<<(clock() - tList) * 1.0 / CLOCKS_PER_SEC * 1000<<endl;
	//l.insert(l.begin()+2,4,2);
	clock_t tDeque1=clock();
	d.insert(d.begin()+3,4,2);
	cout<<"Time for Insertion of 4 elements for deque : "<<(clock() - tDeque1) * 1.0 / CLOCKS_PER_SEC * 1000<<endl;
	list<int>::iterator itl = ++l.begin();
	vector<int>v;
	for(int i=1;i<5;++i){
		v.push_back(2);
	}
	clock_t tList1=clock();
	l.insert(++itl,v.begin(),v.end());
	cout<<"Time for Insertion of 4 elements for list : "<<(clock() - tList1) * 1.0 / CLOCKS_PER_SEC * 1000<<endl;
	pprintDeque(d);
	pprintList(l);
}



