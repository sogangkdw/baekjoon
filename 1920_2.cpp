#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[100000];

void sol(int k){
    int i=0,j=n-1;
    while(i<j){
        int mid=(i+j)/2;
        if(k>a[mid]) i=mid+1;
        else j=mid;
    }
    if(a[i]==k) cout<<1<<'\n';
    else cout<<0<<'\n';
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>m;
    for(int i=0;i<m;i++){
        int k;
        cin>>k;
        sol(k);
    }
}