#include <bits/stdc++.h>
using namespace std;
int n;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    if(n>=1&&n<10) cout<<1;
    else if(n%2==0){
       if(n%9==0){
            cout<<n/9;
       }
       else{
           cout<<n/9+1;

       } 
       
    }
    else if(n%2==1){
        if(n%9==0){
            cout<<n/9;

       }
        else{
            if((n/9)&1==1) cout<<n/9+2;
            else cout<<n/9+1;
       }
    }
}