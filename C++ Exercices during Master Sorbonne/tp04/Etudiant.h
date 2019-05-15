#ifndef ETUDIANT_H_
#define ETUDIANT_H_

#endif /*ETUDIANT_H_*/

class Etudiant {
private:
	int m_NombreNote; // nombre de notes // nombre de notes par d�faut
	int* m_Tnote; // Tableau dynamique des notes
public:
	Etudiant(); // constructeur vide (m_NombreNoteDef notes)
	Etudiant(int n); // constructeur non vide
	//~Etudiant(); // destructeur
	int getNote();
	void putnote(int e, int n); // ajouter une note
	bool operator < (const Etudiant& e)const;
};

