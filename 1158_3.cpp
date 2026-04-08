#include <bits/stdc++.h>

using namespace std;
const int Max=10000;
int pre[Max],nxt[Max];
int unused=1;


int main(void){
    vector<int> v;
    int num1,num2;
    fill(pre,pre+Max,-1);
    fill(nxt,nxt+Max,-1);
    
    cin>>num1>>num2;
    int len=num1;

    //원형 연결리스트 구현
    for(int i=1;i<=num1;i++){
        pre[i]=(i==1)?num1:i-1;
        nxt[i]=(i==num1)?1:i+1;
    }
    //원소 없애기
    int count=1;
   
    for(int cur=1;len!=0;cur=nxt[cur]){//다음 존재하는 리스트로 이동하기
        if(count==num2){
            pre[nxt[cur]]=pre[cur];
            nxt[pre[cur]]=nxt[cur];
            v.push_back(cur);
            count=1;
            len--;
            }
        else count+=1;
        }
    
    cout << "<";
    for(size_t i = 0; i < v.size(); ++i) {
        cout << v[i];
        if(i != v.size() - 1) cout << ", ";
    }
    cout << ">";
}