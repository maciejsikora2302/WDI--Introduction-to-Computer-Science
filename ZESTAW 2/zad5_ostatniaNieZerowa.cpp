#include <iostream>
using namespace std;
int main(){
    long long int n,suma=1;
    cin>>n;
    for(long long int i=2;i<=n;i++){
        while(suma%10==0){
            suma/=10;
        }
        suma%=10000;
        if(i%10!=0){
            suma*=i;
        }
        //else i++;
        //cout<<i<<" - "<<suma<<endl;
    }
    while(suma%10==0){
            suma/=10;
        }
    cout<<suma%10;
}
