#include <bits/stdc++.h>
using namespace std;
int n;
long long m;
int arr[100000];
int mn=INT_MAX;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    int sz=n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tot=arr[0];
    int en=0;
    for(int st=0;st<n;st++){
        while(en<n&&tot<m){
            en++;
            if(en!=n) tot+=arr[en];
        }
        if(en==n) break;
        mn=min(mn,en-st+1);
        tot-=arr[st];
    }
    if(mn==INT_MAX) mn=0;
    cout<<mn;
    
}
