#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
const int A=10;
bool czyMaParzysta(int a){
    while(a>0){
        if((a%10)%2==0) return true;
        a/=10;
    }
    return false;
}
int main(){
    srand(time(NULL));
    int tab[A][A];
    for(int i=0;i<A;i++) for(int j=0;j<A;j++) tab[i][j]=rand(); //wypalnianie talbicy losowymi liczbami


    bool war=false;
    for(int i=0;i<A;i++){
        for(int j=0;j<A;j++){
            if(czyMaParzysta(tab[i][j])) war=true;
        }
        if(war){
            cout<<"Istnieje taki wiersz: "<<i<<endl;
            break;
        }
    }
    if(!war) cout<<"Nie istnieje taki wiersz";

//wypisanie tablicy
    for(int i=0;i<A;i++){
        for(int j=0;j<A;j++){
            cout<<tab[i][j]<<"\t";
        }
        cout<<endl;
    }
}
