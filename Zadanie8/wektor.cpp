//ciała funkcji, powiązane z wektor.h
#include "wektor.h"
#include <iostream>
using namespace std;

Wektor::Wektor(){
    n = 0;
    tab = nullptr;//sprawdzić co to jest!
}

Wektor::Wektor(unsigned int size){
    n = size;
    tab = new double[n];
}

Wektor::~Wektor(){
    delete [] tab;
}

void Wektor::print(){
    for(int i = 0; i < n; i++){
        cout<<tab[i]<<endl;
    }
}