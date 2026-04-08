#include <bits/stdc++.h>
using namespace std;
int n,idx,mi,ps;
long long tot;
int arr[50];
bool t;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            t=true;
        }
        else if(arr[i]<0) mi++;
        else ps++;
    }
    sort(arr,arr+n);
    // 0 존재
    if(t){
        for(int i=0;i<mi;i+=2){ 
            tot+=arr[i]*arr[i+1];
        }
        for(int i=n-1;i>=n-ps;i-=2){
            if(arr[i-1]==0) tot+=arr[i];
            else if(arr[i]==1||arr[i-1]==1) tot+=arr[i]+arr[i-1];
            else tot+=arr[i]*arr[i-1];
        }    
    }
    // 0 없음
    else{ 
        if(mi%2==0){
            for(int i=0;i<mi;i+=2){
                tot+=arr[i]*arr[i+1];
            }
        }
        else{
            for(int i=0;i<mi-1;i+=2){
                tot+=arr[i]*arr[i+1];
            }
            tot+=arr[mi-1];
        }
        if(ps%2==0){
            for(int i=n-1;i>=n-ps;i-=2){
                if(arr[i-1]<0) tot+=arr[i];
                else if(arr[i]==1||arr[i-1]==1) tot+=arr[i]+arr[i-1];
                else tot+=arr[i]*arr[i-1];
            }      
        }
        else{
            for(int i=n-1;i>n-ps;i-=2){
                if(arr[i-1]<0) tot+=arr[i];
                else if(arr[i]==1||arr[i-1]==1) tot+=arr[i]+arr[i-1];
                else tot+=arr[i]*arr[i-1];
            }
            tot+=arr[n-ps];
        }
    }
    cout<<tot;
}