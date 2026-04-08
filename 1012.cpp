#include <bits/stdc++.h>
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
#define X first
#define Y second
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int time;
    cin>>time;
    for(int h=0;h<time;h++){
        int board[51][51];
        int vis[51][51];
        for(int i=0;i<51;i++){
            fill(board[i],board[i]+51,0);
            fill(vis[i],vis[i]+51,0);
        }
        int n,m,k;
        cin>>m>>n>>k;
        for(int i=0;i<k;i++){
            int num1,num2;
            cin>>num1>>num2;
            board[num2][num1]=1;
        }
        queue<pair<int,int>>Q;
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==0||vis[i][j]!=0) continue;
                Q.push({i,j});
                vis[i][j]=1;
                count++;
                while(!Q.empty()){
                    pair<int,int> cur=Q.front();
                    Q.pop();
                    for(int dir=0;dir<4;dir++){
                        int nx=cur.X+dx[dir];
                        int ny=cur.Y+dy[dir];
                        if(nx<0||nx>=n||ny<0||ny>=m) continue;
                        if(vis[nx][ny]!=0||board[nx][ny]==0) continue;
                        Q.push({nx,ny});
                        vis[nx][ny]=1;
                    }
                }
            }
        }
        cout<<count<<'\n';
    }
    return 0;
}