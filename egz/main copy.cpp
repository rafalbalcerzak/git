#include <iostream>
#define PI 3.14
using namespace std;
class Walec
{
    double r; //promien podstawy walca
    double h; //wysokosc walca
public:
    Walec();
    Walec(double rval, double hval);

    void pokaz();
    void ustaw(double rval, double hval);
    double pole();
    double obj();

    friend Walec operator+(Walec wa, Walec wb);
    friend Walec operator-(Walec wa, Walec wb);
    friend Walec operator*(Walec wa, Walec wb);
    friend bool operator==(Walec wa, Walec wb);
};

Walec::Walec()
{
    r = 1;
    h = 1;
}

Walec::Walec(double rval, double hval)
{
    if (rval < 0)
    {
        r = 0;
    }
    else
    {
        r = rval;
    }

    if (hval < 0)
    {
        h = 0;
    }
    else
    {
        h = hval;
    }
}

void Walec::pokaz()
{
    cout << "r: " << r << endl;
    cout << "h: " << h << endl;
    cout << "pole powierzchni: " << 2 * PI * r * r + 2 * PI * r * h << endl;
    cout << "obietosc: " << PI * r * r * h << endl
         << endl;
}

void Walec::ustaw(double rval, double hval)
{
    if (rval < 0)
    {
        r = 0;
    }
    else
    {
        r = rval;
    }

    if (hval < 0)
    {
        h = 0;
    }
    else
    {
        h = hval;
    }
}

double Walec::pole()
{
    return 2 * PI * r * r + 2 * PI * r * h;
}

double Walec::obj()
{
    return PI * r * r * h;
}

Walec operator+(Walec wa, Walec wb)
{
    Walec res;
    res.r = wa.r + wb.r;
    res.h = wa.h + wb.h;
    return res;
}

Walec operator-(Walec wa, Walec wb)
{
    Walec res;
    res.r = wa.r - wb.r;
    if (res.r < 0)
    {
        res.r = 0;
    }

    res.h = wa.h - wb.h;
    if (res.h < 0)
    {
        res.h = 0;
    }

    return res;
}

Walec operator*(Walec wa, Walec wb)
{
    Walec res;
    if (wa.obj() > wb.obj())
    {
        res = wa;
    }
    else
    {
        res = wb;
    }
    return res;
}

bool operator==(Walec wa, Walec wb)
{
    if (wb.obj() == wa.obj())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Walec w1;        //konstruktor bezparametrowy, tworzacy nowy walec o promieniu 1 i wysokosci 1
    Walec w2(5, 10); //konstruktor z dwoma parametrami, ustawiajacy odpowiednio promien i
    //wysokosc walca
    //nalezy sprawdzic czy podane parametry sa ujemne, jezeli tak, promien i wysokosc
    //nalezy ustawic na 0

    w1.ustaw(1, 2); // funkcja ustaw() ustawiajaca promien i wysokosc walca na podane wartosci

    cout << w2.pole() << endl; //Funkcja pole() zwraca pole powierzchni walca
    cout << w2.obj() << endl;  // Funkcja obj() zwraca objetosc walca
    w1.pokaz();                //funkcja pokaz() wypisujaca na ekranie promien, szerokosc, pole powierzchni i objetosc walca

    Walec w3(3, 3); //1 2 5 10
    w3 = w1 + w2;   //operator + zwracajacy walec, ktorego promien jest suma promieni dwoch walcow a wysokosc suma wysokosci dwoch walcow
    w3.pokaz();

    w3 = w1 * w2; //operator * zwracajacy walec, ktory jest kopia walca o objetosci wiekszej z dwoch podanych walcow
    w3.pokaz();

    if (w2 == w3)
    { //operator == zwracajacy prawde jezeli objetosci dwoch walcow sa rowne, a falsz w przeciwnym wypadku
        cout << "Objetosci walcow sa rowne" << endl;
    }
    else
    {
        cout << "Objetosci walcow nie sa rowne" << endl;
    };

    w3 = w1 - w2; //operator - zwracajacy walec, ktorego promien jest roznica promieni dwoch walcow a wysokosc roznica wysokosci dwoch walcow
    //uwaga - jezeli wynikowy promien lub wysokosc jest ujemny/a, nalezy zwrocic walec o
    //promieniu 0 i wysokosci 0
    w3.pokaz();
    return 0;
}

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
