#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int m=0,e=0;;
    for(int i=2;i<=10000;i++){
        int licz=0,p=i;
        while(p!=1){
            p=p%2*(3*p+1)+(1-p%2)*(p/2);
            licz++;
        }
        if(licz>=m){
            m=licz;
            e=i;
        }
    }
    cout<<m<<" "<<e<<endl;
}
