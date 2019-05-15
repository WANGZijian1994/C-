#include <deque>
#include <algorithm>
#include <iostream>
using namespace std;
//deque deux sommets
template <typename T>
void pprint(deque<T>& deq){
	for(int i=0;i<deq.size();++i){
		cout<<deq.at(i)<<" ";
	}
	cout<<endl;
}

bool descending(int i,int j){
	return i>j;
}

int main(){
	//Initiation:
	deque<int>d;
	deque<char>d1(4);
	deque<int>d2(3,6);
	//ajouter et insert
	d.push_back(2);
	d.insert(d.begin(),2);//ajouter un element dont la valeur est de 2 avant l'element qui a index pour d.begin()
	d.insert(d.begin()+1,6,4);//ajouter 6 elements dont la valeur est toujours 4 avant l'element qui a index pour d.begin()+1
	pprint(d);
	d1.push_back('c');//ajouter a la fin
	d1.push_back('d');
	d1.push_front('b');//ajouter au debut
	d1.push_front('a');
	pprint(d1);
	d1.insert(d1.begin()+2,4,'e');
	pprint(d1);
	cout<<"Il y a "<<d1.size()<<" d'éléments"<<endl;
	//supprimer des elements.
	d1.erase(d1.begin()+6,d1.end()-2);
	pprint(d1);
	cout<<"------------"<<endl;
	pprint(d);//2 4 4 4 4 4 4 2
	pprint(d2);//6 6 6
	d.swap(d2);
	pprint(d);//6 6 6
	pprint(d2);//2 4 4 4 4 4 4 2
	cout<<"------------"<<endl;
	sort(d2.begin(),d2.end());
	pprint(d2);
	sort(d2.begin(),d2.end(),descending);
	pprint(d2);//4 4 4 4 4 4 2 2
	d2.pop_back();//supprimer le dernier
	pprint(d2);//4 4 4 4 4 4 2
	d2.pop_front();//supprimer le premier
	pprint(d2);//4 4 4 4 4 2
}




