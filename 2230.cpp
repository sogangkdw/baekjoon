#include <bits/stdc++.h>
using namespace std;
int n,m;
long long arr[100000];
long long mn=INT_MAX;
void sol(){
    for(int i=0;i<n-1;i++){
       auto k=lower_bound(arr+i,arr+n,arr[i]+m)-arr;
       //k==n 제외 시키기 위해서
       if(k<n) mn=min(mn,arr[k]-arr[i]);
    }
    cout<<mn;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    sol();
}