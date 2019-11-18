#include <iostream>
using namespace std;

void zamien(int *arg1, int *arg2){
	int temp = *arg1;
	*arg1 = *arg2;
	*arg2 = temp; 
}

int main(){
	int a = 5;
	int b = 7;

	zamien(&a,&b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;

	return 0;
}



// int b1;
// double b2;

// int *p1;
// double *p2;

// p1 = &b1;
// p2 = &b2;

// *p1 = 11;
// *p2 = 1.5;

// int **pp= &p1; //wskażnik do wskażnika

