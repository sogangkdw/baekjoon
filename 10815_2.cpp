#include <bits/stdc++.h>
using namespace std;
int n,t,num;
int arr[500000];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>num;
        cout<<binary_search(arr,arr+n,num)<<' ';
    }
}