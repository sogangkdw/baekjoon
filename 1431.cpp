#include <bits/stdc++.h>
using namespace std;
string s[100];
int n;

bool cmp(string a, string b){
    if(a.size()!=b.size()) return a.size()<b.size();
    int sum_a=0,sum_b=0;
    for(int i=0;i<a.size();i++){
        if(isdigit(a[i])) sum_a+=a[i]-'0';
    }
    for(int i=0;i<b.size();i++){
        if(isdigit(b[i])) sum_b+=b[i]-'0';
    }
    if(sum_a!=sum_b) return sum_a<sum_b;
    return a<b;
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>s[i];
    sort(s,s+n,cmp);
    for(int i=0;i<n;i++){
        cout<<s[i]<<'\n';
    }
    return 0;
}