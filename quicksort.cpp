#include <bits/stdc++.h>
using namespace std;
int arr[8]={6,-8,1,12,8,3,7,-7};

void quick(int st,int en){
    if(en-st<=1) return;
    int pivot=arr[st];
    int l=st+1,r=en-1;
    while(1){
        while(l<=r&&arr[l]<=pivot) l++;
        while(l<=r&&arr[r]>pivot) r--;
        if(l>r) break;
        swap(arr[l],arr[r]);
    }
    swap(arr[r],arr[st]);
    quick(st,r);
    quick(r+1,en);
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    quick(0,8);
    for(auto i:arr){
        cout<<i<<' ';
    }
    return 0;
}