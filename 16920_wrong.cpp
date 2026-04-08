#include <bits/stdc++.h>
using namespace std;
string board[1000];
int vis[1000][1000];//¼ºÀº 1 ºóÄ­,º®Àº 0
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
    for(int i=1;i<=p;i++){
        cin>>player[i];
    }
    for(int i=0;i<n;i++){
        cin>>board[i];
    }
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
        for(int i=1;i<=p;i++){
            int cnt=Q[i].size();
            while(cnt--){
                pair<int,int> cur=Q[i].front();
                Q[i].pop();
                queue<pair<int,int>> nq;
                nq.push({cur.X,cur.Y});
                int step=0;
                while(step<player[i]&&!nq.empty()){
                    int qs=nq.size();
                    while(qs--){
                        pair<int,int> nq_cur=nq.front();
                        nq.pop();
                        for(int dir=0;dir<4;dir++){
                            int nx=nq_cur.X+dx[dir];
                            int ny=nq_cur.Y+dy[dir];
                            if(nx<0||ny<0||nx>=n||ny>=m) continue;
                            if(board[nx][ny]!='.') continue;
                            board[nx][ny]='0'+i;
                            vis[nx][ny]=i;
                            Q[i].push({nx,ny});
                            nq.push({nx,ny});
                            castle[i]++;
                            ck[i]=true;
                        }
                    }
                    step++;
                }
            }
        }
        bool gt=false;
        for(int i=1;i<=p;i++){
            if(ck[i]){
                gt=true;
                break;
            }
        }
        if(!gt) break;
        fill(ck,ck+10,false);
    }
    for(int i=1;i<=p;i++)
        cout<<castle[i]<<' ';

}

   