#include <iostream>
using namespace std;
int main(){
    int t[10];
    for(int i=0;i<10;i++) t[i]=-1;
    int n=1,l=1;
    while(n!=0){
        cin>>n;
        if(n==0) break;
        //cout<<l<<endl;
        //l++;
        for(int i=0;i<10;i++){
            if(t[i]<n){
                for(int j=9;j>i;j--){
                    t[j]=t[j-1];
                }
                t[i]=n;
                break;
            }
        }
    }
    /*
    for(int i=0;i<10;i++){
        cout<<t[i]<<" ";
    }*/
    cout<</*endl<<*/t[9];
}
