#include <iostream>
#include <cassert>
#include <cstdio>

void print_number(int* M){
	assert(M!=NULL);
	printf("%d\n",*M);//format
	printf("========\n");
}

int main(){
	int a=8;
	int* b = NULL;
	int* c = NULL;
	b=&a;
	print_number(b);
	c=b;
	int d = *c;

	return 0;
}




