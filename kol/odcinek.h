#include<iostream>

class Odcinek{
	double xpocz,ypocz; //Wspolrzedne poczatku odcinka
	double xkoniec,ykoniec; //Wspolrzedne konca odcinka
	
    public:
	
	Odcinek();
    Odcinek(double x, double y);
    Odcinek(double xp, double yp, double xk, double yk);
	
    double dlugosc();

    void pokaz();
    
    void ustaw(int ws, double value);

	friend Odcinek operator+(Odcinek o1, Odcinek o2);

	friend std::ostream& operator<<(std::ostream& os, const Odcinek& od);
};
