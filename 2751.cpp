#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
    vector<int> ar;
    int number,a;
    cin>>number;
    for(int i=0;i<number;i++){
        cin>>a;
        ar.push_back(a);
    }
    sort(ar.begin(),ar.end());
    for(auto k:ar){
        cout<<k<<'\n';
    }
    
}