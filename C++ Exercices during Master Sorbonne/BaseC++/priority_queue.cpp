#include <iostream>
#include <queue>
#include <string>
using namespace std;

class Etudiant{
private:
	int note;
	string name;
public:
	Etudiant();
	Etudiant(int note,string name);
	void afficher();
	bool operator >= (const Etudiant &e)const;
};

Etudiant::Etudiant():note(0),name(" "){}

Etudiant::Etudiant(int note, string name){
	this->name = name;
	this->note = note;
}

void Etudiant::afficher(){
	cout<<"Name : "<<name<<endl;
	cout<<"Note : "<<note<<endl;
}

bool Etudiant::operator >=(const Etudiant &e)const{
	if(e.note>=note)return true;
	else {return false;}
}
//q.size();
//q.empty();
//q.push(k);ajouter a la fin
//q.pop();//supprimer la tete
//q.top();//retourner a la tete.
template<typename T>
void pprint(priority_queue<T>& pq){
	while(pq.empty()==false){
		T t=pq.top();
		pq.pop();
		cout<<t<<" ";
	}
	cout<<endl;
}
template<typename T>
void pprint(priority_queue<T,vector<T>,greater_equal<T> >& pq){
	while(pq.empty()==false){
		T t=pq.top();
		pq.pop();
		cout<<t<<" ";
	}
	cout<<endl;
}

template<typename T>
void pprint(priority_queue<T,vector<T>,less_equal<T> >& pq){
	while(pq.empty()==false){
		T t=pq.top();
		pq.pop();
		cout<<t<<" ";
	}
	cout<<endl;
}

template<typename T>
vector<T> presenter(priority_queue<T,vector<T>,greater_equal<T> >& pq){
	vector<T> t;
	while(pq.empty()==false){
		T t1=pq.top();
		pq.pop();
		t.push_back(t1);
	}
	return t;
}

template<typename T>
vector<T> presenter(priority_queue<T,vector<T>,less_equal<T> >& pq){
	vector<T> t;
	while(pq.empty()==false){
		T t1=pq.top();
		pq.pop();
		t.push_back(t1);
	}
	return t;
}


int main(){
	priority_queue<int>i;
	priority_queue<double>d;
	i.push(3);i.push(12);i.push(14);i.push(5);
	d.push(5.4);d.push(2.7);d.push(2.4);d.push(8.9);
	pprint(i);
	pprint(d);
	priority_queue<int,vector<int>,greater_equal<int> > greater;
	greater.push(4);greater.push(7);greater.push(3);
	pprint(greater);
	priority_queue<int,vector<int>,less_equal<int> > less;
	less.push(6);less.push(2);less.push(8);
	pprint(less);
	priority_queue<Etudiant,vector<Etudiant>,greater_equal<Etudiant> >pq;
	pq.push(*new Etudiant(12,"Pierre"));
	pq.push(*new Etudiant(15,"Jean"));
	pq.push(*new Etudiant(10,"Michel"));
	pq.push(*new Etudiant(16,"Paul"));
	vector<Etudiant>etudiants = presenter(pq);
	for(auto x:etudiants){x.afficher();}
}




