#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool truth=1;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,n;
    cin>>m>>n;
    int board[n][m];
    int day[n][m];
    //날짜 -1로 선언(board가 1이거나 -1이면 0으로 선언)
    for(int i=0;i<n;i++)
        fill(day[i],day[i]+m,-1);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>board[i][j];
    }
    queue<pair<int,int>> Q;
    int mx=0;
    //day[i][j]==0이면 continue 하기 위해
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]==1){
                Q.push({i,j});
                day[i][j]=0;
            }
            else if(board[i][j]==-1)
                day[i][j]=0;
        }
    }

    while(!Q.empty()){
        pair<int,int> cur=Q.front();
        Q.pop();
        for(int dir=0;dir<4;dir++){
            int nx=cur.X+dx[dir];
            int ny=cur.Y+dy[dir];
            if(nx<0||nx>=n||ny<0||ny>=m) continue;
            if(day[nx][ny]>=0) continue;
            day[nx][ny]=day[cur.X][cur.Y]+1;
            Q.push({nx,ny});
            mx=max(mx,day[nx][ny]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(day[i][j]==-1){
                truth=0;
                break;
            }
        }
    }
    if(truth)
        cout<<mx<<'\n';
    else cout<<-1<<'\n';
    
}