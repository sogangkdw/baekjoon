#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string &a,const string &b){
    if(a.length()==b.length()){
        return a<b;
    }
    return a.length()<b.length();
}

int main(void){
    set<string> arr;
    int N;
    cin>>N;
    string word;
    vector<string> new_arr;

    for(int i=0;i<N;i++){
        cin>>word;
        arr.insert(word);
    }
    new_arr.assign(arr.begin(),arr.end());
    sort(new_arr.begin(),new_arr.end(),compare);

    for(auto i:new_arr){
        cout<<i<<endl;
    }
}