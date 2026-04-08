#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int main(void){
    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    int idx=s2.length()-1;
    stack<char> st;
    vector<char> q;
  
    for(int i=0;i<s1.length();i++){
      
        st.push(s1[i]);
        if(st.top()==s2[idx]&&st.size()>=s2.length()){
            for(int j=0;j<s2.length();j++){
                s3.push_back(st.top());
                st.pop();
            }
            reverse(s3.begin(),s3.end());
          
         
            if(s2!=s3){
                for(int j=0;j<s3.length();j++){
                    st.push(s3[j]);
                }
            }
            s3.clear();
        }
    }
    while(!st.empty()){
        q.push_back(st.top());
        st.pop();
    }
    reverse(q.begin(),q.end());
    if(q.empty()){
        cout<<"FRULA";
    }
    else{
        for(vector<char>::iterator it=q.begin();it!=q.end();it++){
            cout<<*it;
        }
    }
    cout<<'\n';
}