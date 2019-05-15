#include <iostream>
using namespace std;

void squareByPtr(int* numPtr){
	*numPtr*=*numPtr;
	}

void incrementer(int &x){
	x++;
}

int main(){
	int i = 2;
	cout<<"the address to store is: "<<&i<<endl;
	cout<<"dereference the adress : "<<*(&i)<<endl;
	int* j =new int(5);
	cout<<"l'adresse de la valeur j : "<<j<<endl;;
	cout<<"La valeur de j : "<<*j<<endl;
	//declaring pointer
	int* ptr = &i;
	cout<<*ptr<<endl;//2
	squareByPtr(ptr);
	cout<<" i = "<<i<<endl;
	cout<<*ptr<<endl;//4
	ptr = j;
	cout<<*ptr<<endl;//5
	cout<<"-------------"<<endl;
	cout<<" i = "<<i<<endl;
	incrementer(i);
	cout<<" i = "<<i<<endl;
	int* ptr1 = &i;
	cout<<*ptr1<<endl;//5
	cout<<"-------------"<<endl;
	int x(0);
	int &y=x;
	//make x a reference to , or alias of,y changes with x:
	//une valeur etiquetee par deux noms: x et y.
	incrementer(x);
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"---------"<<endl;
	long arr[] = {6,0,9,6};
	long *ptr2 = arr;
	cout<<arr<<endl;//L'adresse
	cout<<arr[0]<<endl;//6
	cout<<*ptr2<<endl;//L'adresse
	cout << "One long integer need: " << sizeof(long) << " bytes "<<endl;//4
	cout<< "The position of the array : "<<ptr2<<endl;
	ptr2++;
	cout<<"After increment 1, the position of ptr : "<<ptr2<<endl;
	cout<<"The value ptr points to: "<< *ptr2<<endl;//0

	return 0;
}





