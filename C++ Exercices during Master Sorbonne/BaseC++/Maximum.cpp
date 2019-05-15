#include <iostream>
using namespace std;

double Maximum (double x, double y){
	cout<<"The bigger number of the group: "<<endl;
	return x > y ? x : y;
}

double Minimum (double x, double y){
	cout<<"The smaller number of the group: "<<endl;
	return x < y ? x: y;
}

int main(){
	cout << Maximum(22.6,34.2);
	cout << Minimum(22.6,34.2);
}
