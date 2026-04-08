#include <bits/stdc++.h>
using namespace std;
int board1[10][10];
int board2[10][10];
int N,M;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

void UPD(int x, int y, int dir){
    dir%=4;//dir이 2이상일때 dir+2,3은 4이상
    while(1){
        x+=dx[dir];
        y+=dy[dir];
        if((x<0||x>=N||y<0||y>=M)||board2[x][y]==6) return;//범위 벗어나거나 벽 만날시
        if(board2[x][y]!=0) continue;//1~5 카메라 만나거나 이미 지나간 빈칸 만날시
        board2[x][y]=7;//cctv 범위 내 빈칸 7로 변경
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int mn;//최솟값
    cin>>N>>M;
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            cin>>board1[i][j];
    vector<pair<int,int>> v;//cctv 찾아서 넣음
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(board1[i][j]!=0&&board1[i][j]!=6)
                v.push_back({i,j});
            if(board1[i][j]==0)
                mn++;
        }
    }
    //1<<(2*v.size())는 4^v.size() 즉 cctv 방향 모든 경우의 수, 4진법 사용
    for(int t=0;t<1<<(2*v.size());t++){
        bool skip=false;
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                board2[i][j]=board1[i][j];//모든 t의 경우의 수에 대해 board2 초기화 해서 최솟값 찾기
            }
        }
        int tmp=t;
        //v.size()만큼 dir구함. ex)10^3이하는 3번 %,/ 계산 수행하면 다 구할수있음.
        for(int i=0;i<v.size();i++){
            int dir=tmp%4;//4진법 dir은 0~3 중 1개로 남 동 북 서
            tmp/=4;
            int x,y;
            tie(x,y)=v[i];//x,y는 각각 cctv의 인덱스
            if(board1[x][y]==1){
                UPD(x,y,dir);
            }
            else if(board1[x][y]==2){
                //dir이 2,3은 0,1이랑 중복되니 계산 안함
                if(dir>=2){
                    skip=true;
                    break;
                }
                UPD(x,y,dir);
                UPD(x,y,dir+2);
            }
            else if(board1[x][y]==3){
                UPD(x,y,dir);
                UPD(x,y,dir+1);
            }
            else if(board1[x][y]==4){
                UPD(x,y,dir);
                UPD(x,y,dir+1);
                UPD(x,y,dir+2);
            }
            else{
                //dir이 0이나 나머지나 다 4방향으로 똑같음. 중복 계산 방지
                if(dir!=0){
                    skip=true;
                    break;
                }
                UPD(x,y,dir);
                UPD(x,y,dir+1);
                UPD(x,y,dir+2);
                UPD(x,y,dir+3);
            }
        }
        if(skip) continue;
        int cnt=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                //cctv 범위 내 빈칸은 0으로 표시됨.
                if(board2[i][j]==0) cnt++;
            }
        }
        mn=min(mn,cnt);
    }
    cout<<mn;
    return 0;
}