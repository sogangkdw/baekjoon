#include <bits/stdc++.h>
using namespace std;
int n;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    int k=1;
    while(1){
        if(n-k<0) break;
        n-=k;
        if(n>0) k++;
    }
    if(n==0){
        if(k%2==0) cout<<k<<'/'<<1;
        else cout<<1<<'/'<<k;
    }
    else{
        if(k%2==1) cout<<k+1-n<<'/'<<n;
        else cout<<n<<'/'<<k+1-n;

    }
       
}