#include <bits/stdc++.h>
using namespace std;
int n,sz;
long long cnt;
int arr[1000000];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>sz;
        for(int j=0;j<sz;j++){
            cin>>arr[j];
        }
        int mx=arr[sz-1];
        for(int j=sz-2;j>=0;j--){
            if(arr[j]<=mx) cnt+=mx-arr[j];
            else mx=arr[j];
        }
        cout<<cnt<<'\n';
        cnt=0;
    }
}
