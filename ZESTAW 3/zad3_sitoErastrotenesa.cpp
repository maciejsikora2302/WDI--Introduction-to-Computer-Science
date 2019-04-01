#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool t[n];
    for(int i=0;i<n;i++) t[i]=true;
    for(int i=2;i<n;i++){
        int j=i+i;
        while(j<=n){
            t[j]=false;
            j+=i;
        }
    }
    for(int i=2;i<n;i++) if(t[i]) cout<<i<<endl;
}
