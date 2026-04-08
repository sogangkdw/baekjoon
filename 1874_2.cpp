#include <bits/stdc++.h>
using namespace std;

int main(void){
    vector<char> v;
    stack<int> s;
    bool truth=1;
    int n;
    cin>>n;
    int k=1;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    s.push(0);
    //s.top()==arr[i]인 경우 pop()을 하면 그다음 arr[i]는 s.top()보다 크거나 같아야함. 작은 경우는 수열을 만들 수 없음.
    for(int i=0;i<n;i++){
        while(s.top()!=arr[i]){
            if(s.top()<arr[i]){
                s.push(k);
                v.push_back('+');
                k++;
            }
            else{
                truth=0;
                cout<<"NO"<<'\n';
                return 0;
            }            
        }
        s.pop();
        v.push_back('-');
        
    }
    if(truth){
        for(auto i:v){
            cout<<i<<'\n';
        }
    }

    delete []arr;
}