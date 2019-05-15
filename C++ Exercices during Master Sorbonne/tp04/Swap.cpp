#include "Swap.h"
#include <iostream>
#include <vector>
using namespace std;


int main(){
	float x, y;
	cout<<"Saisissez deux floats : "<<endl;
	cin>>x;
	cin>>y;
	cout<<"x = "<<x<<" y = "<<y<<endl;
	SwapE e1;
	e1.swap<float>(x,y);
	cout<<"x = "<<x<<" y = "<<y<<endl;
	vector<int>tab = {1,2,3,4,5};
	tab.erase(tab.begin()+3);
	return 0;
}




