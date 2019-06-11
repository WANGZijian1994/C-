#include <iostream>
#include "time.h"
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <algorithm>
using namespace std;

template <typename T>
void pprintVector1(vector<T>v){
	for(size_t t=0;t<v.size();++t){
		cout<<v[t]<<" ";
	}
	cout<<endl;
}

template <typename T>
void pprintVector(vector<T>v){
	typename vector<T>::iterator it;
	for(it=v.begin();it!=v.end();++it){
		cout<<*it<<" ";
	}
	cout<<endl;
}

template <typename T>
void pprintList(list<T>l){
	typename list<T>::iterator it;
	for(it=l.begin();it!=l.end();++it){
		cout<<*it<<" ";
	}
	cout<<endl;
}

template <typename T>
void pprintQueue(queue<T>q){
	//typename queue<T>::iterator it; queue pas d'itérateur
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}

template <typename T>
void pprintDeque(deque<T> d){
	typename deque<T>::iterator it;
	for(it=d.begin();it!=d.end();++it){
		cout<<*it<<" ";
	}
	cout<<endl;
}

template<typename T>
void pprintStack(stack<T>s){
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}

int main(){
	vector<int>v;
	list<int>l;
	deque<int>d;
	queue<int>q;
	stack<int>s;
	cout<<"Efficacité de la construction :"<<endl;
	clock_t t = clock();
	for(int i = 1;i<6;++i){
		v.push_back(i);
	}
	cout<<clock()-t<<" --construction pour vector C++"<<endl;
	pprintVector(v);
	t = clock();
	for(int i = 1;i<6;++i){
		l.push_back(i);
	}
	cout<<clock()-t<<" --construction pour list C++"<<endl;
	pprintList(l);
	t = clock();
	for(int i = 1;i<6;++i){
		d.push_back(i);
	}
	cout<<clock()-t<<" --construction pour deque C++"<<endl;
	pprintDeque(d);
	t = clock();
	for(int i = 1;i<6;++i){
		s.push(i);
	}
	cout<<clock()-t<<" --construction pour stack C++"<<endl;
	pprintStack(s);
	t = clock();
	for(int i = 1;i<6;++i){
		q.push(i);
	}
	cout<<clock()-t<<" --construction pour queue C++"<<endl;
	pprintQueue(q);
	cout<<endl;
	cout<<"Efficacité pour l'insération de trois 2 au milieu (indice 4): "<<endl;
	t = clock();
	v.insert(v.begin()+3,3,2);
	cout<<clock()-t<<" --Insération au milieu pour vector C++"<<endl;
	pprintVector(v);
	t = clock();
	d.insert(d.begin()+3,3,2);
	cout<<clock()-t<<" --Insération au milieu pour deque C++"<<endl;
	pprintDeque(d);
	list<int>::iterator it = l.begin();
	t = clock();
	(it++)++;
	l.insert(++it,3,2);
	cout<<clock()-t<<" --Insération au milieu pour list C++"<<endl;
	pprintList(l);
}
