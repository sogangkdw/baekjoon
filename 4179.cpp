//불에대한 bfs와 지훈이에 대한 bfs 따로
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
    string str;
    char board[n][m];
    int fire[n][m];
    int jihoon[n][m];
    for(int i=0;i<n;i++){
        fill(fire[i],fire[i]+m,-1);
        fill(jihoon[i],jihoon[i]+m,-1);
    }
    for(int i=0;i<n;i++){
        cin>>str;
        for(int j=0;j<m;j++){
            board[i][j]=str[j];
        }
    }

    queue<pair<int,int>> F;
    queue<pair<int,int>> J;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]=='F'){
                fire[i][j]=0;
                F.push({i,j});
            }
            else if(board[i][j]=='J'){
                jihoon[i][j]=0;
                J.push({i,j});
            }
        }
    }
    // 불 먼저
    while(!F.empty()){
        pair<int,int> cur=F.front();
        F.pop();
        for(int dir=0;dir<4;dir++){
            int nx=cur.X+dx[dir];
            int ny=cur.Y+dy[dir];
            if(nx<0||nx>=n||ny<0||ny>=m) continue;
            if(fire[nx][ny]>=0||board[nx][ny]=='#') continue;
            F.push({nx,ny});
            fire[nx][ny]=fire[cur.X][cur.Y]+1;
        }
    }
    //지훈
    while(!J.empty()){
        pair<int,int> cur=J.front();
        J.pop();
        for(int dir=0;dir<4;dir++){
            int nx=cur.X+dx[dir];
            int ny=cur.Y+dy[dir];
            //범위 벗어났다는 것은 탈출 성공했다는 것
            if(nx<0||nx>=n||ny<0||ny>=m){
                cout<<jihoon[cur.X][cur.Y]+1;
                return 0;
            }
            if(jihoon[nx][ny]>=0||board[nx][ny]=='#') continue;//
            if(fire[nx][ny]!=-1&&fire[nx][ny]<=jihoon[cur.X][cur.Y]+1) continue;//불이 먼저 도달하면 죽음
            J.push({nx,ny});
            jihoon[nx][ny]=jihoon[cur.X][cur.Y]+1;
        }
    }
    cout<<"IMPOSSIBLE";
}
