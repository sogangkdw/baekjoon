#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<string,string>& p1, const pair<string,string>& p2){
    if(p1.first==p2.first)
        return p1.second>p2.second;
    return p1.first<p2.first;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<pair<string,string>> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s1,s2;
        cin>>s1>>s2;
        v.push_back({s1,s2});    
    }
    sort(v.begin(),v.end(),compare);
    for(auto i:v){
        cout<<i.first<<' '<<i.second<<'\n';
    }
    return 0;
}