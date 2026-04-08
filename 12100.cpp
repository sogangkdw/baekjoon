#include <bits/stdc++.h>
using namespace std;
int board1[30][30];
int board2[30][30];
int game[30][30];
int n;
//왼,아래,오른,위를 보는걸 rotate를 통해 왼쪽만 보게 설정
void rotate(){
    int tmp[21][21];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            tmp[i][j]=board2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            board2[i][j]=tmp[n-1-j][i];
        }
    }
}



//dir=0 왼쪽 dir=1 아래쪽 dir=2 오른쪽 dir=3 위쪽
void func(int dir){
    while(dir--) rotate();
    for(int i=0;i<n;i++){
        fill(game[i],game[i]+n,0);
    }
    for(int i=0;i<n;i++){
        int idx=0;
        for(int j=0;j<n;j++){
            if(board2[i][j]==0) continue;
            if(game[i][idx]==0){
                game[i][idx]=board2[i][j];
                continue;
            }
            else if(game[i][idx]==board2[i][j])
                game[i][idx++]*=2;
                    
            else
                game[i][++idx]=board2[i][j];                               
        }
        for(int j=0;j<n;j++){
            board2[i][j]=game[i][j];
        }
    }            
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>board1[i][j];
    int mx=0;
    for(int cnt=0;cnt<(1<<(2*5));cnt++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                board2[i][j]=board1[i][j];
            }
        }
        int brute=cnt;
        for(int i=0;i<5;i++){
            int dir=brute%4;
            brute/=4;
            func(dir);
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                mx=max(mx,board2[i][j]);
    }
    cout<<mx;
    return 0;
}