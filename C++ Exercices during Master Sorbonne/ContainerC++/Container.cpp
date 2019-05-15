#include <vector>
#include <queue>
#include <list>
#include <string>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
void pprint(vector<T>t){
	for(auto& x:t){
		cout<<x<<" ";
	}
	cout<<endl;
}

int main(){
//vector
	vector<int>t1(10,7);
	vector<int>t2(t1.begin(),t1.end());
	pprint(t1);
	pprint(t2);
	t2.push_back(100);
	pprint(t2);
	t2.pop_back();
	pprint(t2);
	cout<<"La taille de t2 : "<<t2.size()<<endl;
	cout<<" t2 is empty ? "<<t2.empty()<<endl;
	vector<int>::iterator it = t2.begin();
	for(it = t2.begin();it!=t2.end();it++){
		cout<<*it<<" ";
	}cout<<endl;
	//insert
	cout<<"vector insert "<<endl;
	t2.insert(t2.begin(),8);//insert 8 en indice 1
	pprint(t2);
	t2.insert(t2.begin()+2,8);
	pprint(t2);
	t2.insert(t2.end(),3);//insert 3 to the end
	pprint(t2);
	cout<<"Length : "<<t2.size()<<endl;
	t2.insert(t2.begin()+4,4,1);
	pprint(t2);
	//sort
	cout<<"Length : "<<t2.size()<<endl;
	sort(t2.begin(),t2.end());//ascending
	pprint(t2);
	sort(t2.rbegin(),t2.rend());
	pprint(t2);
	//erase
	cout<<"Length : "<<t2.size()<<endl;
	t2.erase(t2.begin()+1);
	pprint(t2);
	cout<<"Length : "<<t2.size()<<endl;
	t2.erase(t2.begin()+2,t2.begin()+5);
	pprint(t2);
	cout<<"Length : "<<t2.size()<<endl;
//map
	map<int,string> ID_Name;
	ID_Name = {{12,"Ramzi"},{13,"Pierre"},{10,"Benfica"}};
	//Modifier et Insérer par []
	ID_Name[16] = "Zijian";
	ID_Name[13] = "Zeynab";
	//print un map:
	map<int,string>::iterator iter1 = ID_Name.begin();
	for(iter1 = ID_Name.begin();iter1!=ID_Name.end();++iter1){
		cout<<iter1->first<<" : "<<iter1->second<<" ";
	}
	//accéder aux valeurs d'une clé:
	cout<<" 13 : "<<ID_Name.at(13)<<endl;
	cout<<" 13 : "<<ID_Name[13].c_str()<<endl;
	//insert an element
	map<char,int>myMap;
	myMap.insert(pair<char,int>('a',100));
	myMap.insert(pair<char,int>('b',200));
	pair<map<char,int>::iterator,bool>ret = myMap.insert(pair<char,int>('b',500));
	if(ret.second==false){
		cout<<"Element b exists already. With a value of "<<ret.first->second<<'\n';
	}
	//Connaître la taille d'un Map
	//find a key_value pair
	map<char,int>::iterator iter;
	iter = myMap.find('b');
	if(iter!=myMap.end()){
		int i = iter->second;
		cout<<"The value of b is "<<i<<endl;
	}
	//Supprimer un élément


}




