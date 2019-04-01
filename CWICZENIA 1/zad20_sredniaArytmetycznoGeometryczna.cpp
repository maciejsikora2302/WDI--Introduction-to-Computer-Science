#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a=2,b=17353;
    for(int i=0;i<50;i++){
        //cout<<a<<" "<<b<<endl;
        double c=a,d=b;
        a=sqrt(c*d);
        b=((c+d)/2);
    }
    cout<<a;
}
