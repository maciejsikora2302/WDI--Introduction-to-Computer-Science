#include <iostream>
#include <cmath>
using namespace std;
int suma_d(int n){
    int suma=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            if(i==sqrt(n)){
                suma+=i;
            }
            else{
                suma+=i;
                suma+=n/i;
            }
        }
    }
    return suma;
}
int main(){
    for(int i=2;i<=1000000;i++){
        if(suma_d(i)==i){
            cout<<i<<endl;
        }
    }
}
