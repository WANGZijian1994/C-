#include <map>
#include <string>
#include <iostream>
using namespace std;

static map<string,string>ID_Name_MasterLFTI;

class Etudiant_Master_LFTI{
protected:
	string prenom;
	string nom;
public:
	Etudiant_Master_LFTI():prenom(" "),nom(" "){}
	Etudiant_Master_LFTI(string s1,string s2){
		prenom = s1;
		nom = s2;
		ID_Name_MasterLFTI.insert(pair<string,string>(prenom,nom));
	}
	string getPrenom(){
		return prenom;
	}
	bool operator<(const Etudiant_Master_LFTI& e)const{
		string str1 = prenom;
		string str2 = e.prenom;
		if(str1<=str2)return true;
		else return false;
	}
};

static map<Etudiant_Master_LFTI,string> Salle_219;

class Salle_219_Ordinateurs : public Etudiant_Master_LFTI{
public:
	Salle_219_Ordinateurs(){};
	Salle_219_Ordinateurs(string s1,string s2,int i){
		Etudiant_Master_LFTI e(s1,s2);
		string s3 = "Machine "+ std::to_string(i);
		Salle_219.insert(pair<Etudiant_Master_LFTI,string>(e,s3));
	}
};

void pprint_Names(){
	map<string,string>::iterator it;
	for(it=ID_Name_MasterLFTI.begin();it!=ID_Name_MasterLFTI.end();++it){
		cout<<it->first<<" "<<it->second<<endl;
	}
}

void Position_Salle(){
	map<Etudiant_Master_LFTI,string>::iterator it;
	for(it=Salle_219.begin();it!=Salle_219.end();++it){
		Etudiant_Master_LFTI e = it->first;
		cout<<e.getPrenom()<<"---"<<it->second<<endl;
	}
}

int main(){
	Salle_219_Ordinateurs e1("Zijian","WANG",13),e2("Abdelak","Ramzi",3),e3("Rafael","Araujo",6),e4("Zeynab","Rasgouyan Seyedeh",1),e5("Chen","Sun",4),e6("Shuai","Gao",7),e7("Nikola","Lackovic",10),e8("Malika","Benali",9),e9("Fintan","Herlihy",11),e10("Awatef","Djanni",19),e11("Arienna","Groves",16);
	cout<<"Le nom de famille de Rafael : "<<ID_Name_MasterLFTI.at("Rafael")<<endl;
	cout<<"Il y a "<<ID_Name_MasterLFTI.size()<<" étudiants."<<endl;
	pprint_Names();
	Position_Salle();
	return 0;
}


