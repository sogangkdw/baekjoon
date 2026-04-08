#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,count=0;
    cin>>n>>m;
    vector<pair<int,int>> v;
    int vis[n+1];
    fill(vis,vis+n+1,0);
    for(int i=0;i<m;i++){
        int n1,n2;
        cin>>n1>>n2;
        v.push_back({n1,n2});
    }
    queue<int> Q;
    
    for(vector<pair<int,int>>::iterator it=v.begin();it!=v.end();it++){
        if(vis[it->first]!=0&&vis[it->second]!=0) continue;
        Q.push(it->first);
        vis[it->first]=1;
        count++;
        while(!Q.empty()){
            int cur=Q.front();
            Q.pop();
            for(auto i:v){
                if(i.first==cur){
                    if(vis[i.second]!=0) continue;
                    Q.push(i.second);
                    vis[i.second]=1;
                }
                else if(i.second==cur){
                    if(vis[i.first]!=0) continue;
                    Q.push(i.first);
                    vis[i.first]=1;
                }
            }
        }
    }
    //간선 없이 노드만 있음
    for(int i=1;i<n+1;i++){
        if(vis[i]==0) count++;
    }
    cout<<count<<'\n';
}