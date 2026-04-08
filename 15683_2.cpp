#include <bits/stdc++.h>
using namespace std;
int board1[10][10];
int board2[10][10];
int arr[8];//cctv 방향을 모아놓은 배열
vector<pair<int,int>> v;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int N,M,mn;

void UPD(int x, int y, int dir){
    dir%=4;
    while(1){
        x+=dx[dir];
        y+=dy[dir];
        if((x<0||x>=N||y<0||y>=M)||board2[x][y]==6) return;//범위 벗어나거나 벽 만날시
        if(board2[x][y]!=0) continue;//1~5 카메라 만나거나 이미 지나간 빈칸 만날시
        board2[x][y]=7;//cctv 범위 내 빈칸 7로 변경
    }
}

//백트래킹
void func(int n){
    if(n==v.size()){
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                board2[i][j]=board1[i][j];
            }
        }    
        for(int i=0;i<v.size();i++){
            //x,y는 cctv 인덱스
            int x=v[i].first;
            int y=v[i].second;
            if(board1[x][y]==1)
                UPD(x,y,arr[i]);
            else if(board1[x][y]==2){
                UPD(x,y,arr[i]);
                UPD(x,y,arr[i]+2);
            }
            else if(board1[x][y]==3){
                UPD(x,y,arr[i]);
                UPD(x,y,arr[i]+1);
            }
            else if(board1[x][y]==4){
                UPD(x,y,arr[i]);
                UPD(x,y,arr[i]+1);
                UPD(x,y,arr[i]+2);
            }
            else{
                UPD(x,y,arr[i]);
                UPD(x,y,arr[i]+1);
                UPD(x,y,arr[i]+2);
                UPD(x,y,arr[i]+3);
            }
        }
        int cnt=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(board2[i][j]==0){
                    cnt++;
                }
            }
        }
        mn=min(cnt,mn);
        return;
    }
    for(int i=0;i<4;i++){
        arr[n]=i;
        func(n+1);
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>M;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>board1[i][j];
            if(board1[i][j]!=0&&board1[i][j]!=6)
                v.push_back({i,j});
            if(board1[i][j]==0)
                mn++;
        }
    }
    func(0);
    cout<<mn;
    return 0;
}