#include <bits/stdc++.h>
using namespace std;
int n;
string s;
string new_s;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    cin>>s;
    for(auto i:s){
        if(i=='A'||i=='J'||i=='V') continue;
        new_s+=i;
    }
    if(new_s.size()==0) cout<<"nojava"<<'\n';
    else cout<<new_s;
}