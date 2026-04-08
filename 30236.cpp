#include <bits/stdc++.h>
using namespace std;
int n;
int t;
int a[100],b[100];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        for(int i=0;i<t;i++)
            cin>>a[i];
        if(a[0]==1) b[0]=2;
        else b[0]=1;
        for(int i=1;i<t;i++){
            if(a[i]!=b[i-1]+1) b[i]=b[i-1]+1;
            else b[i]=a[i]+1;
        }
        cout<<b[t-1]<<'\n';
    }
}