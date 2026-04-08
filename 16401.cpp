#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int m,n;
int l[1000000];

bool solve(ll x){
    ll cur=0;
    for(int i=0;i<n;i++)
        cur+=l[i]/x;
    return cur>=m;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>m>>n;
    for(int i=0;i<n;i++)
        cin>>l[i];
    int st=0, en=*max_element(l,l+n);
    while(st<en){
        ll mid=(st+en+1)/2;
        if(solve(mid)) st=mid;
        else en=mid-1;
    }
    cout<<st;
}