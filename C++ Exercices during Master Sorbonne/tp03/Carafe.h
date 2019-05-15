#ifndef CARAFE_H_
#define CARAFE_H_
#endif /* CARAFE_H_ */

class Carafe{
private:
	int contenu;
	const int capacite = 150;

public:
	Carafe(int);
	void remplir();
	void vider();
	int getContenu()const;
	int getCapacite()const;
	void transvaser(Carafe &c);
	void operator+();
	void operator-();
	void operator>>(Carafe &c);
};



