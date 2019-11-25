
#include "wielomian.h"
int main(){
	//porgram który opisuje wielomian,
	Wielomian w1;
	w1[2] = 3;
	w1[1] = 2;
	w1[0] = 1;

	w1.pokaz();

	Wielomian w2;
	w2[3] = -4;
	w2[1] = 3;

	Wielomian w3;
	w3 = w1 + w2;

	w3.pokaz();
	return 0;
}
