#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
const int M=10;
bool niepCyfry(int a){
    while(a>0){
        if((a%10)%2==0) return false;
        a/=10;
    }
    return true;
}
bool warunek(int tab[M][M]){
    for(int i=0;i<M;i++){
        int war=false;
        for(int j=0;j<M;j++){
            if(niepCyfry(tab[i][j])) war=true;
        }
        if (war=false) return false;
    }
    return true;
}
int main(){
    int t[M][M];
    for(int i=0;i<M;i++)    for(int j=0;j<M;j++)    t[i][j]=i+j;
    if(warunek(t)){
        cout<<"dziala";
    }
    else{
        cout<<"nie dziala";
    }
    cout<<endl;
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}
