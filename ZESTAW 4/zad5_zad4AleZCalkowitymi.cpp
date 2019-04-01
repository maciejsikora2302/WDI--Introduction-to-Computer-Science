#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int A=300;
int main(){
    srand(time(NULL));
    int tab[A][A];
    for(int i=0;i<A;i++) for(int j=0;j<A;j++) tab[i][j]=rand()-rand(); //wypalnianie talbicy losowymi liczbami


    int maxK=0,maxW=0;//zmienne przechowujace najwieksza wartosc oraz gdzie ona sie znajduje
    double maxWart=0.0;
    for(int i=0;i<A;i++){
        for(int j=0;j<A;j++){
            int tempsumA=0,tempsumB=0;  //trzeba dzielic tempsumB/tempsumA
            for(int I=0;I<A;I++){
                tempsumA+=tab[i][I];
                tempsumB+=tab[I][i];
            }
            if(((double)tempsumB/tempsumA)>maxWart){
                maxWart=(double)tempsumB/tempsumA;
                //cout<<maxWart<<endl;
                maxK=i;
                maxW=j;
            }
        }
    }
    cout<<maxWart<<"\t"<<maxK<<"\t"<<maxW<<endl;

//wypisanie tablicy
    for(int i=0;i<A;i++){
        for(int j=0;j<A;j++){
            cout<<tab[i][j]<<"\t";
        }
        cout<<endl;
    }
}

