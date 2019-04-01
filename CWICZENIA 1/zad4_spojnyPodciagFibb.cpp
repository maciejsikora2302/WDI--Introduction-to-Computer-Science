#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> tab;
    int a=1,b=1;
    tab.push_back(a);

    //cout<<a<<endl;
    while(true){
        if(b>n)
            break;
        tab.push_back(b);
        int pom=b;
        b+=a;
        a=pom;
    }
    int suma=0,in;
    for(int i=0;i<tab.size();i++){
        suma+=tab[i];
        if(suma==n){
            cout<<"Istnieje";
            return 0;
        }
        if(suma>n){
            in=i;
            break;
        }
    }
    for(int i=0;i<=in;i++){
        suma-=tab[i];
        if(suma==n){
            cout<<"Istnieje";
            return 0;
        }
    }
    cout<<"Nie istnieje";
}
