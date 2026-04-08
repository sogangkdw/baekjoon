#include <bits/stdc++.h>
using namespace std;
int n;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    int i=2;
    while(i*i<=n){
        while(n%i==0){
            cout<<i<<'\n';
            n/=i;
        }
        i++;
    }
    if(n!=1) cout<<n;
}