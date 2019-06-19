#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void pprintVector(vector<T> v){
	typename vector<T>::iterator it;
	for(it=v.begin();it!=v.end();++it){
		cout<<*it<<" ";
	}
	cout<<endl;
}

template <typename T>
size_t partition(vector<T>& v,size_t low,size_t high){
	T tmp = v[low];
	while(low<high){
		while((v[high]>=tmp)&&(high!=low)){
			high--;
		}
		v[low]=v[high];
		low++;
		while((v[low]<=tmp)&&(high!=low)){
			low++;
		}
		v[high]=v[low];
		high--;
		if(low>=high){
			v[low]=tmp;
			break;
		}
	}
	return low;
}

template<typename T>
void Quick_Sort(vector<T>& v,size_t low,size_t high){
	if(low<high){
		size_t tmp = partition(v,low,high);//Si on fait ça dans le boucle if, ça économise le temps.
		Quick_Sort(v,low,tmp-1);
		Quick_Sort(v,tmp+1,high);
	}
}


int main(){
	vector<int>v;
	v.push_back(23);
	v.push_back(46);
	v.push_back(0);
	v.push_back(8);
	v.push_back(11);
	v.push_back(18);
	pprintVector(v);
	Quick_Sort(v,0,v.size()-1);
	pprintVector(v);
	cout<<"---------"<<endl;
	vector<int>v1;
	v1.push_back(15);
	v1.push_back(10);
	v1.push_back(25);
	v1.push_back(14);
	v1.push_back(16);
	pprintVector(v1);
	Quick_Sort(v1,0,v.size()-1);
	pprintVector(v1);
}


