#include <iostream>
using namespace std;
int main(){
    int n,licz=1,pom=licz*licz+licz+1;
    cin>>n;
    bool znalazlo=false;
    while(pom<=n){
        if(n%pom==0){
            cout<<"ZNALAZLO "<<pom<<endl;
            znalazlo=true;
            break;
        }
        licz++;
        pom=licz*licz+licz+1;
    }
    if(!znalazlo) cout<<"NIE ZNALAZLO";
}
