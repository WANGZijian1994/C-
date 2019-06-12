#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void pprintVector(vector<T>v){
	for(int i=0;i<v.size();++i){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

template <typename T>
void Bubble_Sort(vector<T>&v){
	for(int i=0;i<v.size();++i){
		bool is_sorted = true;//To be more time-friendly
		for(int j=0;j<v.size()-i-1;++j){
			if(v[j]>v[j+1]){
			swap(v[j],v[j+1]);
			is_sorted = false;
			}
		}
		if(is_sorted)break;
	}
}

int main(){
	vector<int>v;
	v={3,6,4,2,11,10,5};
	cout<<"Avant l'opération : "<<endl;
	pprintVector(v);
	Bubble_Sort(v);
	cout<<"Après l'opération : "<<endl;
	pprintVector(v);
}



