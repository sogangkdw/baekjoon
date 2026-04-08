#include <bits/stdc++.h>

using namespace std;

int main(void){
    string s;
    while(1){
        stack<char> st;
        getline(cin,s);
        bool t=true;
        if(s[0]=='.')
            break;
        for(auto k:s){
            if(k=='[')
                st.push(k);
            else if(k=='(')
                st.push(k);
            else if(k==']'){
                if(st.empty()||st.top()!='['){//이러면 st.empty()인 경우 ||의 우측 계산 안 하고 t=false 및 break
                    t=false;
                    break;
                }
                st.pop();
            }
            else if(k==')'){
                if(st.empty()||st.top()!='('){
                    t=false;
                    break;
                }
                st.pop();
            }
            //이렇게 하면 empty일때도 st.top()을 해서 런타임 에러
            // else if(k==')'){
            //     if(st.top()=='(')
            //         st.pop();
            //     else break;
            // }
        }
        if(!st.empty()){
            t=false;
        }
        if(t) cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}