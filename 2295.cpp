#include <bits/stdc++.h>
using namespace std;
int arr[10000];
vector<int> t;
int n;

//a[i]+a[j]+a[k]=a[l](3원소의 합 중 집합 안에 있는 또다른 원소);
//a[i]+a[j]=t[m];
//t[m]=a[l]-a[k];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            t.push_back(arr[i]+arr[j]);
        }
    }
    sort(t.begin(),t.end());
    
    for(int l=n-1;l>=0;l--){
        for(int k=0;k<n;k++){
            if(binary_search(t.begin(),t.end(),arr[l]-arr[k])){
                cout<<arr[l];
                return 0;
            }
        }
    }

    

}