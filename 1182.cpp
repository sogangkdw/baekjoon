#include <bits/stdc++.h>
using namespace std;

int n,s,cnt;
int arr[30];

//cur은 arr의 인덱스, cur이 n이 되면 모든 원소를 다 돌았다는 것
void func(int cur,int tot){
    if(cur==n){
        if(tot==s){
            cnt++;
        }
        return;
    }
    func(cur+1,tot);//더하지 않거나
    func(cur+1,tot+arr[cur]);//더하거나
}



int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>s;
    for(auto& i:arr){
        cin>>i;
    }
    func(0,0);
    if(s==0) cnt--;//공집합 제거
    cout<<cnt;
}