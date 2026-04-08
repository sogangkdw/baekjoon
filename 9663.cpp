#include <bits/stdc++.h>
using namespace std;
int n,cnt;
//퀸은 상하좌우와 대각선으로 공격가능
bool isused1[40];//y좌표
bool isused2[40];//대각선(/)x+y
bool isused3[400];//대각선(\)x-y+n-1

void func(int cur){
    if(cur==n){
        cnt++;
        return;
    }
    //행은 cur, 열은 i, 퀸은 각 행당 1개일수 밖에 없음.
    for(int i=0;i<n;i++){
        if(isused1[i]||isused2[cur+i]||isused3[cur-i+n-1]) continue;
        isused1[i]=1;
        isused2[cur+i]=1;
        isused3[cur-i+n-1]=1;
        func(cur+1);
        isused1[i]=0;
        isused2[cur+i]=0;
        isused3[cur-i+n-1]=0;
    }
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    func(0);
    cout<<cnt;
}