#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
void Sorted(vector<T>& v){
	sort(v.begin(),v.end());
}

template <typename T>
int Binary_Search(vector<T> v,T target){
	int gauche = 0;
	int droite = v.size()-1;
	int deviner = (droite - gauche)/2;
	if(target==v[deviner]){
		return deviner;
	}
	while(target!=v[deviner]){
		if(target>v[deviner]){
			gauche = deviner;
		}
		else {
			droite = deviner;
		}
		deviner = gauche + (droite - gauche)/2;
		if(target==v[deviner])break;
	}
	return deviner;
}

template <typename T>
void pprintVector(vector<T>v){
	typename vector<T>::iterator it;
	for(it=v.begin();it!=v.end();++it){
		cout<<*it<<" ";
	}
	cout<<endl;
}

int main(){
	vector<int>v;
	for(int i = 0;i<10;++i){
		v.push_back(i);
	}
	v.insert(v.begin()+5,10);
	pprintVector(v);
	Sorted(v);
	pprintVector(v);
	cout<<Binary_Search(v,8)<<endl;
}




