#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a=1,suma=1;
    for(int i=2;i<100;i++){
        suma+=a;
        a/=i;
    }
    cout<<suma;
}
