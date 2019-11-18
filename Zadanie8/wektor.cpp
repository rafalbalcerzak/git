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
//konstruktor kopiujący
Wektor::Wektor(const Wektor&w){
    n = w.n;
    tab = new double[n];
    for(int i = 0; i < n; i++){
        tab[i]=w.tab[i];
    }
}

void Wektor::print(){
    for(int i = 0; i < n; i++){
        cout<<tab[i]<<endl;
    }
    cout<<endl;
}

void Wektor::set(unsigned int pos, double val){
    //powinno być if pos<n
    tab[pos]=val;
}

//operator przypisania
Wektor&Wektor::operator=(const Wektor&w){
    //w3 =/= w3
    if(this==&w){
        return *this;
    }
    else{
        delete []tab;
    }
    n = w.n;
    tab = new double[n];
    for(int i = 0; i < n; i++){
        tab[i]=w.tab[i];
    }
    return *this;

}