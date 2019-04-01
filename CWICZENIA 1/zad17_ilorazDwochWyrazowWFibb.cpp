#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a=125,b=798,iloraz;
    for(int i=0;i<20;i++){
        float c=b;
        cout<<b/a<<endl;
        b+=a;
        a=c;
    }
}
