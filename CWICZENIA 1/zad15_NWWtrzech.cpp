#include <iostream>
using namespace std;
int nwd(int a, int b){
    int c;
    while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}
int nww(int a,int b){
    return a/nwd(a,b)*b;
}
int main(){

    int a,b,c;
    cin>>a>>b>>c;
    cout<<nww(a,nww(b,c));
}
