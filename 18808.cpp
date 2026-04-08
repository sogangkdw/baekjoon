#include <bits/stdc++.h>
using namespace std;
int board1[50][50];
int N,M,K;

bool check(int x,int y, int n,int m,int board2[][12]){
    //NxM 벗어나는지 확인
    if (x + n > N || y + m > M) return false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board2[i][j]==1&&board1[x+i][y+j]==1)
                return false;
        }
    }
        //board1 칸 채우기
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board2[i][j]==1)
                board1[x+i][y+j]=board2[i][j];
        }
    }
    return true;
    
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>M>>K;
    
    for(int h=0;h<K;h++){
        int n,m;
        cin>>n>>m;
        int board2[12][12];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>board2[i][j];
            }
        }
        //원형 맞는지 체크
        bool ck=false;
        for(int i=0;i<=N-n&&!ck;i++){
            for(int j=0;j<=M-m;j++){
                //여기에 조건문 안 넣은 이유는 check에서 다 구분하려고
                ck=check(i,j,n,m,board2);
                if(ck) break;
            }
        }
        if(ck) continue;
        //90도 회전
        else{
            //최대 3번 회전
            for(int time=0;time<3;time++){
                int board3[12][12];
                for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                        board3[j][n-i-1]=board2[i][j];
                    }
                }
                swap(n,m);
                for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                        board2[i][j]=board3[i][j];
                    }
                }
                for(int i=0;i<=N-n&&!ck;i++){
                    for(int j=0;j<=M-m;j++){
                        ck=check(i,j,n,m,board2);
                        if(ck) break;
                    }
                }
                if(ck) break;
            }

        }
    }
    int tot=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(board1[i][j]==1)
                tot++;
        }
    }
    cout<<tot;
    return 0;
}