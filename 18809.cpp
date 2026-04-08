#include <bits/stdc++.h>
using namespace std;
int board[60][60];
int n,m,g,r;
const int EMPTY=0;
const int GREEN=1;
const int RED=2;
const int FLOWER=3;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
#define X first
#define Y second

vector<pair<int,int>> cand;//board가 2인것 담음.
int candsz;
int brute[10];//next_permutation 위한 변수

int solve(void){
    int cnt=0;
    pair<int,int> state[52][52];//각 좌표마다 {arrival time, color}
    queue<pair<int,int>> q;
    for(int i=0;i<candsz;i++){
        if(brute[i]==GREEN|| brute[i]==RED){
            state[cand[i].X][cand[i].Y]={0,brute[i]};
            q.push(cand[i]);
        }
    }
    while(!q.empty()){
        auto cur=q.front(); q.pop();
        int curtime=state[cur.X][cur.Y].X;
        int curcolor=state[cur.X][cur.Y].Y;
        if(state[cur.X][cur.Y].Y==FLOWER) continue;
        for(int dir=0;dir<4;dir++){
            int nx=cur.X+dx[dir];
            int ny=cur.Y+dy[dir];
            if(nx<0||nx>=n||ny<0||ny>=m) continue;
            if(board[nx][ny]==0) continue;
            if(state[nx][ny].Y==EMPTY){
                state[nx][ny]={curtime+1,curcolor};
                q.push({nx,ny});
            }
            else if(state[nx][ny].Y==RED){
                if(curcolor==GREEN&&state[nx][ny].X==curtime+1){
                    cnt++;
                    state[nx][ny].Y=FLOWER;
                }
            }
            else if(state[nx][ny].Y==GREEN){
                if(curcolor==RED&&state[nx][ny].X==curtime+1){
                    cnt++;
                    state[nx][ny].Y=FLOWER;
                }
            }
        }
    }
    return cnt;
}




int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>g>>r;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>board[i][j];//0은 호수,1은 배양액x,2는 배양액 o
            if(board[i][j]==2) cand.push_back({i,j});
        }
    }
    candsz=cand.size();
    fill(brute+candsz-g-r,brute+candsz-r,GREEN);//brute 중 g의 개수만큼 1로 초기화
    fill(brute+candsz-r,brute+candsz,RED);//brute 중 r의 대수만큼 2로 초기화
    int mx=0;
    do{
        mx=max(mx,solve());
    }while(next_permutation(brute,brute+candsz));
    cout<<mx<<'\n';
}