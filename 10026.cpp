#include <bits/stdc++.h>
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
#define X first
#define Y second
string board[101];
int vis1[101][101];
int vis2[101][101];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string str;
    for(int i=0;i<n;i++){
        cin>>str;
        board[i]=str;
    }
    queue<pair<int,int>>Q;
    int count1=0,count2=0;
    //정상인 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(vis1[i][j]) continue;
            Q.push({i,j});
            vis1[i][j]=1;
            count1++;

            while(!Q.empty()){
                pair<int,int> cur=Q.front();
                Q.pop();
                for(int dir=0;dir<4;dir++){
                    int nx=cur.X+dx[dir];
                    int ny=cur.Y+dy[dir];
                    if(nx<0||nx>=n||ny<0||ny>=n) continue;
                    if(vis1[nx][ny]) continue;
                    if(board[nx][ny]!=board[cur.X][cur.Y]) continue;
                    Q.push({nx,ny});
                    vis1[nx][ny]=1;
                }
            }
        }
    }
    //적록색맹-빨강 초록 같게 인식
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(vis2[i][j]) continue;
            Q.push({i,j});
            vis2[i][j]=1;
            count2++;
            while(!Q.empty()){
                pair<int,int> cur=Q.front();
                Q.pop();
                for(int dir=0;dir<4;dir++){
                    int nx=cur.X+dx[dir];
                    int ny=cur.Y+dy[dir];
                    if(nx<0||nx>=n||ny<0||ny>=n) continue;
                    if(vis2[nx][ny]) continue;
                    if(board[nx][ny]=='R'||board[nx][ny]=='G'){
                        if(board[cur.X][cur.Y]=='B') continue;
                    }
                    if(board[nx][ny]=='B'){
                        if(board[cur.X][cur.Y]!='B') continue;
                    }
                    Q.push({nx,ny});
                    vis2[nx][ny]=1;
                }
            }
            
        }
    }
    cout<<count1<<'\n'<<count2<<'\n';
}