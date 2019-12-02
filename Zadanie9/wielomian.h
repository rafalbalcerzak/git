#include <vector>

class Wielomian{
    std::vector <double> v;
public:
    double&operator[](int pos);
    void pokaz();
    void pokazOld();
    int mySize();
    
    friend Wielomian operator+(Wielomian a, Wielomian b);
    friend Wielomian operator-(Wielomian a, Wielomian b);
    friend Wielomian operator*(Wielomian a, Wielomian b);
};