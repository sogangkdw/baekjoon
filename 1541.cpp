#include <bits/stdc++.h>
using namespace std;
string s;
int n,sum;
bool mi=false;
int main(void){
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='-'&&mi==false){
            mi=true;
            sum+=n;
            n=0;
        }
        else if(s[i]=='-'&&mi==true){
            sum-=n;
            n=0;
        }
        else if(s[i]=='+'){
            if(mi) sum-=n;
            else sum+=n;
            n=0;
        }

        else{
            int tmp=n;
            n=tmp*10+s[i]-'0';
        }
    }
    if(mi) sum-=n;
    else sum+=n;
    cout<<sum;
}