#include <queue>
#include <iostream>
#include <string>
using namespace std;
//queue
//back() retourner le dernier
//front() retourner le premier
//empty() si la queue est vide
//pop()   supprimer le premier élément
//push()  ajouter à la fin
//size()  la taille
template <typename T>
void pprint(queue<T> q){
	while(q.empty()!=true){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}

int main(){
	// initier queue
	queue<int>q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	pprint(q);
	cout<<q.front()<<endl;
	cout<<q.back()<<endl;
	cout<<q.size()<<endl;
	return 0;
}



