#include <iostream>

using namespace std;
int m=0,count=0;

void solve(int a){
    if(a==m){
        count++;
        return;
    }
    
    for(int i=1;i<4;i++){
        if(a+i<=m){
            solve(a+i);
        }
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        count=0;
        solve(0);
        cout<<count<<'\n';
    }
}