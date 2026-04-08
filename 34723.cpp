#include <bits/stdc++.h>
using namespace std;
int p,m,c,x,mn;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>p>>m>>c>>x;
    mn=INT_MAX;
    for(int i=1;i<=p;i++){
        for(int j=1;j<=m;j++){
            for(int k=1;k<=c;k++){
                mn=min(abs((i+j)*(j+k)-x),mn);
            }
        }
    }
    cout<<mn;
}