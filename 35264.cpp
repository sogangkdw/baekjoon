#include <bits/stdc++.h>
using namespace std;
int n;
int cnt;
int arr[1000000];
vector<vector<int>> v(2);
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v[i%2].push_back(arr[i]); 
    }
    int sz0=v[0].size();
    int sz1=v[1].size();
    int tmp=0;
    for(int i = 0; i < sz0; i++){
        if(i==0) arr[2*i]=v[0][i];
        else arr[2*i]=v[0][i]+v[0][i-1];
        tmp+=!(!arr[2*i]);
    }

    for (int i = 0; i < sz1; i++) {
        if(i==0) arr[2*i+1]=v[1][i];
        else arr[2*i+1]=v[1][i]+v[1][i-1];
        tmp+=!(!arr[2*i+1]);
    }
    cout<<tmp<<'\n';
    for(int i=0;i<n;i++){
        if(arr[i]==0) continue;
        else if(arr[i]<0) cout<<i+1<<' '<<abs(arr[i])<<' '<<1<<'\n';
        else cout<<i+1<<' '<<arr[i]<<' '<<3<<'\n';
    }
}