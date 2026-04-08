#include <bits/stdc++.h>
using namespace std;


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    deque<pair<int,int>> d;
    int num1,num2,num3;
    cin>>num1>>num2;
    for(int i=1;i<=num1;i++){
        cin>>num3;
        if(!d.empty()&&(d.front().first<i-num2+1))
            d.pop_front();        
        while(!d.empty()&&num3<d.back().second){
            d.pop_back();
        }
        d.push_back({i,num3});
        cout<<d.front().second<<' ';
    }    
}