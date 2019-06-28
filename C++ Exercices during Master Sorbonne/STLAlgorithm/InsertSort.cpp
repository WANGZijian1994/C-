#include <iostream>
#include <vector>
#include <algorithm>
#include "time.h"
using namespace std;

template <typename T>
void pprintVector(vector<T> v){
	typename vector<T>::iterator it;
	for(it=v.begin();it!=v.end();++it){
		cout<<*it<<" ";
	}
	cout<<endl;
}

//Insertion Sort
template<typename T>
vector<T> Insert_Sort(vector<T>& v){
	for(int i = 1;i<v.size();++i){
		for(int j = 0;j<i;++j){
			if(v[j]>=v[i]){
				swap(v[j],v[i]);
			}
		}
	}
	return v;
}

//Shell Sort
template<typename T>
vector<T> Shell_Sort(vector<T>& v){
		for(int gap = v.size()/2;gap>1;gap=gap/2){
			for(int i = 0;i<gap;i++){
				int j = i;
				while((j+gap)<=v.size()-1){
					if(v[j+gap]<v[j]){
						swap(v[j],v[j+gap]);
					}
					j = j+gap;
				}
			}
		}
		v = Insert_Sort(v);
		return v;
}

int main(){
	vector<int>v;
	v = {5,7,8,3,1,2,4,6};
	clock_t timer1 = clock();
	vector<int>v1 = Insert_Sort(v);
	clock_t timer2 = clock();
	cout<<"Il coûte "<<timer2 - timer1<<" pour Insertion Sort"<<endl;
	pprintVector(v1);
	v = {5,7,8,3,1,2,4,6};
	timer1 = clock();
	v1 = Shell_Sort(v);
	timer2 = clock();
	cout<<"Il coûte "<<timer2 - timer1<<" pour Shell Sort"<<endl;
	pprintVector(v1);
	v = {45,80,48,40,22,78,79,91,57};
	clock_t timer3 = clock();
	vector<int>v2 = Insert_Sort(v);
	clock_t timer4 = clock();
	cout<<"Il coûte "<<timer4 - timer3<<" pour Insertion Sort"<<endl;
	pprintVector(v2);
	v = {45,80,48,40,22,78,79,91,57};
	timer3 = clock();
	v2 = Shell_Sort(v);
	timer4 = clock();
	cout<<"Il coûte "<<timer4 - timer3<<" pour Shell Sort"<<endl;
	pprintVector(v2);
}


