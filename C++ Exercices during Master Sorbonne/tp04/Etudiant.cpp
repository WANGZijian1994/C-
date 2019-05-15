#include "Etudiant.h"
// constructeur vide (m_NombreNoteDef notes)
// ":"它是用来在一个class之外定义该class的成员
Etudiant::Etudiant() {
	m_NombreNote = 0;
	m_Tnote = new int [m_NombreNote];
}
// constructeur non vide 
Etudiant::Etudiant(int n) {
	m_NombreNote = n;
	m_Tnote = new int[m_NombreNote];
}
// destructeur
/*
Etudiant::~Etudiant() {
	delete m_Tnote;
}
*/

// ajouter une note
void Etudiant::putnote(int e, int n) {
	if (e < m_NombreNote)
		m_Tnote[e] = n;
}

// lire une note avec protection

int Etudiant::getNote(){return m_NombreNote;}

bool Etudiant::operator < (const Etudiant& e)const{
	if(e.m_NombreNote<m_NombreNote){
		return true;
	}
	else {return false;}
}
