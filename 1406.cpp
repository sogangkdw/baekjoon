#include <iostream>
#include <list>
#include <string>
using namespace std;

void edit(list<char>& L,list<char>::iterator& t){
    char op;
    cin>>op;
    if(op=='P'){
        char add;
        cin>>add;
        L.insert(t,add);
    }

    else if(op=='L'){
        if(t!=L.begin()) t--;
    }

    else if(op=='D'){
        if(t!=L.end()) t++;
    }

    else{
        if(t!=L.begin()){
            t--;
            t=L.erase(t);
        }
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string N;
    int n;
    cin>>N;
    cin>>n;
    list<char> L(N.begin(),N.end());
    list<char>::iterator t=L.end();
    for(int i=0;i<n;i++){
        edit(L,t);
    }

    for(auto i:L){
        cout<<i;
    }
   
}