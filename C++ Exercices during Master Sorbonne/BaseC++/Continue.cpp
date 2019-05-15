#include <iostream>
#include <vector>
using namespace std;

int main(){
	int test1(0);
	vector<int>tab = {1,2,3,3,4};
	for(int i=0;i<tab.size();++i){
		for(int j=0;j<5;++j){
			if(j==tab[i]){
				test1++;
				cout<<"("<<tab[i]<<" "<<j<<")"<<endl;
			}

		}
	}
	cout<<test1<<endl;
	return 0;
}




