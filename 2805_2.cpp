#include <bits/stdc++.h>
using namespace std;
int n,m;
int arr[1000000];

bool sol(int x){
    long long cur=0;
    for(int i=0;i<n;i++){
        if(arr[i]-x>0) cur+=arr[i]-x;
    }
    return cur>=m;
        
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int st=0;
    int ed=*max_element(arr,arr+n);

    while(st<ed){
        int mid=(st+ed+1)/2;
        if(sol(mid)) st=mid;
        else ed=mid-1;
    }
    cout<<st;
}