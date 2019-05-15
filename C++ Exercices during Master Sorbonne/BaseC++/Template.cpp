#include <iostream>
using namespace std;
//Pour Fonction template <typename T>
template<typename T>
int compare(const T& t1, const T& t2){
	if(t1<t2){
		return -1;
	}
	if(t1>t2){
		return 1;
	}
}

template<typename I>
void swap(const I& t1, const I& t2){
	I temp;
	temp = t1;
	t1 = t2;
	t2 = temp;
}

//Pour class
template <class T>class Stack{
private:
	T *m_pT;
	int m_maxSize;
	int m_size;
public:
	template <class T> Stack(){//Constructeur
		m_maxSize = 100;
		m_size = 0;
		m_pT = new T[m_maxSize];
	}

	template <class T> ~Stack(){
		delete [] m_pT;
	}

	template <class T> void push(T t){
		m_size++;
		m_pT[m_maxSize-1]=t;
	}

	template <class T> T pop(){
		T t = m_pT[m_size-1];
		m_size--;
		return t;
	}

	template <class T> bool isEmpty(){
		return m_size == 0;
	}
};

int main(){
	double x(1.2),y(5.6);
	int m(1),n(2);
	cout<<compare<double>(x,y)<<endl;
	cout<<compare<int>(m,n)<<endl;
	swap<double>(x,y);
	swap<int>(m,n);
	cout<<compare<double>(x,y)<<endl;
	cout<<compare<int>(m,n)<<endl;


}




