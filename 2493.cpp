#include <bits/stdc++.h>
using namespace std;

//O(N^2) 시간초과
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);
    stack<int> s1;
    stack<int> s2;
    int n,N;
    bool t=1;
    cin>>n;
    int* arr=new int[n];

    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        s1.push(num);
    }
    for(int i=0;i<n;i++){
        int pos=s1.size();
        N=s1.top();
        s1.pop();
        t=1;
        while(t){
            if(!s1.empty()){
                if(s1.top()>=N){
                    arr[pos-1]=s1.size();
                    t=0;
                }
                else{
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            else{
                arr[pos-1]=0;
                t=0;
            }
        }
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }

    delete []arr;
}