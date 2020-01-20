#include <iostream>
#include <cmath>
//rafal balcerzak
using namespace std;

class Trojkat
{
    double bok1;
    double bok2;
    double bok3;

public:
    Trojkat();
    Trojkat(double b1, double b2, double b3);

    void pokaz();
    bool czyPoprawny();
    double obliczPole();
    void zmienBok(int pos, double val);

    friend Trojkat operator+(Trojkat a, Trojkat b);
    friend bool operator==(Trojkat a, Trojkat b);
};

Trojkat::Trojkat()
{
    bok1 = 1;
    bok2 = 1;
    bok3 = 1;
}

Trojkat::Trojkat(double b1, double b2, double b3)
{
    bok1 = b1;
    bok2 = b2;
    bok3 = b3;
}

void Trojkat::pokaz()
{
    cout << "bok1: " << bok1 << endl;
    cout << "bok2: " << bok2 << endl;
    cout << "bok3: " << bok3 << endl
         << endl;
}

bool Trojkat::czyPoprawny()
{
    if (bok1 + bok2 > bok3 && bok1 + bok3 > bok2 && bok2 + bok3 > bok1)
    {
        return true;
    }
    return false;
}

double Trojkat::obliczPole()
{
    double res;
    double p = (bok1 + bok2 + bok3) / 2;
    res = sqrt(p * (p - bok1) * (p - bok2) * (p - bok3));
    return res;
}

void Trojkat::zmienBok(int pos, double val)
{
    if (pos == 1)
    {
        bok1 = val;
    }
    else if (pos == 2)
    {
        bok2 = val;
    }
    else if (pos == 3)
    {
        bok3 = val;
    }
    else
    {
        cout << "Blad, podany bok nie istnieje" << endl;
    }
}

Trojkat operator+(Trojkat a, Trojkat b)
{
    Trojkat res;
    res.bok1 = a.bok1 + b.bok1;
    res.bok2 = a.bok2 + b.bok2;
    res.bok3 = a.bok3 + b.bok3;
    return res;
}

bool operator==(Trojkat a, Trojkat b)
{
    if (a.obliczPole() == b.obliczPole())
    {
        return true;
    }
    return false;
}

int main()
{
    Trojkat t1(1.1, 2.2, 4.4);
    t1.pokaz();

    if (t1.czyPoprawny())
    {
        cout << "Trojkat jest poprawny" << endl;
    }
    else
    {
        cout << "Trojkat nie jest poprawny" << endl;
    }

    Trojkat t2(1.5, 2.4, 3.1);
    t2.pokaz();

    cout << "Pole trojkata: " << t2.obliczPole() << endl;

    t2.zmienBok(3, 2.3);
    t2.zmienBok(5, 3.0);

    t2.pokaz();

    Trojkat t3 = t1 + t2;

    t3.pokaz();

    Trojkat t4 = t2;

    if (t2 == t4)
    {
        cout << "Pola trojkatow sa rowne" << endl;
    }
    return 0;
}