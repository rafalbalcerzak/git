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

Walec::Walec(){
    r = 1;
    h = 1;
}

Walec::Walec(double rval, double hval){
    if(rval < 0){
        r = 0;
    }else{
        r = rval;
    }

    if(hval < 0){
        h = 0;
    }else{
        h = hval;
    }
}

void Walec::pokaz(){
    cout<<"r: "<<r<<endl;
    cout<<"h: "<<h<<endl;
    cout<<"pole powierzchni: "<<2*PI*r*r + 2*PI*r*h <<endl;
    cout<<"obietosc: "<<PI*r*r*h<<endl<<endl;
}

void Walec::ustaw(double rval, double hval){
    if(rval < 0){
        r = 0;
    }else{
        r = rval;
    }

    if(hval < 0){
        h = 0;
    }else{
        h = hval;
    }
}

double Walec::pole(){
    return 2*PI*r*r + 2*PI*r*h;
}

double Walec::obj(){
    return PI*r*r*h;
}

Walec operator+(Walec wa, Walec wb){
    Walec res;
    res.r = wa.r + wb.r;
    res.h = wa.h + wb.h;
    return res; 
}

Walec operator-(Walec wa, Walec wb){
    Walec res;
    res.r = wa.r - wb.r;
    if(res.r < 0){
        res.r = 0;
    }
    res.h = wa.h - wb.h;
    
    if(res.h < 0){
        res.h = 0;
    }
    return res; 
}

Walec operator*(Walec wa, Walec wb){
    Walec res;
    if(wa.obj() > wb.obj()){
        res = wa;
    }else{
        res = wb;
    }
    return res; 
}

bool operator==(Walec wa, Walec wb){
    if(wb.obj() == wa.obj()){
        return true;
    }else{
        return false;
    }
}

int main()
{
Walec w1; //konstruktor bezparametrowy, tworzacy nowy walec o promieniu 1 i wysokosci 1
Walec w2(5,10); //konstruktor z dwoma parametrami, ustawiajacy odpowiednio promien i
//wysokosc walca
//nalezy sprawdzic czy podane parametry sa ujemne, jezeli tak, promien i wysokosc
//nalezy ustawic na 0

w1.ustaw(1,2); // funkcja ustaw() ustawiajaca promien i wysokosc walca na podane wartosci

cout<<w2.pole() << endl; //Funkcja pole() zwraca pole powierzchni walca
cout<< w2.obj() << endl; // Funkcja obj() zwraca objetosc walca
w1.pokaz(); //funkcja pokaz() wypisujaca na ekranie promien, szerokosc, pole powierzchni i objetosc walca

Walec w3(3,3); //1 2 5 10 
w3=w1+w2; //operator + zwracajacy walec, ktorego promien jest suma promieni dwoch walcow a wysokosc suma wysokosci dwoch walcow
w3.pokaz();

w3=w1*w2; //operator * zwracajacy walec, ktory jest kopia walca o objetosci wiekszej z dwoch podanych walcow
w3.pokaz();

if (w2==w3){ //operator == zwracajacy prawde jezeli objetosci dwoch walcow sa rowne, a falsz w przeciwnym wypadku
    cout << "Objetosci walcow sa rowne" << endl;
}else{
    cout << "Objetosci walcow nie sa rowne" << endl;
};

w3=w1-w2; //operator - zwracajacy walec, ktorego promien jest roznica promieni dwoch walcow a wysokosc roznica wysokosci dwoch walcow
//uwaga - jezeli wynikowy promien lub wysokosc jest ujemny/a, nalezy zwrocic walec o
//promieniu 0 i wysokosci 0
w3.pokaz();
return 0;

}