#include <bits/stdc++.h>
using namespace std;
int n;
int arr[300000];
int mx,cnt,tmp;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]) tmp++;
        else{
            tmp++;
            mx=max(tmp,mx);
            tmp=0;
            cnt++;
        }
    }
    if(arr[n-2]<=arr[n-1]){
        tmp++;
        mx=max(tmp,mx);
        cnt++;
    }
    else{
        cnt++;
    }
    cout<<cnt<<' '<<mx;
}