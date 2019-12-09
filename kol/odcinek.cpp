#include "odcinek.h"
#include <iostream>
#include <cmath>

using namespace std;


Odcinek::Odcinek(){
	xpocz = 0;
	ypocz = 0;
	xkoniec = 0;
	ykoniec = 0;
}

Odcinek::Odcinek(double x, double y){
	xpocz = 0;
	ypocz = 0;
	xkoniec = x;
	ykoniec = y;
}

Odcinek::Odcinek(double xp, double yp, double xk, double yk){
	xpocz = xp;
	ypocz = yp;
	xkoniec = xk;
	ykoniec = yk;
}

double Odcinek::dlugosc(){
    double res = sqrt((xpocz-xkoniec)*(xpocz-xkoniec)+(ypocz-ykoniec)*(ypocz-ykoniec)); 
    return res;
}

void Odcinek::pokaz(){
    cout<< "xpocz:";
    cout<< xpocz<<endl;
    cout<< "ypocz:";
    cout<< ypocz<<endl;
    cout<< "xkoniec:";
    cout<< xkoniec<<endl;
    cout<< "ykoniec:";
    cout<< ykoniec<<endl<<endl;
}

void Odcinek::ustaw(int ws, double value){
    if (ws == 0){
        xpocz = value;
    }
    else if(ws == 1){
        ypocz = value;
    }
    else if (ws == 2){
        xkoniec = value;
    }
    else if(ws == 3){
        ykoniec = value;
    }
    else
    {
        cout<<"cos nie tak"<<endl;
    }
    
    
}

Odcinek operator+(Odcinek o1, Odcinek o2){
    Odcinek res;
    res.xpocz = o1.xpocz;
    res.ypocz = o1.ypocz;
    res.xkoniec = o2.xkoniec;
    res.ykoniec = o2.ykoniec;
    return res;
}


ostream& operator<<(ostream& os, const Odcinek& od){
	os<<"Poczatek("<<od.xpocz<<","<< od.ypocz<<") koniec("<< od.xkoniec<<","<< od.ykoniec<<")";
 	//os << od.xpocz<<" - "<< od.ypocz<<" - "<< od.xkoniec<<" - "<< od.ykoniec;
    return os;
}