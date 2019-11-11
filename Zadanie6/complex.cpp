#include "complex.h"
#include <iostream>
#include <math.h>

//konstruktor z 2 argumentami
Complex::Complex(double r, double i){
    re = r;
    im = i;
};

//konstruktor z 1 argumentem ccc
Complex::Complex(double r){
    re = r;
    im = 0;
};

//konstruktor domyslny, bez argumentow
Complex::Complex(){
    re = 0;
    im = 0;
};

void Complex::show(){
    std::cout<<re<<" + "<<im<<"i\n"<<std::endl;
};

//modul z liczby zespolonej
double Complex::mod(){
    double res;
    res=sqrt((re*re)+(im*im));
    return res;
};

//przeciążanie operatorów
Complex operator+(Complex c1, Complex c2){
    Complex res(0,0);
    res.re=c1.re+c2.re;
    res.im=c1.im+c2.im;
    return res;
};

//przeciążanie operatorów
Complex operator-(Complex c1, Complex c2){
    Complex res(0,0);
    res.re=c1.re-c2.re;
    res.im=c1.im-c2.im;
    return res;
};

//przeciążanie operatorów
Complex operator*(Complex c1, Complex c2){
    Complex res(0,0);
    res.re=(c1.re*c2.re)-(c1.im*c2.im);
    res.im=(c1.re*c2.im)+(c1.im*c2.re);
    return res;
}; 