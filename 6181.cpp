#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
#define N 1000000000
ll vis[N][N];
#define X first
#define Y second
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin>>n>>m;
    queue<pair<ll,ll>> q;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        q.push({x,y});
        vis[x][y]=1;
    }
    
    while(!Q.empty()){
        pair<ll,ll> cur=q.front();
        q.pop();
        
    }
}