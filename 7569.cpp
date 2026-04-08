//pair 대신 tuple 사용
#include <bits/stdc++.h>
using namespace std;
#define Z first
#define X second
#define Y third
int dz[6] = { 0,0,0 ,0,-1,1 };
int dx[6] = {0,0 ,1,-1,0,0};
int dy[6] = {-1,1,0,0,0,0 };
int board[200][200][200];
int day[200][200][200];

int main(void){
    bool truth=1;
    int m,n,h;
    cin>>m>>n>>h;
    queue<tuple<int,int,int>> Q;
    int mx=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                cin>>board[i][j][k];
                if(board[i][j][k]==0)
                    day[i][j][k]=-1;
                if(board[i][j][k]==1)
                    Q.push({i,j,k});
            }
        }
    }
    while(!Q.empty()){
        int z,x,y;
        tie(z,x,y)=Q.front();
        Q.pop();
        for(int dir=0;dir<6;dir++){
            int nz=z+dz[dir];
            int nx=x+dx[dir];
            int ny=y+dy[dir];
            if(nz<0||nz>=h||nx<0||nx>=n||ny<0||ny>=m) continue;
            if(day[nz][nx][ny]>=0) continue;
            day[nz][nx][ny]=day[z][x][y]+1;
            Q.push({nz,nx,ny});
            mx=max(mx,day[nz][nx][ny]);
        }
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                if(day[i][j][k]==-1){
                    truth=0;
                    break;
                }
            }
        }
    }
    if(truth) cout<<mx<<'\n';
    else cout<<-1<<'\n';

}