#include <bits/stdc++.h>
using namespace std;
int board[3][3];
int n,m;

int findwinner(int k) {
    // 행
    for (int i=0;i<3;i++)
        if (board[i][0]==k && board[i][1]==k && board[i][2]==k)
            return k;

    // 열
    for (int i=0;i<3;i++)
        if (board[0][i]==k && board[1][i]==k && board[2][i]==k)
            return k;

    // 대각선
    if (board[0][0]==k && board[1][1]==k && board[2][2]==k)
        return k;
    if (board[0][2]==k && board[1][1]==k && board[2][0]==k)
        return k;

    return 0;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    n==1?m=2:m=1;
    int tmp=9;
    int result=0;
    bool ck=true;
    while(tmp--){
        int x,y;
        cin>>x>>y;
        x--; y--;
        if(ck){
            board[x][y]=n;
            ck=!ck;
            result=findwinner(n);
        }
        else{
            board[x][y]=m;
            ck=!ck;
            result=findwinner(m);
        }
        if(result) {
            cout<<result;
            return 0;
        }
    }
    cout<<result;
    return 0;
}