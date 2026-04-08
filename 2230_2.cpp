#include <bits/stdc++.h>
using namespace std;
int n,m;
int arr[100000];
int mn=INT_MAX;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int st=0,en=0;
    //st<n은 안전성을 위해
    while(en<n&&st<n){
        while(arr[en]-arr[st]<m){
            en++;
        }
        if(arr[en]-arr[st]>=m){
            mn=min(mn,arr[en]-arr[st]);
            st++;
        }
    }
    cout<<mn;
}