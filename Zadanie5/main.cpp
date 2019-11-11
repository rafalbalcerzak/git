#include <iostream>
#include "complex.h"
using namespace std;

int main(){
	Complex c1(2,3);
	Complex c2(4,7);
	Complex c3(0,0);
	Complex c4(4);
	Complex c5;

	cout<<"konstruktor z 2 argumentami:"<<endl;
	c1.show();

	cout<<"konstruktor z 1 argumentem:"<<endl;
	c4.show();

	cout<<"konstruktor bez argumentow:"<<endl;
	c5.show();

	cout<<"Dodawanie:"<<endl;
	c3 = c1+c2;
	c3.show();

	cout<<"Odejmowanie:"<<endl;
	c3 = c1-c2;
	c3.show();

	cout<<"Mnozenie:"<<endl;
	c3 = c1*c2;
	c3.show();

	cout<<"Modul z c1:"<<endl;
	cout<<c1.mod()<<endl;

	//cout<<"wynik:"<<c3<<endl; test
	return 0;
}
