#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;



int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        vector<char> v;
        list<char> l;
        list<char>::iterator cursor;
        cin>>str;
        for(auto it:str){
            v.push_back(it);
        }
        cursor=l.begin();
        for(auto it:v){
            if(it=='<'){
                if(cursor==l.begin())
                    continue;
                cursor--;
            }
            else if(it=='>'){
                if(cursor==l.end())
                    continue;
                cursor++;
            }
            else if(it=='-') {
                if (cursor != l.begin()) {
                    cursor--;
                    cursor = l.erase(cursor);
                    }
            }
            else
                l.insert(cursor,it);
        }

        for(auto it:l)
            cout<<it;
        cout<<'\n';
    }
    return 0;
}