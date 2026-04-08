#include <bits/stdc++.h>
using namespace std;
int dx[8]={-1,-2,-2,-1,1,2,2,1};
int dy[8]={-2,-1,1,2,2,1,-1,-2};
#define X first
#define Y second
int board[301][301];
int vis[301][301];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int m,ax,ay,bx,by;
        cin>>m;
        cin>>ax>>ay;
        cin>>bx>>by;
        for(int i=0;i<m;i++){
            fill(vis[i],vis[i]+m,-1);
        }
        queue<pair<int,int>> Q;
        Q.push({ax,ay});
        vis[ax][ay]=0;

        while(!Q.empty()){
            pair<int,int> cur=Q.front(); Q.pop();
            for(int dir=0;dir<8;dir++){
                int nx=cur.X+dx[dir];
                int ny=cur.Y+dy[dir];
                if(nx<0||nx>=m||ny<0||ny>=m) continue;
                if(vis[nx][ny]>=0) continue;
                Q.push({nx,ny});
                vis[nx][ny]=vis[cur.X][cur.Y]+1;
            }
        }
        cout<<vis[bx][by]<<'\n';
        for(int i=0;i<m;i++){
            fill(vis[i],vis[i]+m,-1);
        }
    }
    return 0;
}