#include <iostream>
#include <cmath>
using namespace std;
class Punkt
{
 double x;
 double y;
 double z;

 public:
	Punkt();
	Punkt(double val);
	Punkt(double valx, double valy,double valz);

	double odleglosc();
	void zmien(int pos, double val);
	void pokaz();

	friend Punkt operator*(Punkt p1, Punkt p2);
};

Punkt::Punkt(){
    x = 1;
    y = 1;
    z = 1;
}

Punkt::Punkt(double val){
    x = val;
    y = val;
    z = val;
}

Punkt::Punkt(double valx, double valy,double valz){
    x = valx;
    y = valy;
    z = valz;
}

double Punkt::odleglosc(){	
	// double res;
	// res = sqrt(x*x + y*y + z*z);
	// return res;
	return sqrt(x*x + y*y + z*z); 
}

void Punkt::zmien(int pos, double val){
	if(pos == 0){
		x = val;
	}
	else if (pos == 1){
		y == val;
	}
	else if(pos == 2){
		z == val;
	}
	else{
		cout<<"Nie ma wspolrzednej o tym numerze"<<endl;
	}
	
}

void Punkt::pokaz(){
	cout<<"x: "<<x<<endl;
	cout<<"y: "<<y<<endl;
	cout<<"z: "<<z<<endl;
}

Punkt operator*(Punkt p1, Punkt p2){
	Punkt res;
	res.x = p1.x;
	res.y = p2.y;
	res.z = p1.z * p2.z;
	return res;
}

//uwaga, funkcji main nie należy zmieniac, można jedynie wykomentowywac linie kodu
int main()
{
 Punkt p1; //konstruktor bezparametrowy, ustawiający wszystkie wspolrzedne punktu na 1
 Punkt p2(3.5); //konstruktor z jednym parametrem, ustawiający wszystkie wspolrzedne punktu napodana wartosc
 Punkt p3(1,2,3); //konstruktor z trzema parametrami, ustawiający odpowiednio zmienne x,y,z,

 cout<<"odleglosc p2 od (0,0,0)="<<p2.odleglosc()<<endl;
//funkcja odleglosc() zwracajaca odleglosc punktu od początku układu wspolrzednych (0,0,0)

p3.zmien(1,4.5);
//funkcja zmien, zmieniajaca jedna wspolrzedna punktu. Pierwszy parametr jest numerem zmiennej dozmiany (0 to x, 1 to y, 2 to z), a drugi parametr jest nowa wartoscia wspolrzednej

p3.pokaz();
//funkcja pokaz, wypisująca na ekranie wszystkie wspolrzedne punktu
p1=p2*p3;
//operator*, zwracający nowy punkt. Wspolrzedna x nowego punktu powinna byc rowna wspolrzednej x
//punktu podanego jako pierwszy argument, wspolrzedna y nowego punktu powinna być rowna wspolrzednej
// y punktu podanego jako drugi argument, natomiast wspolrzedna z nowego punktu powinna być iloczynem
//wspolrzednych z punktów podanych jako argumenty

p1.pokaz();
 return 0;
} 