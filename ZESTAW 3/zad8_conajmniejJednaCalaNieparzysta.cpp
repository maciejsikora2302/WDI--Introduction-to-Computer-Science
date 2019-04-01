#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
bool czyNp(int a){
    while(a>0){
        if((a%10)%2==0) return false;
        a/=10;
    }
    return true;
}
int main(){
    const int MAX=20;
    srand(time(NULL));
    int tab[MAX];
    for(int i=0;i<MAX;i++){
        tab[i]=rand()%1000+1;
        //cout<<tab[i]<<" "<<czyNp(tab[i])<<endl;
    }
    for(int i=0;i<MAX;i++){
        if(czyNp(tab[i])){
             cout<<"TAK";
             return 0;
        }
    }
    cout<<"NIE";
}
