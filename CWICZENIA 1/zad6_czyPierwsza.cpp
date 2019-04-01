#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"Nie pierwsza";
        return 0;
    }
    else{
        for(int i=3;i<sqrt(n);i+=2){
            if(n%i==0){
                cout<<"Nie pierwsza";
                return 0;
            }
        }
        cout<<"pierwsza";
        return 0;
    }
}
