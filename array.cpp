#include <bits/stdc++.h>
using namespace std;

void insert(int idx, int num, int arr[],int& len){
    for(int i=len;i>idx;i--){
        arr[i]=arr[i-1];
    }
    arr[idx]=num;
    len++;
    for(int i=0;i<len;i++){
        cout<<arr[i]<<' ';
    }
}
//10 50 60 40 30 70 20
void erase(int idx, int arr[],int& len){
    for(int i=idx;i<len-1;i++){
        arr[i]=arr[i+1];
    }
    arr[len--]=0;
    for(int i=0;i<len;i++){
        cout<<arr[i]<<' ';
    }

}

int main(void){
    int arr[10]={10,50,40,30,70,20};
    int len=6;
    insert(3,60,arr,len);
    cout<<'\n';
    erase(4,arr,len);
}