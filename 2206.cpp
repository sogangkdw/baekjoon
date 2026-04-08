//dist[x][y][2] 벽을 부수면 1 아님 0
#include <bits/stdc++.h>
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
#define X first
#define Y second
int vis[1001][1001][2];
int board[1001][1001];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    string str;
    for(int i=0;i<n;i++){
        cin>>str;
        for(int j=0;j<str.size();j++){
            board[i][j]=str[j]-'0';
            vis[i][j][0]=vis[i][j][1]=-1;
        }
    }
    queue<tuple<int,int,int>> Q;
    Q.push({0,0,0});
    vis[0][0][0]=1;
    vis[0][0][1]=1;
    
    while(!Q.empty()){
        int x,y,broken;
        tie(x,y,broken)=Q.front();
        //tuple<int,int,int> cur=Q.front();
        Q.pop();
        if(x==n-1&&y==m-1){
            cout<<vis[x][y][broken];
            return 0;
        }
        for(int dir=0;dir<4;dir++){
            int nx=x+dx[dir];
            int ny=y+dy[dir];
            if(nx<0||nx>=n||ny<0||ny>=m) continue;
            if(broken==1&&board[nx][ny]) continue;
            if(vis[nx][ny][broken]!=-1) continue;
            if(broken==0&&board[nx][ny]==1&&vis[nx][ny][1]==-1){
                vis[nx][ny][1]=vis[x][y][0]+1;
                Q.push({nx,ny,1});
            }
            if(board[nx][ny]==0&&vis[nx][ny][broken]==-1){
                Q.push({nx,ny,broken});
                vis[nx][ny][broken]=vis[x][y][broken]+1;
            }
        }
    }
    cout<<-1<<'\n';
}