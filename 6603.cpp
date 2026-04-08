#include <bits/stdc++.h>
using namespace std;

//next_permutation
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int n;
        cin>>n;
        if(n==0) break;
        int* arr=new int[n];
        int* num=new int[n];
        fill(arr,arr+n,0);
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        for(int i=6;i<n;i++)
            arr[i]=1;
    
        do{
            for(int i=0;i<n;i++){
                if(arr[i]==0)
                    cout<<num[i]<<' ';
            }
            cout<<'\n';
        }
        while(next_permutation(arr,arr+n));
        cout<<'\n';
        delete []arr;
        delete []num;
    }


}