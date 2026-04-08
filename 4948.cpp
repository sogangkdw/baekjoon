#include <bits/stdc++.h>
using namespace std;
bool t[300000];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    t[1]=1;
    for(int i=2;i*i<=246912;i++){
        if(t[i]==1) continue;
        for(int j=i*i;j<=246912;j+=i){
            t[j]=1;
        }
    }


    while(1){
        int n;
        int cnt=0;
        cin>>n;
        if(n==0) break;
        for(int i=n+1;i<=2*n;i++){
            if(t[i]==0) cnt++;
        }
        cout<<cnt<<'\n';
    }
}