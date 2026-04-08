#include <bits/stdc++.h>
#include <map>
using namespace std;
string s;
map<string,double> m;
double tot;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ifstream fp("4358.txt");
    while(getline(fp,s)){
        m[s]++;
    // if(m.find(s)!=m.end()){
        // auto it = m.find(s);
        // it->second++;       
        // }
        // else m.insert({s,1});
    }
    for(auto i:m){
        tot+=i.second;
    }
    for(auto i=m.begin();i!=m.end();i++){
        m[i->first]=((i->second)/tot)*100;
    }
    cout<<fixed;
    cout.precision(4);//소수 4째자리 출력으로 고정
    for(auto i:m){
        cout<<i.first<<' '<<i.second<<'\n';
    }    
}

