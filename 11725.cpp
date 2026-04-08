#include <iostream>
#include <vector>

using namespace std;

int n,ans[100001];
//vector<int> graph[100001];//vector<int> 자료형인 배열 graph
vector<vector<int>> graph(100001);

void dfs(int u, int prev){
    for(int v:graph[u]){
        if(prev!=v){
            ans[v]=u;
            dfs(v,u);
        }
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    

    dfs(1,1);
    for(int i=2;i<=n;i++){
        cout<<ans[i]<<"\n";
    }
}