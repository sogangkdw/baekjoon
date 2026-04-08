#include <bits/stdc++.h>
using namespace std;
int d[1000];
int arr[1000];
int n;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        d[i]=arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]) d[i]=max(d[i],d[j]+arr[i]);
        }
    }
    cout<<*max_element(d,d+n);
}