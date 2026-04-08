#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int N;


int main(void){
    cin>>N;
    vector<vector<int>> graph(N+1);
    vector<int> vis(N+1);
    queue<int> Q;
    for(int j=1;j<N;j++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    Q.push(1);
    vis[1]=1;
    while(!Q.empty()){
        int a=Q.front();
        Q.pop();
        //vis[a]=1;
        cout<<a<<' ';
        for(int v:graph[a]){
            if(!vis[v]){
                Q.push(v);
                vis[v]=1;

            }
        }
    }
    cout<<'\n';
}