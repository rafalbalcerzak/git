#include <vector>

class Wielomian{
    std::vector <double> v;
public:
    double&operator[](int pos);
    void pokaz();
    void pokazOld();
    int mySize();
    double oblicz(double x);

    friend Wielomian operator+(Wielomian a, Wielomian b);
    friend Wielomian operator-(Wielomian a, Wielomian b);
    friend Wielomian operator*(Wielomian a, Wielomian b);
    friend bool operator==(const Wielomian b, const Wielomian a);
};