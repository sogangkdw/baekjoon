#include <bits/stdc++.h>
using namespace std;

int main(void){
    stack<char> st;
    string str;
    cin>>str;
    int sum=0;
    int cal=1;
    bool truth=true;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('){
            st.push(str[i]);
            cal*=2;
        }
        else if(str[i]=='['){
            st.push(str[i]);
            cal*=3;
        }
        else if(str[i]==')'){
            if(st.empty()||st.top()!='('){
                truth=false;
            }
            else{
                if(str[i-1]=='(') sum+=cal;
                cal/=2;
                st.pop();
            }
        }
        else if(str[i]==']'){
            if(st.empty()||st.top()!='['){
                truth=false;
            }
            else{
                if(str[i-1]=='[') sum+=cal;
                cal/=3;
                st.pop();
            }
        }
    }
    if(!st.empty()) truth=false;

    if(truth) cout<<sum<<'\n';
    else cout<<0<<'\n';
}