#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int suma=1,niep=3,il=1;
    while(suma<n){
        suma+=niep;
        niep+=2;
        il++;
    }
    cout<<il;
}
//za³o¿enie, ¿e na wejœciu mamy kwadrat liczby naturalnej
//je¿eli dostanie coœ innego to wypluwa sufit
