#include <bits/stdc++.h>
using namespace std;
int cnt[2];
int arr[200][200];

bool check(int n,int a,int b){
    for(int i=a;i<a+n;i++){
        for(int j=b;j<b+n;j++){
            if(arr[a][b]!=arr[i][j]) return false;
        }
    }
    return true;
}

void func(int n,int a,int b){
    if(check(n,a,b)){
        arr[a][b]==1?cnt[1]++:cnt[0]++;
        return;
    }
    int tmp=n/2;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            func(tmp,a+tmp*i,b+tmp*j);
        }
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    func(n,0,0);
    cout<<cnt[0]<<'\n'<<cnt[1];
}