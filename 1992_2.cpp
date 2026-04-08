#include <bits/stdc++.h>
using namespace std;
string str[100];

bool check(int n, int a, int b){
    for(int i=a;i<a+n;i++){
        for(int j=b;j<b+n;j++){
            if(str[i][j]!=str[a][b]) return false;
        }
    }
    return true;
}


void func(int n, int a, int b){
    if(check(n,a,b)){
        cout<<str[a][b];
        return;
    }
    cout<<'(';
    int tmp=n/2;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            func(tmp,a+i*tmp,b+j*tmp);
        }
    }
    cout<<')';
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    func(n,0,0);
}