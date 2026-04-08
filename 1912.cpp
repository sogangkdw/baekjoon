#include <bits/stdc++.h>
using namespace std;
int n;
int arr[100001];
int d[100001][2];//j=0 연속합 j=1 그 값만

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    if(n==1){
        cout<<arr[1];
        return 0;
    }

    d[1][0]=d[1][1]=arr[1];
    d[2][0]=arr[1]+arr[2];
    d[2][1]=arr[2];
    int mx=max({d[1][0],d[2][0],d[2][1]});
    for(int i=3;i<=n;i++){
        d[i][0]=max(d[i-1][0],d[i-1][1])+arr[i];
        d[i][1]=arr[i];
        mx=max({mx,d[i][0],d[i][1]});
    }
    cout<<mx;
}