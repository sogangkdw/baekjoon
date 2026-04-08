#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,q,r;
int n,m;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    a=100-n;
    b=100-m;
    c=100-(a+b);
    d=a*b;
    q=d/100;
    r=d%100;
    cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<q<<' '<<r<<'\n';
    cout<<c+q<<' '<<r;
}
