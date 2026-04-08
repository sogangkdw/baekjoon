#include <bits/stdc++.h>
using namespace std;
int n;
int d[1000];
int arr[1000];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    fill(d,d+n,1);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]) d[i]=max(d[j]+1,d[i]);
        }
    }
    cout<<*max_element(d,d+n);
}