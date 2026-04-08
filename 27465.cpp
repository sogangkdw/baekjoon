#include <bits/stdc++.h>
using namespace std;
int n;
bool t;
int main(void){
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    else if(n==2){
        cout<<4;
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            t=true;
        }
    }
    if(t) cout<<n;
    else cout<<n+1;
}