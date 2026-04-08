#include <bits/stdc++.h>
using namespace std;
int n;
long long arr[100001];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int Mx=1;
    int cur=1;
    long long dig=arr[0];
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            cur++;
        }
        else{
            if(cur>Mx) dig=arr[i];
            Mx=max(Mx,cur);
            cur=1;
        }
    }
    //마지막 원소묶음들 처리
    if(cur>Mx) dig=arr[n-1];
    Mx=max(Mx,cur);
    cout<<dig;
}