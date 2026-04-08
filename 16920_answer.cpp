#include <bits/stdc++.h>
using namespace std;
string board[1000];
int vis[1000][1000];
#define X first
#define Y second
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int n,m,p;
int player[10];
int castle[10];
bool ck[10];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>p;
    for(int i=1;i<=p;i++) cin>>player[i];
    for(int i=0;i<n;i++) cin>>board[i];

    queue<pair<int,int>> Q[10];
    for(int x=1;x<=p;x++){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==x+'0'){
                    castle[x]++;
                    Q[x].push({i,j});
                    vis[i][j]=1;
                }     
            }
        }
    }

    while(1){
        bool any=false;
        for(int i=1;i<=p;i++){
            int step=0;
            // ? 플레이어 전체 영역을 한 번에 확장 (cnt 없앰)
            while(step<player[i] && !Q[i].empty()){
                int qs=Q[i].size();
                while(qs--){
                    pair<int,int> cur=Q[i].front(); Q[i].pop();
                    for(int dir=0;dir<4;dir++){
                        int nx=cur.X+dx[dir];
                        int ny=cur.Y+dy[dir];
                        if(nx<0||ny<0||nx>=n||ny>=m) continue;
                        if(board[nx][ny]!='.') continue;
                        board[nx][ny]='0'+i;
                        Q[i].push({nx,ny});
                        castle[i]++;
                        any=true;
                    }
                }
                step++;
            }
        }
        if(!any) break;
    }
    for(int i=1;i<=p;i++) cout<<castle[i]<<' ';
}
