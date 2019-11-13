#include <iostream>
using namespace std;

void dodaj(int *arg1, int *arg2, int *res, int size){
    int i;
    for(i=0;i<size;i++){
        *(res+i) =  *(arg1+i) + *(arg2+i);
    }

}

int main(){
    int tab1[10];
    int tab2[10];
    int tab3[10];
    int i;

    for (i=0;i<10;i++)
	{
		tab1[i]=rand() % 100;
		tab2[i]=rand() % 100;
	}
 
    cout<<"\nTab1:"<<endl;
    for (i=0;i<10;i++)
	{
		cout<<"tab1["<<i<<"]="<<tab1[i]<<endl;
	}

    cout<<"\nTab2:"<<endl;
    for (i=0;i<10;i++)
	{
		cout<<"tab2["<<i<<"]="<<tab2[i]<<endl;
	}

    //dodaj(&tab1[0],&tab2[0],&tab3[0],10); //też działa
    dodaj(tab1,tab2,tab3,10); 

    cout<<"\nTab3(Tab1 + tab2):"<<endl;
    for (i=0;i<10;i++)	
	{
		cout<<"tab3["<<i<<"]="<<tab3[i]<<endl;
	} 

    return 0;
}