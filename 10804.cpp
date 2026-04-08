#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    vector<int> v;
    int first,last;
    for(int i=1;i<=20;i++){
        v.push_back(i);
    }

    for(int i=0;i<10;i++){
        cin>>first>>last;
        reverse(v.begin()+first-1,v.begin()+last);
    }
;
    for(auto i:v){
        cout<<i<<' ';
    }
    return 0;
}