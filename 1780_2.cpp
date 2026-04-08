#include <bits/stdc++.h>
using namespace std;
int s[3];//-1,0,1
int arr[3000][3000];


bool check(int n,int x, int y){
    for(int i=x;i<x+n;i++){
        for(int j=y;j<y+n;j++){
            if(arr[i][j]!=arr[x][y])
                return false;
        }
    }
    return true;
}


void func(int n,int x, int y){
    if(check(n,x,y)){
        s[arr[x][y]+1]+=1;
        return;
    }
    int z=n/3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            func(z,x+i*z,y+j*z);
        }
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
        }
    }
    func(N,0,0);
    for(int i=0;i<3;i++){
        cout<<s[i]<<'\n';
    }
}