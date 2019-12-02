//ciała funkcji, powiązane z wielomian.h
#include "wielomian.h"
#include <iostream>

using namespace std;

//wyswietlanie wielomiany w przystepnej formie
void Wielomian::pokaz(){
    for(int i = 0; i < v.size(); i++){
        
        cout<<v[v.size()-1-i];
        //koniec linie
        if(i == v.size()-1){
             cout<<endl;
        }
        //> x^0
        else{  
            //x^1 
            if((v.size()-1-i) == 1){
                //sprawdzam czy następny element jest wiekszy czy mniejszy od zera i decyduje o następnym znaku
                int a = v[v.size()-2-i];
                if( a >= 0){
        
                    cout<<"x+";
                }
                else{
                    cout<<"x";
                }
            }
            //>x^1
            else{
                //sprawdzam czy następny element jest wiekszy czy mniejszy od zera i decyduje o następnym znaku
                int a = v[v.size()-2-i];
                if(a >= 0){
                    
                    cout<<"x^"<<v.size()-1-i<<"+";
                }
                else{
                    cout<<"x^"<<v.size()-1-i;
                }
                
            }
        }
    }
    cout<<endl;
    
}
//stara funkcja wyświetlanie (prosta,bła +-)
void Wielomian::pokazOld(){
    cout<<"old: ";
    for(int i = 0; i < v.size(); i++){
        
        cout<<v[v.size()-1-i];

        if(i == v.size()-1){
             cout<<endl;
        }
        else
{   
            if((v.size()-1-i) == 1){
                cout<<"x+";
            }

            else{
                cout<<"x^"<<v.size()-1-i<<"+";
            }
        }
    }
    cout<<endl;
    
}
//zwaraca rozmiar wielomainu
int Wielomian::mySize(){
    int size = v.size();
    return size;
}

//operator który powiększa tablice jeśli jest za mała
double&Wielomian::operator[](int pos){
    if(pos >= v.size()){
        v.resize(pos+1);
    }
    return v.at(pos);
}

//operator dodawania
Wielomian operator+(Wielomian a, Wielomian b){
    Wielomian res;
    
    int resSize;

    if(a.v.size() > b.v.size()){
        resSize = a.v.size();
    }
    else{
        resSize = b.v.size();
    }

    for(int i = 0; i < resSize; i++){
        res[i] = a.v[i] + b.v[i];
    }
    
    return res;
};

//operator odejmowania
Wielomian operator-(Wielomian a, Wielomian b){
    Wielomian res;
    
    int resSize;

    if(a.v.size() > b.v.size()){
        resSize = a.v.size();
    }
    else{
        resSize = b.v.size();
    }

    for(int i = 0; i < resSize; i++){
        res[i] = a.v[i] - b.v[i];
    }
    
    return res;
};

//operator mnożenia
Wielomian operator*(Wielomian a, Wielomian b){
    Wielomian res;

    for(int ai = 0; ai < a.v.size(); ai++){
        for(int bi = 0; bi < b.v.size(); bi++){
             res[ai + bi] += a.v[ai] * b.v[bi];                
        }
    }

    return res;
};