#include <bits/stdc++.h>
using namespace std;
int n;

int gcd(int a, int b){
    if(a==0) return b;
    return gcd(b%a,a);
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        vector<int> v;
        long long cnt=0;
        for(int j=0;j<t;j++){
            int num;
            cin>>num;
            v.push_back(num);
        }

        sort(v.begin(),v.end());
        for(int j=0;j<t-1;j++){
            for(int k=j+1;k<t;k++){
                cnt+=gcd(v[j],v[k]);
            }
        }
        cout<<cnt<<'\n';
    }
}