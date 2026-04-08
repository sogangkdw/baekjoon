#include <bits/stdc++.h>
using namespace std;
vector<int> v1;
vector<int> v2;
vector<int> V;
int a,b,num;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>a>>b;
    for(int i=0;i<a;i++){
        cin>>num;
        v1.push_back(num);
    }
    for(int i=0;i<b;i++){
        cin>>num;
        v2.push_back(num);
    }
    vector<int>::iterator it1=v1.begin();
    vector<int>::iterator it2=v2.begin();

    while(it1!=v1.end()&&it2!=v2.end()){
        if(*it1<=*it2){
            V.push_back(*it1);
            it1++;
        }
        else{
            V.push_back(*it2);
            it2++;
        }
    }
    while(it1!=v1.end()){
        V.push_back(*it1);
        it1++;
    }
    while(it2!=v2.end()){
        V.push_back(*it2);
        it2++;
    }
    for(auto i:V){
        cout<<i<<' ';
    }
    return 0;

}