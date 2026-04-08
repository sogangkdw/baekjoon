#include <bits/stdc++.h>
using namespace std;
int n,m,bef=1;
int arr[10];
void func(int k){
    if(k==m){
        for(int i=0;i<m;i++){
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i=bef;i<=n;i++){
            arr[k]=i;
            bef=i+1;//±× Àü²¨ ÀúÀå
            func(k+1);
        
    }
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    func(0);
}