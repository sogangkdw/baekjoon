#include <bits/stdc++.h>
using namespace std;
int n,m,num;
int a1[500000];
int a2[500000];
vector<int> v;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    sort(a1,a1+n);
    for(int i=0;i<m;i++){
        cin>>a2[i];
    }
    sort(a2,a2+m);
    
    for(int i=0;i<n;i++){
        if(binary_search(a2,a2+m,a1[i])) continue;
        v.push_back(a1[i]);
    }
    cout<<v.size()<<'\n';
    for(auto i:v)
        cout<<i<<' ';
}