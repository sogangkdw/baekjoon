#include <bits/stdc++.h>
using namespace std;
int n,k;
int arr[1000000];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,j=0;
    queue<int> q;
    int cnt=0;
    int mn=n;
    bool t=false;
    if(arr[i]==1) cnt++;
    while(j<n){
        j++;
        if(arr[j]==1){
            if(arr[i]==1) q.push(j);
            if(arr[i]==2) i=j;
            cnt++;
        }
        if(cnt>=k){
            mn=min(mn,j-i+1);
            i=q.front();
            q.pop();
            t=true;
            cnt--;
        }
    }
    if(t==false) cout<<-1;
    else if(k==1&&arr[0]==1) cout<<1;
    else cout<<mn;
}