#include <bits/stdc++.h>
using namespace std;
int n;
int arr[20];
int num[20];
void func(int t){
    if(t==6){
        for(int i=0;i<6;i++){
            cout<<num[arr[i]]<<' ';
        }
        cout<<'\n';
        return;
    }
    int tmp=0;
    if(t>0) tmp=arr[t-1]+1;
    for(int i=tmp;i<n;i++){
        arr[t]=i;
        func(t+1);
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        cin>>n;
        if(n==0) break;
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        func(0);
        cout<<'\n';
    }
    return 0;
}