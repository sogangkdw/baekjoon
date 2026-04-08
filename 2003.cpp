#include <bits/stdc++.h>
using namespace std;
int n,m;
int arr[10000];
int cnt,tot;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int st=0,ed=0;
    while(st<n&&ed<n){
        if(tot+arr[ed]<m){
            tot+=arr[ed];
            ed++;
        }
        else if(tot+arr[ed]>m){
            tot-=arr[st];
            st++;
        }
        else{
            cnt++;
            tot-=arr[st];
            st++;
        }
    }
    cout<<cnt;
}