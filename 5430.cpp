#include <bits/stdc++.h>
#include <sstream>

using namespace std;
bool t=1;
bool rev=1;//0이면 뒤집음.
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s,arr;
        cin>>s;
        int num;
        cin>>num;
        cin>>arr;
        //문자들 ' '치환
        for(char& c:arr){
            if(c==']'||c==','||c=='[')
                c=' ';
        }
        //문자열에서 정수 추출
        stringstream ss(arr);
        int x;
        deque<int> d;
        while(ss>>x){
            d.push_back(x);
        }

        for(auto w:s){
            if(w=='R')
                rev=!rev;//매번 뒤집으면 O(N*M)으로 시간초과(M은 횟수) 결국 한번만 뒤집을지 결정하면 됨
                
            else if(w=='D'){
                if(d.empty())
                    t=0;
                else{
                    if(rev) d.pop_front();
                    else d.pop_back();
                }
            }
        }

        if(!rev){
            reverse(d.begin(),d.end());
        }

        if(t){
            cout<<'[';
            for(int i=0;i<d.size();i++){
                cout<<d[i];
                    if(i<d.size()-1)
                        cout<<',';
                }
            cout<<']'<<'\n';
            }
    

        
        else cout<<"error"<<'\n';

        t=1;
        rev=1;

    }
    return 0;
}
// RDD
// 4
// [1,2,3,4]
