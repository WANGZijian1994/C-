#ifndef ABR_H_
#define ABR_H_

#include <list>
#include <queue>
#include <stack>
using namespace std;

template <class T>
class ABR{
	struct Node{
		struct Node* gauche;
		struct Node* droite;
		T racine;
		Node(T x=NULL):racine(x),gauche(nullptr),droite(nullptr){}
	}node;
public:
	Node* tmp;
	vector<T>Elements;
	queue<Node*>Depth;
	stack<Node*>Breath;
	ABR();
	void Inserer(T e);
	bool Chercher(T e);
	T Minimum();
	T Maximum();
	void ParcoursProfondeur();
	void ParcoursLargeur();
	void Inserer_List(list<T>& L);
};



#endif /* ABR_H_ */
