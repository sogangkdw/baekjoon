#include <bits/stdc++.h>
using namespace std;
string s;
int n;
int arr[5];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='H'){
            arr[0]++;
        }
        else if(s[i]=='I'){
            arr[1]++;
        }
        else if(s[i]=='A'){
            arr[2]++;
        }
        else if(s[i]=='R'){
            arr[3]++;
        }
        else if(s[i]=='C'){
            arr[4]++;
        }
    }
    int mn=*min_element(arr,arr+5);
    cout<<mn;
}