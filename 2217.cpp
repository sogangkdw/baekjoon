#include <bits/stdc++.h>
using namespace std;
int n,mx;
int arr[100000];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    mx=n*arr[0];
    for(int i=1;i<n;i++){
        mx=max(mx,(n-i)*arr[i]);
    }
    cout<<mx;
}