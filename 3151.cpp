#include <bits/stdc++.h>
using namespace std;
int n;
long long cnt;
int arr[10000];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            auto lb=lower_bound(arr+j+1,arr+n,-(arr[i]+arr[j]))-arr;
            auto ub=upper_bound(arr+j+1,arr+n,-(arr[i]+arr[j]))-arr;
            cnt+=ub-lb;
        }
    }
    cout<<cnt;
}