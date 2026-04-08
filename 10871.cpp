/*#include <iostream>
#include <vector>*/
#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,X,K;
    cin>>N>>X;
    vector<int> v;

    for(int i=0;i<N;i++){
        cin>>K;
        v.push_back(K);
    }

    for(vector<int>::size_type i=0;i<v.size();i++){
        if(v[i]<X){
            cout<<v[i]<<' ';
        }
    }
}
