#include <iostream>
using namespace std;
bool rozklad(int n){
    while(n%2==0){
        n/=2;
    }
    while(n%3==0){
        n/=3;
    }
    while(n%5==0){
        n/=5;
    }
    return (n==1);
}
int main(){
    int n,j=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(rozklad(i)){
            cout<<i<<endl;
            j++;
        }
    }
    cout<<j;
}
