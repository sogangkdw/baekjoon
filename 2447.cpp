#include <bits/stdc++.h>
using namespace std;
char arr[7000][7000];
int n;

void func(int x,int y, int n){
    if(n==1){
        arr[x][y]='*';;
        return;
    }
    int t=n/3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==1&&j==1) continue;            
            func(x+t*i,y+t*j,n/3);
            
        }
    }
}



int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        fill(arr[i],arr[i]+n,' ');
    }
    func(0,0,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<'\n';
    }
}