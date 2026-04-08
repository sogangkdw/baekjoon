#include <bits/stdc++.h>
using namespace std;

int main(void){
    stack<char> st;
    string str;
    cin>>str;
    char bef;//그전의 문자 확인
    int count=0;
    for(auto i:str){
        if(i=='('){
            st.push(i);
            bef=i;
        }
        else if(i==')'){
            st.pop();
            //레이저
            if(bef=='('){
                count+=st.size();
            }
            //막대 끝
            else if(bef==')') count++;
            bef=i;
        }
    }
    cout<<count<<'\n';
    return 0;
}


