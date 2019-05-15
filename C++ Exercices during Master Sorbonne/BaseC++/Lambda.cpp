#include <iostream>
using namespace std;
//[capture](parameters) mutable->return-type{statement;};

int main(){
	int a = 1;
	int b = 2;
	auto func = [=,&b](int c)mutable->int{
		b+=a+c;
		return b;
	};
	cout<<func(2)<<endl;
	double d = 10.0;
	double d1 = 20.0;
	typedef enum {add = 0,sub,multi,div}type;
	auto fonction = [=](type i)mutable->double{
		switch(i){
		case add:
			return d+d1;;
		case sub:
			return d1-d;
		case multi:
			return d*d1;
		case div:
			return d1/d;
		}
	};
	cout<<fonction(sub)<<endl;
	cout<<"----------------------"<<endl;
	int j = 10;
	auto by_val = [=](int j)->int{return j+1;};
	auto by_ref = [&](int j)->int{return j+1;};
	cout<<"j = "<<j<<endl;//10
	cout<<"by_val_lambda: "<<by_val(j)<<endl;//11
	cout<<"by_ref_lambda: "<<by_ref(j)<<endl;//11
	j++;
	cout<<"j = "<<j<<endl;//11
	cout<<"by_val_lambda: "<<by_val(j)<<endl;//12
	cout<<"by_ref_lambda: "<<by_ref(j)<<endl;//12
	cout<<"--------------"<<endl;
	j = 10;
	auto by_val_lambda = [=]{ return j + 1; };
	auto by_ref_lambda = [&]{ return j + 1; };
	cout<<"by_val_lambda: "<<by_val_lambda()<<endl;//11
	cout<<"by_ref_lambda: "<<by_ref_lambda()<<endl;//11
	++j;
	cout<<"by_val_lambda: "<<by_val_lambda()<<endl;//11
	cout<<"by_ref_lambda: "<<by_ref_lambda()<<endl;//12
	return 0;
}




