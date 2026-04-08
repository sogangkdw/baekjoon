#include <bits/stdc++.h>
using namespace std;
#define X 2000001
#define Y 1000000
int arr[X];
int n;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        arr[Y+num]++;
    }
    for(int i=0;i<X;i++){
        while(arr[i]>0){
            cout<<i-Y<<'\n';
            arr[i]--;
        }    
    }
}