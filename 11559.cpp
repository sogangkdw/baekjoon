#include <bits/stdc++.h>
using namespace std;
string board[12];
int vis[12][6];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int cnt;
#define X first
#define Y second


void reset(){
    for(int i=0;i<12;i++){
        for(int j=0;j<6;j++){
            vis[i][j]=0;
        }
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<12;i++){
        cin>>board[i];
    }
    while(1){
        bool ck=false;
        queue<pair<int,int>> q;
        for(int i=0;i<12;i++){
            for(int j=0;j<6;j++){
                if(board[i][j]=='.'||vis[i][j]!=0) continue;
                q.push({i,j});
                vector<pair<int,int>> v;//푸요가 4개이상인 경우 푸요를 지우기 위해 위치 저장하는 벡터
                vis[i][j]=1;
                v.push_back({i,j});
                int tmp=1;//4개 이상인지 확인
                while(!q.empty()){
                    pair<int,int> cur=q.front();
                    q.pop();
                    for(int dir=0;dir<4;dir++){
                        int nx=cur.X+dx[dir];
                        int ny=cur.Y+dy[dir];
                        if(nx<0||nx>=12||ny<0||ny>=6) continue;
                        if(board[nx][ny]!=board[cur.X][cur.Y]) continue;
                        if(vis[nx][ny]!=0) continue;
                        vis[nx][ny]=vis[cur.X][cur.Y]+1;
                        q.push({nx,ny});
                        v.push_back({nx,ny});
                        tmp++;
                    }
                }
                if(tmp>=4){
                    ck=true;
                    
                    for(auto i:v){
                        board[i.X][i.Y]='.';
                    }
                }
            }
        }
        if(!ck) break;
        cnt++;
        //중력작용
        for(int i=0;i<6;i++){
            for(int j=10;j>=0;j--){
                int k=j;
                while(k<11&&board[k+1][i]=='.'){
                    swap(board[k][i],board[k+1][i]);
                    k+=1;
                }
            }
        }
        reset();
    }
    cout<<cnt;    
}