//ciała funkcji, powiązane z wielomian.h
#include "wielomian.h"
#include <iostream>
using namespace std;
//#include <vector> 

double&Wielomian::operator[](int pos){
    if(pos >= v.size()){
        v.resize(pos+1);
    }
    return v.at(pos);
}

void Wielomian::pokaz(){
    for(int i = 0; i < v.size(); i++){
        
        cout<<v[v.size()-1-i];

        if(i == v.size()-1){
             cout<<endl;
        }
        else{   
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