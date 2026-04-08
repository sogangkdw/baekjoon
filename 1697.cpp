#include <bits/stdc++.h>
using namespace std;
int arr[200001];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    fill(arr,arr+200001,-1);
    queue<int> Q;
    Q.push(n);
    arr[n]=0;
    
    while(arr[m]==-1){
        int cur=Q.front();
        Q.pop();
        for(int nxt:{cur-1,cur+1,cur*2}){
            if(nxt<0||nxt>100000) continue;
            if(arr[nxt]!=-1) continue;
            arr[nxt]=arr[cur]+1;
            Q.push(nxt);
        }
    }
    
    cout<<arr[m];
}