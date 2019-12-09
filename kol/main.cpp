#include <iostream>
#include "odcinek.h"
using namespace std;

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