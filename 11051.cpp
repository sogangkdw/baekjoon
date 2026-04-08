#include <bits/stdc++.h>
using namespace std;
int comb[1001][1001];
int mod=10007;
int n,m;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=1000;i++){
        comb[i][0]=comb[i][i]=1;//nCn=nC0=1;
        for(int j=1;j<i;j++){
            comb[i][j]=(comb[i-1][j]+comb[i-1][j-1])%mod;
        }
    }
    cout<<comb[n][m];
}