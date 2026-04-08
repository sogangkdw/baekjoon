#include <bits/stdc++.h>
using namespace std;

int n,k;
string s;
//비트 마스킹 사용

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tmp=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s!="all"&&s!="empty") cin>>k;
        if(s=="add")
            tmp|=(1<<k);
        else if(s=="remove"){
            tmp&=~(1<<k);
        }
        else if(s=="check"){
            if(tmp&(1<<k)) cout<<1<<'\n';
            else cout<<0<<'\n';
        }
        else if(s=="toggle"){
            tmp^=(1<<k);
        }
        else if(s=="all"){
            tmp=(1<<21)-1;
        }
        else if(s=="empty")
            tmp=0;
    }
    
}