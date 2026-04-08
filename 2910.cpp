#include <bits/stdc++.h>
using namespace std;
int n;
long long m;
vector<pair<long long,int>> v;

bool cmp(pair<long long,int> a, pair<long long,int> b){
    return a.second>b.second;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        long long k;
        cin>>k;
        bool ck=false;
        for(auto& c:v){
            if(c.first==k){
                c.second++;
                ck=true;
            }
        }
        if(!ck) v.push_back({k,1});
    }
    stable_sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++){
        int h=v[i].second;
        while(h--){
            cout<<v[i].first<<' ';
        }
    }
    
}