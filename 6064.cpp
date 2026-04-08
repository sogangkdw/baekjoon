#include <bits/stdc++.h>
using namespace std;
int N,n,m,x,y;

int gcd(int a,int b){
    if(a==0) return b;
    return gcd(b%a,a);
}

int lcm(int a,int b){
    return a/gcd(a,b)*b;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    for(int i=0;i<N;i++){
        bool t=false;
        cin>>n>>m>>x>>y;
        vector<int> v;
        if(n==x)
            x=0;
        if(m==y)
            y=0;
        int p=lcm(n,m);
        //두 수를 모두 보는게 아니라 하나를 먼저 구하고 그 수를 갖고 반복문 돌려서 시간초과 해결
        for(int j=x;j<=p;j+=n){
            if(j==0) continue;
            if(j%m==y){
                cout<<j<<'\n';
                t=true;
            }
        }
        if(!t) cout<<-1<<'\n';
    }
}