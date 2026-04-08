#include <bits/stdc++.h>
using namespace std;
int n,m;
int cmp;
string arr[100];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<m;j++){
            if(arr[i][j]=='O') cnt++;
        }
        if(cnt>m/2) cmp++;
    }
    cout<<cmp;
}