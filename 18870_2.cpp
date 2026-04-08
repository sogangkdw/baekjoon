#include <bits/stdc++.h>
using namespace std;
int n;
int arr[1000000];
int new_arr[1000000];
int c[1000000];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        c[i]=arr[i];
    }
    sort(arr,arr+n);
    int tmp=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]) new_arr[tmp++]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<lower_bound(new_arr,new_arr+tmp,c[i])-new_arr<<' ';
    }
}
