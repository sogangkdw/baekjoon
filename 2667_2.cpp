#include <bits/stdc++.h>
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int board[26][26];
int vis[26][26];
#define X first
#define Y second
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string str;
    for(int i=0;i<n;i++){
        cin>>str;
        for(int j=0;j<n;j++){
            board[i][j]=str[j]-'0';
        }
    }
    queue<pair<int,int>> Q;
    vector<int> v;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(vis[i][j]!=0||board[i][j]==0) continue;
            Q.push({i,j});
            vis[i][j]=1;
            int count=0;
            while(!Q.empty()){
                pair<int,int> cur=Q.front();
                Q.pop();
                count++;
                for(int dir=0;dir<4;dir++){
                    int nx=cur.X+dx[dir];
                    int ny=cur.Y+dy[dir];
                    if(nx<0||nx>=n||ny<0||ny>=n) continue;
                    if(board[nx][ny]==0||vis[nx][ny]!=0) continue;
                    Q.push({nx,ny});
                    vis[nx][ny]=1;
                }    
            }
            v.push_back(count);
        }
    }
    cout<<v.size()<<'\n';
    sort(v.begin(),v.end());
    for(auto i:v) cout<<i<<'\n';
}