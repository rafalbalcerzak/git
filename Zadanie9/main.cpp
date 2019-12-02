
#include "wielomian.h"
#include <iostream>
//bibloioteka potrzeban do cls -clear screen
#include <stdlib.h>
using namespace std;

int main(){
	//czyszczenie ekranu 
	system ("CLS");
	//porgram który opisuje wielomian,
	Wielomian w1;
	w1[3] = 2;
	w1[2] = 4;
	w1[1] = 3;
	w1[0] = 2;

	//w1.pokaz();

	Wielomian w2;
	w2[3] = 2;
	w2[2] = 5;
	w2[1] = -2;
	w2[0] = -3;

	Wielomian w3;
	w3 = w1 + w2;
	w3.pokaz();

	w3 = w1 - w2;
	w3.pokaz();

	w3 = w1 * w2;
	//cout<<w3.mySize()<<endl;
	w3.pokaz();


	return 0;
}
