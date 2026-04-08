#include <bits/stdc++.h>
using namespace std;
queue<int> Q1;//트럭무게
queue<pair<int,int>> Q2;//다리{트럭무게,투입시간}
int n,w,L,cnt,weight;
#define X first
#define Y second

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>w>>L;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        Q1.push(num);
    }
    Q2.push({Q1.front(),1});
    weight+=Q1.front();
    Q1.pop();
    cnt++;
    while(!Q2.empty()){
        cnt++;
        //시간 지나면 트럭 다리에서 나감
        if(cnt-Q2.front().Y==w){
            weight-=Q2.front().X;
            Q2.pop();
        }
        //다리내 트럭 무게+진입할 트럭무게 합으로 진입여부 체크,Q1.front()할때 런타임 에러 방지
        if(!Q1.empty()&&Q1.front()+weight<=L){
            int tmp=Q1.front();
            Q2.push({tmp,cnt});
            weight+=tmp;
            Q1.pop();
        }
    }
    cout<<cnt;
}