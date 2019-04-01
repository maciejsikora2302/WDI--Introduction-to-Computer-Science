#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a=sqrt(0.5),wart=a;
    while(true){
        a=sqrt(0.5+(a*0.5));
        wart*=a;
        cout<<2.0/wart<<endl;
    }
}
