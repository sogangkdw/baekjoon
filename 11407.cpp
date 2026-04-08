#include <bits/stdc++.h>
using namespace std;
int a[10];
int cnt;
int n,k;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int tot=k;
    reverse(a,a+n);
    while(1){
        static int i=0;
        while(tot>=a[i]){
            tot-=a[i];
            cnt++;
        }
        if(tot==0) break;
        i++;
    }
    cout<<cnt;
}