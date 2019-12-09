#include <iostream>
#include <cmath>
using namespace std;
class Odcinek{
	double xpocz,ypocz; //Wspolrzedne poczatku odcinka
	double xkoniec,ykoniec; //Wspolrzedne konca odcinka
	public:
	
	Odcinek();

	Odcinek(double x, double y){
		xpocz = 0;
		ypocz = 0;
		xkoniec = x;
		ykoniec = y;
	}

	Odcinek(double xp, double yp, double xk, double yk){
		xpocz = xp;
		ypocz = yp;
		xkoniec = xk;
		ykoniec = yk;
	}

	double dlugosc(){
		double res = sqrt((xpocz-xkoniec)*(xpocz-xkoniec)+(ypocz-ykoniec)*(ypocz-ykoniec)); 
		return res;
	}

	void pokaz(){
		cout<< "xpocz:";
		cout<< xpocz<<endl;
		cout<< "ypocz:";
		cout<< ypocz<<endl;
		cout<< "xkoniec:";
		cout<< xkoniec<<endl;
		cout<< "ykoniec:";
		cout<< ykoniec<<endl<<endl;
	}

	void ustaw(int ws, double value){
		if (ws == 0){
			xpocz = value;
		}
		else if(ws == 1){
			ypocz = value;
		}
		else if (ws == 2){
			xkoniec = value;
		}
		else if(ws == 3){
			ykoniec = value;
		}
		else
		{
			cout<<"cos nie tak"<<endl;
		}
		
		
	}

	friend Odcinek operator+(Odcinek o1, Odcinek o2){
		Odcinek res;
		res.xpocz = o1.xpocz;
		res.ypocz = o1.ypocz;
		res.xkoniec = o2.xkoniec;
		res.ykoniec = o2.ykoniec;
		return res;
	}

	friend ostream& operator<<(ostream& os, const Odcinek& od);
};

Odcinek::Odcinek(){
	xpocz = 0;
	ypocz = 0;
	xkoniec = 0;
	ykoniec = 0;
}

ostream& operator<<(ostream& os, const Odcinek& od){
	os<<"Poczatek("<<od.xpocz<<","<< od.ypocz<<") koniec("<< od.xkoniec<<","<< od.ykoniec<<")";
 	//os << od.xpocz<<" - "<< od.ypocz<<" - "<< od.xkoniec<<" - "<< od.ykoniec;
    return os;
}
//uzupelnij…
//uwaga, funkcji main nie należy zmieniac, można jedynie wykomentowywac linie kodu


int main()
{
Odcinek odc1; //konstruktor bezparametrowy, ustawiający wspolrzedne początku na (0,0)a końca na (1,1)
Odcinek odc2 (3,4); //konstruktor z dwoma parametrami, ustawiający wszystkie wspolrzedne konca na podane wartości, a wspolrzedne początku na (0,0)
Odcinek odc3 (1,1,3,4.5); //konstruktor z czterema parametrami, ustawiający wszystkie wspolrzednezgodnie z podanymi wartościami.

cout<<"dlugosc odc2=" << odc2.dlugosc() <<endl;
//funkcja dlugosc(), zwracajaca dlugosc odcinka

odc3.ustaw(3,7.2);
//funkcja ustaw, ustawiajaca wspolrzedna na wartość podana jako drugi parametr. Pierwszy parametr
//jest numerem wspolrzednej do ustawienia (0 to wspolrzedna x początku, 1 to wspolrzedna y początku,
// 2 to wspolrzedna x końca, a 3 to wspolrzedna y końca)

odc3.pokaz();
//funkcja pokaz() wypisująca na ekranie wspolrzedne początku i konca

odc3=odc1+odc2;
//operator+ zwracający nowy odcinek. Wspolrzedne początku nowego odcinka maja być rowne
//wspolrzednym początku odcinka podanego jako pierwszy argument, natomiast wspolrzedne konca nowego
//odcinka maja być rowne wspolrzednym konca odcinka podanego jako drugi argument

odc3.pokaz();

cout << odc3 << endl;

 return 0;
} 