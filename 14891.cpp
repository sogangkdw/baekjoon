#include <bits/stdc++.h>
using namespace std;
string board[4];
int k;
int sum;

void work(int num,int dir){
    int cnt[4]={};
    cnt[num]=dir;
    int idx_left=num;
    int idx_right=num;
    //왼쪽
    while(idx_left>0&&board[idx_left][6]!=board[idx_left-1][2]){
        cnt[idx_left-1]=-cnt[idx_left];
        idx_left--;
    }
    //오른쪽
    while(idx_right<3&&board[idx_right][2]!=board[idx_right+1][6]){
        cnt[idx_right+1]=-cnt[idx_right];
        idx_right++;
    }
    for(int i = 0; i < 4; i++) {
        if(cnt[i] == -1)//반시계
            rotate(board[i].begin(), board[i].begin()+1, board[i].end());    
        else if(cnt[i] == 1)//시계
            rotate(board[i].begin(), board[i].begin()+7, board[i].end());
    }
    //rotate는 middle값을 first로 이동시키고 그 숫자를 기준으로 나머지 나열
    //ex)1 2 3 4 5 6 ,rotate(begin,begin+4,end)->5 6 1 2 3 4(begin+4=5여서 5부터 시작)
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<4;i++){
        cin>>board[i];
    }
    cin>>k;
    for(int i=0;i<k;i++){
        int num,dir;
        cin>>num>>dir;
        //dir=1 시계 -1 반시계
        work(num-1,dir);
    }
    for(int i=0;i<4;i++){
        if(board[i][0]=='1') sum+=(1<<i);
    }
    cout<<sum;
}