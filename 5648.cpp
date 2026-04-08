#include <bits/stdc++.h>
using namespace std;
int num;
string n[1000000];
vector <long long> v;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>n[i];
        reverse(n[i].begin(),n[i].end());
        v.push_back(stoll(n[i]));
    }
    sort(v.begin(),v.end());
    for(auto i: v) cout<<i<<'\n';
}
