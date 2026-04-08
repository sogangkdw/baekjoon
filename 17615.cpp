#include <bits/stdc++.h>
using namespace std;
string s;
int n;
int r,b;
int a1,a2,a3,a4;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    cin>>s;
    for(auto i:s){
        if(i==R) r++;
        else b++;
    }
    if(r==0||b==0) cout<<0;
    if(s[n-1]=='R'){
        for(int i=n-2;i>=0;i--){
            if(s[i]=='B') continue;
            else a1++;
        }

        for(int i=n-2;i>=0;i--){
            if(s[i]=='R') continue;
            else a1++;
        }

    }
}