#include <bits/stdc++.h>
using namespace std;
int n,m,a,b;
int plant[100];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>a>>b;
    int day=1;

    for(int i=0;i<n;i++){
        plant[i]=m;
    }
    while(1){
        
        int mn=plant[0],idx=0;
        for(int i=1;i<n;i++){
            if(plant[i]<mn){
                mn=plant[i];
                idx=i;
            }
        }
        for(int i=idx;i<idx+a;i++){
            plant[i]+=b;
        }
        for(int i=0;i<n;i++){
            plant[i]-=1;
        }
        for(int i=0;i<n;i++){
            if(plant[i]==0){
                cout<<day;
                return 0;
            }
        }
        day++;
    }
}