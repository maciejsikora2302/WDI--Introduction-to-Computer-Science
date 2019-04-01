#include <iostream>
using namespace std;
void ciag (int a,int b){
    //cout<<a<<", "<<b<<endl;
    int poma=a,pomb=b;
    while(true){
        if(b>2018)
            break;
        if(b==2018){
            cout<<"a: "<<poma<<"   b: "<<pomb<<endl;
        }
        int pom=b;
        b+=a;
        a=pom;
    }
}
int main(){
    for(int i=1;i<=1000;i++){
        for(int j=2;j<1000;j++){
            ciag(i,j);
        }
    }

}
//27 20
