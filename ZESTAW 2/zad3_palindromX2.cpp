#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=0,p=n;
    while(p>0){
        p/=10;
        k++;
    }
    p=n;
    int l[k];
    for(int i=0;i<k;i++){
        l[i]=p%10;
        p/=10;
    }
    bool p1=true,p2=true;
    for(int i=0;i<k/2;i++){
        if(l[i]!=l[k-i-1]){
            cout<<"NIE JEST PALINDROMEM W DZIESIETNYM"<<endl;
            p1=false;
            break;
        }
    }
    if(p1){
        cout<<"JEST PALINDROMEM W DZIESIETNYM"<<endl;
    }
    p=n;
    string bin="";
    while(p>0){
        bin+=(char)(p%2+48);
        p/=2;
    }
    for(int i=0;i<bin.size()/2;i++){
        if(bin[i]!=bin[bin.size()-i-1]){
            cout<<"NIE JEST PALINDROMEM W DWOJKOWYM"<<endl;
            p2=false;
            break;
        }
    }
    if(p2){
        cout<<"JEST PALINDROMEM W DWOJKOWYM"<<endl;
    }
}
