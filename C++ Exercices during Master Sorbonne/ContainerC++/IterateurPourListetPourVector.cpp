#include <iostream>
#include <list>
#include <vector>
using namespace std;

//La différence entre l'itérateur du vector et celui de la list dans STL
template <typename T>
void pprintVector(vector<T>v){
	for(int i = 0;i<v.size();++i){
		cout<<v[i]<<" ";
	}cout<<endl;
}

template<typename T>
void pprintList(list<T>l){
	typename list<T>::iterator it;
	for(it=l.begin();it!=l.end();++it){
		cout<<*it<<" ";
	}cout<<endl;
}

int main(){
	vector<int>v;
	vector<int>::iterator itv;
	list<int>::iterator itl;
	list<int>l;
	for(int i = 0;i<5;++i){
		v.push_back(i);
		l.push_back(i);
	}
	pprintVector(v);
	pprintList(l);
	itv = v.begin()+2;
	//itl = l.begin()+2;
	itl=++(++l.begin());
	v.insert(v.begin()+1,17);
	cout<<*itv<<endl;
	l.insert(++l.begin(),17);
	pprintVector(v);
	pprintList(l);
	cout<<*itv<<endl;// itv suit la position
	cout<<*itl<<endl;// itl suit la valeur !!! Pas la position!!!
}



