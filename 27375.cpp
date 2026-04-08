#include <bits/stdc++.h>
using namespace std;
int n,k,w,s,e,cnt;
vector<pair<int,int>> v[6];
int t[6];
//day=요일, grade= 총 학점, st= v의 인덱스(for문 시작)
void func(int day,int grade,int st){
    //금공강이니까 금요일 되면 확인
    if(day==5){
        if(grade==k) cnt++;
        return;
    }
    //암것도 안 듣고 넘어가기
    func(day+1,grade,0);
    //그 날 겹치는 과목 확인
    for(int i=st;i<v[day].size();i++){
        int tmp=(1<<v[day][i].second)-(1<<(v[day][i].first-1));
        //안겹쳤을때
        if((t[day]&tmp)==0){
            t[day]|=tmp;
            func(day,grade+(v[day][i].second-v[day][i].first+1),i+1);
            //원상복구
            t[day]^=tmp;
        }
        else continue;
    }
}




int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>w>>s>>e;
        v[w].push_back({s,e});
    }
    func(1,0,0);
    cout<<cnt;
}