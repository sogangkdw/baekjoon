#include <bits/stdc++.h>
using namespace std;
int d[11];
int n;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    //초기값
    d[1]=1;
    d[2]=2;
    d[3]=4;
    for(int j=0;j<n;j++){
        int num;
        cin>>num;
        for(int i=4;i<=num;i++){
            //점화식
            if(d[i]!=0) continue;
            d[i]=d[i-1]+d[i-2]+d[i-3];
        }
        cout<<d[num]<<'\n';
    }
    
}