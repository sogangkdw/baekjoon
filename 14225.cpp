#include <bits/stdc++.h>
using namespace std;
int n;
int arr[20];
bool ck[2000001];

void recur(int sum,int idx){
    ck[sum]=true;
    if(idx==n) return;
    else{
        recur(sum+arr[idx],idx+1);
        recur(sum,idx+1);
    }
    
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];        
    }
    sort(arr,arr+n);
    recur(0,0);
    int j=1;
    while(ck[j]==true) j++;
    cout<<j;
}