#include <iostream>
#include <set>
#include <string>
#include <stack>
using namespace std;

template <typename T>
void pprintSet(set<T> s){
	typename set<T>::iterator it;
	for(it=s.begin();it!=s.end();++it){
		cout<<*it<<" ";
	}
	cout<<endl;
}

template <typename T>
void pprintSetReverse(set<T> s){
	stack<T> s1;
	typename set<T>::iterator it;
	for(it=s.begin();it!=s.end();++it){
		s1.push(*it);
	}
	while(s1.empty()==false){
		cout<<s1.top()<<" ";
		s1.pop();
	}cout<<endl;
}

int main(){
	set<string>s;
	s.insert("Zijian");s.insert("Xinxin");s.insert("Curry");s.insert("PSV");s.insert("Ajax");
	pprintSet(s);
	pprintSetReverse(s);
	return 0;
}




