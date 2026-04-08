#include <bits/stdc++.h>
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
#define X first
#define Y second
string str[10001];
int fire[1001][1001];
int sang[1001][1001];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    for(int l=0;l<T;l++){
        int m,n;
        cin>>m>>n;
        for(int i=0;i<n;i++){
            cin>>str[i];
            fill(fire[i],fire[i]+m,-1);//-1로 초기화(최종적으로 벽이랑 방문 못한 곳은 -1임)
            fill(sang[i],sang[i]+m,-1);
        }
        queue<pair<int,int>> F;
        queue<pair<int,int>> S;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(str[i][j]=='@'){
                    S.push({i,j});
                    sang[i][j]=0;
                }
                else if(str[i][j]=='*'){
                    F.push({i,j});
                    fire[i][j]=0;
                }
            }
        }
        //불 먼저
        while(!F.empty()){
            pair<int,int> cur=F.front(); F.pop();
            for(int dir=0;dir<4;dir++){
                int nx=cur.X+dx[dir];
                int ny=cur.Y+dy[dir];
                if(nx<0||nx>=n||ny<0||ny>=m) continue;
                if(fire[nx][ny]!=-1||str[nx][ny]=='#') continue;
                F.push({nx,ny});
                fire[nx][ny]=fire[cur.X][cur.Y]+1;
            }
        }
        //상근
        bool truth=false;
        while(!S.empty()&&!truth){
            pair<int,int> cur=S.front(); S.pop();
            for(int dir=0;dir<4;dir++){
                int nx=cur.X+dx[dir];
                int ny=cur.Y+dy[dir];
                if(nx<0||nx>=n||ny<0||ny>=m){
                    cout<<sang[cur.X][cur.Y]+1<<'\n';
                    truth=true;
                    break;
                }
                if(sang[nx][ny]!=-1||str[nx][ny]=='#') continue;
                if(fire[nx][ny]!=-1&&fire[nx][ny]<=sang[cur.X][cur.Y]+1) continue;
                sang[nx][ny]=sang[cur.X][cur.Y]+1;
                S.push({nx,ny});
            }
        }
        if (!truth)
            cout<<"IMPOSSIBLE\n";
    }

}