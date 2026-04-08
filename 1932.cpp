#include <bits/stdc++.h>
using namespace std;
int n;
int d[501][501];
int arr[501][501];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin>>arr[i][j];
        }
    }
    d[1][1]=arr[1][1];
    d[2][1]=d[1][1]+arr[2][1];
    d[2][2]=d[1][1]+arr[2][2];
    for(int i=3;i<=n;i++){
        d[i][1]=d[i-1][1]+arr[i][1];
        d[i][i]=d[i-1][i-1]+arr[i][i];
        for(int j=2;j<i;j++){
            d[i][j]=max(d[i-1][j-1],d[i-1][j])+arr[i][j];
        }
    }
    cout<<*max_element(d[n]+1,d[n]+n+1);
}