#include <bits/stdc++.h>
using namespace std;
queue<int> v1;
queue<int> v2;
vector<int> V;
int a,b;

void extracal(){
    if(v1.size()==0){
        while (!v2.empty()) {
            V.push_back(v2.front());
            v2.pop();
        }
    }
    else{
       while (!v1.empty()) {
            V.push_back(v1.front());
            v1.pop();
        }      
    }
}

void func(){
    if(v1.size()==0||v2.size()==0){
        extracal();        
        return;
    }
    if(v1.front()>=v2.front()){
        V.push_back(v2.front());
        v2.pop();
    }
    else{
        V.push_back(v1.front());
        v1.pop();
    }
    func();
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>a>>b;
    for(int i=0;i<a;i++){
        int num;
        cin>>num;
        v1.push(num);
    }
    for(int i=0;i<b;i++){
        int num;
        cin>>num;
        v2.push(num);
    }
    func();
    for(auto i:V)
        cout<<i<<' ';
}