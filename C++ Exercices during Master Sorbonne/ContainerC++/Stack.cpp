#include <stack>
#include <vector>
#include <iostream>
using namespace std;
//stack
//push() ajouter au debut
//pop() supprimer le premier
//top() visiter le premier
//
template <typename T>
void pprint(stack<T> s){
	while(s.size()!=0){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}

template <typename T>
void inverse(stack<T>& t){
	vector<T> t1;
	while (t.empty()==false){
		t1.push_back(t.top());
		t.pop();
	}
	for(int i=0;i<t1.size();++i){
		t.push(t1[i]);
	}
}

int main(){
	stack<int> s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	pprint(s1);
	inverse(s1);
	pprint(s1);
	stack<char>s2;
	s2.push('C');
	s2.push('B');
	s2.push('A');
	pprint(s2);
	inverse(s2);
	pprint(s2);
}



