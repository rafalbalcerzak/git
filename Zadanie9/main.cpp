
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
	w1[3] = 5;
	w1[2] = -4;
	w1[1] = 3;
	w1[0] = -2;
	w1.pokaz();
	cout<<"obliczony x = 2: "<<w1.oblicz(2)<<endl;
	cout<<"obliczony x = 3: "<<w1.oblicz(3)<<endl;
	cout<<"obliczony x = 4: "<<w1.oblicz(4)<<endl;

	Wielomian w2;
	w2[3] = 5;
	w2[2] = 4;
	w2[1] = 3;
	w2[0] = -2;

	if(w1 == w2){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}
	
	return 0;
}	
