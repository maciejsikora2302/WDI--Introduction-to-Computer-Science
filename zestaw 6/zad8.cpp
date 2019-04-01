#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int N=8;
void zad8_main(int t[N][N], int kolumna, int sum, int przejscie, int &sumMin, bool& niePrzypisalo){
    sum+=t[przejscie][kolumna];
    if(przejscie==7){
        if(sumMin>sum or niePrzypisalo){
            sumMin=sum;
            niePrzypisalo=false;
        }
        return;
    }
    if(kolumna+1<8)     zad8_main(t,kolumna+1,sum,przejscie+1,sumMin,niePrzypisalo);
    zad8_main(t,kolumna,sum,przejscie+1,sumMin,niePrzypisalo);
    if(kolumna-1>=0)    zad8_main(t,kolumna-1,sum,przejscie+1,sumMin,niePrzypisalo);

}

int zad8(int t[N][N], int k){
    int sumaMin=0;
    bool war=true;
    zad8_main(t,k,0,0,sumaMin,war);
    return sumaMin;

}

int main(){
    srand(1);
    int tab[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            tab[i][j]=rand()%10;
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<zad8(tab,0);
}
