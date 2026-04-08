#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> st;
    int num;
    cin>>num;
    string s;
    for(int i=0;i<num;i++){
        cin>>s;
        if(s=="push"){
            int p;
            cin>>p;
            st.push(p);
        }
        else if(s=="pop")
            if(st.empty())
                cout<<-1<<'\n';
            else {
                cout<<st.top()<<'\n';
                st.pop();}
        else if(s=="top")
            if(st.empty())
                cout<<-1<<'\n';
            else cout<<st.top()<<'\n';
        else if(s=="size")
            cout<<st.size()<<'\n';
        else
            if(st.empty())
                cout<<1<<'\n';
            else cout<<0<<'\n';
    }
}