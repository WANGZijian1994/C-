#include <iostream>
#include <vector>
using namespace std;
//STL:conteneur Iterateur Algorithme
//List n'est pas acces direct. enchaînée, element par element un element donne fonction rapide, fonction en acces sequentiel.
//deque est rapide. bloc par bloc

//erase() est moins rapide que remove()
//remove_if(Predicate pred) une variable fonctionnelle
//si on doit faire du tri on choisit List
//si on sait deja la taille, on utilise Array
//Iterateur pas de negatif jusqu'a dernier element d'un conteneur
//
void pprint(vector<int>T){
	for(vector<int>::iterator it =T.begin();it!=T.end();++it){
		cout<<*it<<" ";
	}
	cout<<endl;
}
/*
void add1(vector<int>T){
	for(vector<int>::iterator it = T.begin();it!=T.end();++it){
	 *it++;
	}
	cout<<endl;
}
*/

void changerValeurTo17(vector<int>& T){
	for(vector<int>::iterator it = T.begin();it!=T.end();it++){
		*it = 17;
	}
}

int main(){
	vector<int>T1;
	for(int i=1;i<=7;++i){
		T1.push_back(i);
	}
	pprint(T1);
	changerValeurTo17(T1);
	pprint(T1);
	vector<int> T2(7,6);
	pprint(T2);
	vector<int>::iterator it = T2.begin();
	it+=100;
	cout<<*it<<endl;//deborder
	cout<<"--------------------------------"<<endl;
	cout<<"Si la taille du tableau a change, l'iterateur defini ne sera plus valide. "<<endl;
	vector<int> T3(5,1);
	vector<int>::iterator it2 = T3.begin();
	*it2 = 2;
	pprint(T3);//2 1 1 1 1
	cout<<"Iterator : "<<*it2<<endl;
	T3.push_back(7);
	cout<<"Iterator : "<<*it2<<endl;
}




