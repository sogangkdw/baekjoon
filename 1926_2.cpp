#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int dx[4]={1,0,-1,0};//행
int dy[4]={0,1,0,-1};//열
vector<int> v;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //n은 행, m은 열
    int n,m;
    cin>>n>>m;
    int board[501][501];//1과 0으로 구성된 판
    bool vis[501][501]={0};//방문여부
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>board[i][j];
        }
    }
    queue<pair<int,int>> Q;//큐로 BFS

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            //시작점 찾기(방문 했거나 보드가 0이면 건너뜀)
            if(vis[i][j]==1||!board[i][j]) continue;
            vis[i][j]=1;
            Q.push({i,j});
            int size=0;//그림의 크기
            //BFS 시작
            while(!Q.empty()){
                pair<int,int> cur=Q.front(); 
                Q.pop();
                size++;
                for(int dir=0;dir<4;dir++){
                    int nx=cur.X+dx[dir];
                    int ny=cur.Y+dy[dir];      
                    if(nx<0||nx>=n||ny<0||ny>=m) continue;
                    if(vis[nx][ny]==1||board[nx][ny]==0) continue;
                    vis[nx][ny]=1;
                    Q.push({nx,ny});
                }
            }
            v.push_back(size);
        }
    }
    if(v.empty()){
        cout<<0<<'\n'<<0<<'\n';
    }
    else{
        cout<<v.size()<<'\n'<<*max_element(v.begin(),v.end())<<'\n';
    }
}