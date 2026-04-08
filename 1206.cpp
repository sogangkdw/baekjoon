#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
int N,M,V;
vector<vector<int>> graph(10001);
vector<int> vis1(1001,1);
vector<int> vis2(1001,1);
queue<int> q;


void dfs(int r){
    vis1[r]=0;
    for(int i:graph[r]){
        if(vis1[i]){
            cout<<i<<" ";
            dfs(i);
        }
    }
}


int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>N>>M>>V;

    while(M--){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=1;i<=N;i++) sort(graph[i].begin(),graph[i].end());

    cout<<V<<' ';
    dfs(V);
    cout<<'\n';

    q.push(V);
    vis2[V]=0;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        cout<<u<<' ';
        for(int s:graph[u]){
            if(vis2[s]){
                q.push(s);
                vis2[s]=0;
            }
        }
    }
    
    cout<<"\n";
}