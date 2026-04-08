#include <bits/stdc++.h>
using namespace std;

int main(void){
    int num=0,count=0;
    cin>>num;
    cin.ignore();
    for(int i=0;i<num;i++){
        string str;
        stack<char> s;
        bool b=true;
        getline(cin,str);
        for(auto i:str){
            if(s.empty())
                s.push(i);
            else if(i=='A'){
                if(s.top()!='A')
                    s.push(i);
                else s.pop();
            }
            else if(i=='B'){
                if(s.top()!='B')
                    s.push(i);
                else s.pop();
            }
        }
        if(!s.empty())
            b=false;
        if(b)
            count++;
        
    }
    cout<<count<<'\n';
}