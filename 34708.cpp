#include <bits/stdc++.h>
using namespace std;

int n,k;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    if(n*2>k) cout<<-1;
    else if(n*2==k) cout<<2*n-1;
    else cout<<2*n;
}