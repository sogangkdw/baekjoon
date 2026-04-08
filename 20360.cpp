#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    stack<int> bin;
    vector<int> v;
    int a;
    cin>>a;
    while(a){
        int re;
        re=a%2;
        bin.push(re);
        a/=2;
    }

    while(!bin.empty()){
        if(bin.top()){
            v.push_back(bin.size()-1); 
        }
        bin.pop();
    }
    sort(v.begin(),v.end());
    for(auto k:v){
        cout<<k<<' ';
    }
    cout<<'\n';
}