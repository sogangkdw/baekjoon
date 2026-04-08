#include <bits/stdc++.h>
using namespace std;
long long t[1500001];
long long p[1500001];
long long d[1500001];
int n;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>t[i]>>p[i];
    for(int i=n;i>=1;i--){
        if(i+t[i]<=n+1){
            d[i]=max(p[i]+d[i+t[i]],d[i+1]);
        }
        else{
            d[i]=d[i+1];
        }
    }
    cout<<*max_element(d,d+n+1);
}