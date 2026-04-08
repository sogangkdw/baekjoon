#include <bits/stdc++.h>
using namespace std;
string s;
int n;
int mod=1000000007;
int d[4];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    cin>>s;
    for(auto i:s){
        if(i=='A') d[0]++;
        else if(i=='C') d[1]++;
        else if(i=='G') d[2]++;
        else d[3]++;
    }
    long long mx=1;
    for(int i=0;i<4;i++){
        mx*=d[i];
        mx%=mod;
    }
    cout<<mx<<'\n';
}