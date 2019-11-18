#include <iostream>
#include "wektor.h"
using namespace std;

int main(){
	Wektor w1(3);
	w1.set(0,3.14);
	w1.set(1,2.7);
	w1.set(2,-1.5);
	
	Wektor w2(w1);
	w2.set(1,4);

	Wektor w3(1);
	w3 = w1;
	w3.set(0,8);

	w1.print(); 
	w2.print();
	w3.print();

	return 0;
}
