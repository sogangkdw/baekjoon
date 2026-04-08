#include <bits/stdc++.h>
using namespace std;
int n;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    int cnt=1;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a<0&&b>0){
            cnt+=b-a-1;
        }
        else if(a>0&&b<0){
            cnt+=b-a+1;
        }
        else{
            cnt+=b-a;
        }
    }
    if(cnt>0)
        cout<<cnt;
    else cout<<cnt-1;
}