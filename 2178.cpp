#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int board[101][101];
    int dist[101][101];
    //거리 측정, -1이면 방문 안했다는 거임;
    for(int i=0;i<101;i++){
        fill(dist[i],dist[i]+101,-1);
    }
    string st;
    for(int i=0;i<n;i++){
        cin>>st;
        for(int j=0;j<m;j++)
            board[i][j]=st[j]-'0';
    }
    queue<pair<int,int>> Q;
    Q.push({0,0});
    dist[0][0]=1;
    
    while(!Q.empty()){
        pair<int,int> cur=Q.front();
        Q.pop();
        int bef_dist=dist[cur.X][cur.Y];
        for(int dir=0;dir<4;dir++){
            int nx=cur.X+dx[dir];
            int ny=cur.Y+dy[dir];
            if(nx<0||nx>=n||ny<0||ny>=m) continue;
            if(!board[nx][ny]||dist[nx][ny]>=0) continue;
            dist[nx][ny]=bef_dist+1;
            Q.push({nx,ny});
            if(nx==n-1&&ny==m-1){
                cout<<dist[nx][ny]<<'\n';
                return 0;
            }
        }
        
    }
}