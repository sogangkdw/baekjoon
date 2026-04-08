#include <iostream>
#include <queue>
#define INF 987654321
#define pii pair<int,int>
#define Graph vector<vector<pair<int,int>>>
using namespace std;

vector<int> dijkstra(const Graph& graph, int src){
    int n=graph.size();
    vector<int> dist(n,INF);
    priority_queue<pii, vector<pii>, greater<pii>> pq;//선언 방법
    //priority_queue<int> v==priority_queue<int,vector<int>,less<int>> v

    dist[src]=0;
    pq.push({0,src});

    while(!pq.empty()){
        int currentDist=pq.top().first;
        int current=pq.top().second;
        pq.pop();

        if(dist[current]<currentDist) continue; //최소 거리 찾으면 pass

        for(auto& edge : graph[current]){
            int next=edge.first, nextDist= currentDist+edge.second;
            if(dist[next]>nextDist){
                dist[next]=nextDist;
                pq.push({nextDist,next});//오름차순 우선순위로 들어감
            }
        }
    }
    return dist;
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int V,E,K;
    cin>>V>>E>>K;
    Graph graph(V+1);

    for(int i=0;i<E;i++){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
    }

    vector<int> min_distance=dijkstra(graph,K);

    for(int i=1;i<=V;i++){
        if(min_distance[i]==INF) cout<<"INF\n";
        else cout<<min_distance[i]<<'\n';
    }
    return 0;
}