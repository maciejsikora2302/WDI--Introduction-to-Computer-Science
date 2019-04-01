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
    bool znalazlo=false;
    for(int i=1;i<tab.size();i++){
        if(tab[i-1]*tab[i]==n){
            cout<<tab[i-1]<<" "<<tab[i]<<endl;
            znalazlo=true;
            break;

        }
    }
    if(!znalazlo)
        cout<<"Nie znalazlo";
}
