#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void){
    vector<pair<string,string>> arr;
    vector<string> en;
    int N;
    scanf("%d",&N);
    string s1, s2;
    string s3="enter";
    for(int i=0;i<N;i++){
        cin>>s1>>s2;
        auto it = find_if(arr.begin(), arr.end(), [s1](const pair<string, string>& elem) { return elem.first == s1; });
        if(it==arr.end()){
            arr.push_back(make_pair(s1,s2));
        }
        else{
            it->second=s2;
            
        }
    }
    for(int i=0;i<N;i++){
        if(arr[i].second==s3){
            en.push_back(arr[i].first);
        }
    }
    sort(en.rbegin(),en.rend());

    for(auto s1:en){
        cout<<s1;
        printf("\n");
    }

}