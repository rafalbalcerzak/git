#include <iostream>
#include <cmath>
using namespace std;
class Podatnik
{
    int nip;
    double przychod;
    double koszt;

public:
    Podatnik(int nip_set);
    Podatnik(int nip_set, double przychod_set, double koszt_set);

    void pokaz();
    void ustaw_dane(double przychod_set, double koszt_set);

    double przychod_w_euro(double kurs);
    double podatek();

    friend bool operator==(Podatnik p1, Podatnik p2);
    //uzupelnij…
};
//uzupelnij…

Podatnik::Podatnik(int nip_set)
{
    nip = nip_set;
    przychod = 0;
    koszt = 0;
}

Podatnik::Podatnik(int nip_set, double przychod_set, double koszt_set)
{
    nip = nip_set;
    przychod = przychod_set;
    koszt = koszt_set;
}

void Podatnik::pokaz()
{
    cout << "Podatnik: " << nip << endl;
    cout << "Przychod: " << przychod << endl;
    cout << "koszt: " << koszt << endl
         << endl;
}

void Podatnik::ustaw_dane(double przychod_set, double koszt_set)
{
    przychod = przychod_set;
    koszt = koszt_set;
}

double Podatnik::przychod_w_euro(double kurs)
{
    return (przychod / kurs);
}

double Podatnik::podatek()
{
    double dochod;
    dochod = przychod - koszt;
    return (dochod * 0.2);
}

bool operator==(Podatnik p1, Podatnik p2)
{
    if (p1.podatek() == p2.podatek())
    {
        return true;
    }
    return false;
}

int main()
{
    Podatnik p1(725001234);                     //konstruktor z 1 parametrem, ustawiajacy nip na podana wartość przychod i koszt należy zainicjalizować na 0
    Podatnik p2(725006789, 123456.79, 6789.01); //konstruktor z 3 parametrami, ustawiajacy odpowiednio nip, przychod i koszt na podane wartosci

    p1.ustaw_dane(246000, 100000); //Funkcja ustaw_dane, ustawiajaca przychod i koszt na podane wartosci

    p1.pokaz(); //Funkcja pokaz, wyswietlajaca napis „Podatnik” oraz nip, przychod i koszt

    cout << "przychod podatnika w euro:" << p1.przychod_w_euro(4.35) << endl;
    //Funkcja przychod w euro, zwracajaca przychod podatnika przeliczony
    //na euro, gdzie kurs euro w zlotowkach jest podany jako parametr

    cout << "podatek do zaplacenia:" << p1.podatek() << endl;
    //Funkcja podatek, obliczajaca należny podatek (należy zalozyc, ze
    //istnieje jedna stawka podatkowa rowna 20% dochodu

    if (p1 == p2)
    {                                              //operator ==, zwracający prawde jeżeli podatki dwotch podatnikow sa rowne
        cout << "Ta sama wartosc podatku" << endl; //a falsz w przeciwnym wypadku
    }
    else
    {
        cout << "Rozna wartosc podatku" << endl;
    }
    return 0;
}
