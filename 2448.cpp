#include <bits/stdc++.h>
using namespace std;
int n;
char arr[8000][8000];

void func(int x, int y, int n){
    if(n==3){
        arr[x][y]='*';
        arr[x+1][y-1]=arr[x+1][y+1]='*';
        arr[x+2][y-2]=arr[x+2][y-1]=arr[x+2][y]=arr[x+2][y+1]=arr[x+2][y+2]='*';
        return;
    }
    int size=n/2;
    //삼각형 3개 만들기
    func(x,y,size);
    func(x+size,y-size,size);
    func(x+size,y+size,size);
}




int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        fill(arr[i],arr[i]+2*n,' ');
    }
    func(0,n-1,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
            cout<<arr[i][j];
        }
        cout<<'\n';
    }
}