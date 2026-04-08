#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num1,num2,num3,count=0;
    deque<int> d;
    cin>>num1>>num2;
    for(int i=1;i<=num1;i++){
        d.push_back(i);
    }
    for(int i=0;i<num2;i++){
        cin>>num3;
        if(num3==d.front()){
            d.pop_front();
            continue;
        }
        else{
            int idx=find(d.begin(),d.end(),num3)-d.begin();//index 확인
            //오른쪽으로 한칸이동
            if(idx>d.size()/2){
                while(num3!=d.front()){
                    d.push_front(d.back());
                    d.pop_back();
                    count++;
                }
                d.pop_front();
            }
            //왼쪽으로 한칸 이동
            else{
                while(num3!=d.front()){
                    d.push_back(d.front());
                    d.pop_front();
                    count++;
                }
                d.pop_front();
            }
        }
    }
    cout<<count<<'\n';
}