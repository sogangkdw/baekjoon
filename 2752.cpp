#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> k;
    int n;
    for(int i=0;i<3;i++){
        cin>>n;
        k.push_back(n);
    }
    sort(k.begin(),k.end());
    for(auto i:k){
        cout<<i<<' ';
    }
    return 0;
}