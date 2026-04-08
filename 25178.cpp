#include <bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
int n;
bool t=true;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string vowel="aeiou";
    cin>>n;
    cin>>s1>>s2;
    for(auto i:s1){
        if(vowel.find(i)!=string::npos) continue;
        s3+=i;
    }
   
    for(auto i:s2){
        if(vowel.find(i)!=string::npos) continue;
        s4+=i;
    }
    if(s3!=s4) t=false;
    if(s1[0]!=s2[0]||s1[n-1]!=s2[n-1]) t=false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1!=s2) t=false;
    if(t) cout<<"YES";
    else cout<<"NO";
}